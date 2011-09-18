/* xnoise-mpris-one.vala
 *
 * Copyright (C) 2011 Jörn Magens
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  The Xnoise authors hereby grant permission for non-GPL compatible
 *  GStreamer plugins to be used and distributed together with GStreamer
 *  and Xnoise. This permission is above and beyond the permissions granted
 *  by the GPL license by which Xnoise is covered. If you modify this code
 *  you may extend this exception to your version of the code, but you are not
 *  obligated to do so. If you do not wish to do so, delete this exception
 *  statement from your version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA.
 *
 * Author:
 * Andreas Obergrusberger
 * Jörn Magens
 */

// exposes xnoise's player and tracklist controls via dbus using the mpris v1 interface
// refer to 
// http://www.mpris.org/1.0/spec.html

using Gtk;
using Xnoise;
using Xnoise.PluginModule;


public class Xnoise.FirstMpris : GLib.Object, IPlugin {
	public Main xn { get; set; }
	private uint owner_id;
	private uint object_id_root;
	private uint object_id_player;
	public FirstMprisPlayer player = null;
	public FirstMprisRoot root = null;
	public FirstMprisTrackList tracklist = null;
	private unowned PluginModule.Container _owner;
	private unowned DBusConnection conn;
	
	public PluginModule.Container owner {
		get {
			return _owner;
		}
		set {
			_owner = value;
		}
	}
	
	public string name { 
		get {
			return "mpris";
		} 
	}
	
	private void on_bus_acquired(DBusConnection connection, string name) {
		this.conn = connection;
		//print("bus acquired\n");
		try {
			root = new FirstMprisRoot(connection);
			connection.register_object("/", root);
			player = new FirstMprisPlayer(connection);
			connection.register_object("/Player", player); //"/org/mpris/MediaPlayer2", player);
			tracklist = new FirstMprisTrackList(connection);
			connection.register_object("/org/mpris/MediaPlayer2", tracklist);
		} 
		catch(IOError e) {
			print("%s\n", e.message);
		}
	}

	private void on_name_acquired(DBusConnection connection, string name) {
		//print("name acquired\n");
	}	

	private void on_name_lost(DBusConnection connection, string name) {
		print("name_lost\n");
	}
	
	public bool init() {
			owner_id = Bus.own_name(BusType.SESSION,
			                        "org.mpris.xnoise",
			                         GLib.BusNameOwnerFlags.NONE,
			                         on_bus_acquired,
			                         on_name_acquired,
			                         on_name_lost);
		if(owner_id == 0) {
			print("mpris error\n");
			return false;
		}
		owner.sign_deactivated.connect(clean_up);
		return true;
	}
	
	public void uninit() {
		clean_up();
	}

	private void clean_up() {
		if(owner_id == 0)
			return;
		this.conn.unregister_object(object_id_player);
		this.conn.unregister_object(object_id_root);
		Bus.unown_name(owner_id);
		object_id_player = 0;
		object_id_root = 0;
		owner_id = 0;
	}
	
	~FirstMpris() {
	}

	public Gtk.Widget? get_settings_widget() {
		return null;
	}

	public bool has_settings_widget() {
		return false;
	}
}


[DBus(name = "org.freedesktop.MediaPlayer")]
public class FirstMprisRoot : GLib.Object {
	private unowned Main xn;
	private unowned DBusConnection conn;
	
	public FirstMprisRoot(DBusConnection conn) {
		this.conn = conn;
		this.xn = Main.instance;
	}
	
	public string Identity() {
		return "xnoise";
	}
	
	public void Quit() {
		xn.quit();
	}
	
	public VersionStruct MprisVersion() {
		var v = VersionStruct();
		v.Major = 1;
		v.Minor = 0;
		return v;
	}
}

public struct VersionStruct {
	uint16 Major;
	uint16 Minor;
}



[DBus(name = "org.mpris.MediaPlayer.Player")]
public class FirstMprisPlayer : GLib.Object {
	private unowned Main xn;
	private unowned DBusConnection conn;
	
	private const string INTERFACE_NAME = "org.mpris.MediaPlayer.Player";
	
//	private uint send_property_source = 0;
//	private uint update_metadata_source = 0;
//	private HashTable<string,Variant> changed_properties = null;
//	
//	private enum Direction {
//		NEXT = 0,
//		PREVIOUS,
//		STOP
//	}
	
	public FirstMprisPlayer(DBusConnection conn) {
		this.conn = conn;
		this.xn = Main.instance;
		
		
		// TODO: Event handlers do not exist yet!!!
//		Xnoise.global.notify["player-state"].connect( (s, p) => {
//			//print("player state queued for mpris: %s\n", this.PlaybackStatus);
//			Variant variant = this.PlaybackStatus;
//			queue_property_for_notification("PlaybackStatus", variant);
//		});
		
//		Xnoise.global.tag_changed.connect(on_tag_changed);
//		
//		gst_player.notify["volume"].connect( () => {
//			Variant variant = gst_player.volume;
//			queue_property_for_notification("Volume", variant);
//		});
//		
//		Xnoise.global.notify["image-path-large"].connect( () => {
//			string? s = Xnoise.global.image_path_large;
//			if(s == null) {
//				_metadata.insert("mpris:artUrl", "");
//			}
//			else {
//				File f = File.new_for_commandline_arg(s);
//				if(f != null)
//					_metadata.insert("mpris:artUrl", f.get_uri());
//				else
//					_metadata.insert("mpris:artUrl", "");
//			}
//			trigger_metadata_update();
//		});
//		
//		gst_player.notify["length-time"].connect( () => {
//			//print("length-time: %lld\n", (int64)(gst_player.length_time / (int64)1000));
//			if(_metadata.lookup("mpris:length") == null) {
//				_metadata.insert("mpris:length", ((int64)0));
//				trigger_metadata_update();
//				return;
//			}
//			
//			int64 length_val = (int64)(gst_player.length_time / (int64)1000);
//			if(((int64)_metadata.lookup("mpris:length")) != length_val) { 
//				_metadata.insert("mpris:length", length_val);
//				trigger_metadata_update();
//			}
//		});
	}
	
	private static enum Direction {
		NEXT = 0,
		PREVIOUS,
		STOP
	}	
	
	public signal void TrackChange(HashTable<string, Variant?> Metadata);
	public signal void StatusChange(StatusStruct Status);
	public signal void CapsChange(int Capabilities);

	public void Next() {
		//print("next\n");
		global.next();
	}
	
	public void Prev() {
		//print("prev\n");
		global.prev();
	}
	
	public void Pause() {
		//print("pause\n");
		global.pause();
	}
	
	public void Play() {
		//print("play\n");
		global.play(false);
	}

	public void Repeat(bool rpt) {
	}
	
	public void Stop() {
		//print("stop\n");
		global.stop();
	}
	
	public StatusStruct GetStatus() {
		var ss = StatusStruct();
		//ss.playback_state = 
		return ss;
	}
	
	public HashTable<string, Variant?>? GetMetadata() {
		return null;
	}
	
	public int GetCaps() {
		return 0;
	}
	
	public void VolumeSet(int Volume) {
		double v = (double)Volume/100;
		if(v < 0.0)
			v = 0.0;
		if(v > 1.0)
			v = 1.0;
		
		gst_player.volume = v;
	}
	
	public int VolumeGet() {
		double vol = 100.0*gst_player.volume;
		return (int)vol;
		
	}
	
	public void PositionSet(int Position) {
		if(gst_player.length_time == 0) return; 
		gst_player.gst_position = (double)Position/(double)(gst_player.length_time/1000000);
	}
	
	public int PositionGet() {
		if(gst_player.length_time == 0) return -1;
		double pos = gst_player.gst_position;
		double rel_pos = pos * gst_player.length_time / 1000000;
		return (int)rel_pos;//buf.to_int();
	}
}

public struct StatusStruct {
	int playback_state;
	int shuffle_state;
	int repeat_current_state;
	int endless_state;
}

[DBus(name = "org.freedesktop.MediaPlayer")]
public class FirstMprisTrackList : GLib.Object {
	private unowned Xnoise.Main xn;
	private unowned DBusConnection conn;
	public signal void TrackListChange(int Nb_Tracks);
	
	public FirstMprisTrackList(DBusConnection conn) {
		this.conn = conn;
		this.xn = Main.instance;
	}

	public HashTable<string, Variant?>? GetMetadata(int Position) {
		return null;
	}
	
	public int GetCurrentTrack() {
		return 0;
	}
	
	public int GetLength() {
		return 0;
	}
	
	public int AddTrack(string Uri, bool PlayImmediately) { 
		return 0;
	}
	
	public void DelTrack(int Position) {
	}
	
	public void SetLoop(bool State) {
	}
	
	public void SetRandom(bool State) {
	}
}


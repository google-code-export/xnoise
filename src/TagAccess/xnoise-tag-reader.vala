/* xnoise-tag-reader.vala
 *
 * Copyright (C) 2009-2010  Jörn Magens
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
 * 	Jörn Magens
 */


public class Xnoise.TagReader {
//	public TagReader() {
//		print("construct TagReader\n");
//	}
	public TrackData read_tag(string filename) {
		File f = File.new_for_path(filename);
		TrackData td;
		TagLib.File taglib_file = null;
		taglib_file = new TagLib.File(filename);
		if(taglib_file!=null) {
			unowned TagLib.Tag t              = taglib_file.tag;
			unowned TagLib.AudioProperties ap = taglib_file.audioproperties;
			td = new TrackData();
			if(t != null && ap != null) {
				try {
					// from class Tag
					if(t != null) {
						Item? item = Item(ItemType.LOCAL_AUDIO_TRACK, f.get_uri());
						td.artist      = t.artist;
						td.title       = t.title;
						td.album       = t.album;
						td.genre       = t.genre;
						td.year        = t.year;
						td.tracknumber = t.track;
						td.item        = item;
					} 
					else {
						Item? item = item_handler_manager.create_uri_item(f.get_uri());// Item(ItemType.LOCAL_AUDIO_TRACK, f.get_uri());
						td.artist = "unknown artist";
						td.title  = "unknown title";
						td.album  = "unknown album";
						td.genre  = "unknown genre";
						td.tracknumber = (uint)0;
						td.item   = item;
					}	
					// from class AudioProperties
					if(ap != null) {
						td.length      = (int32)ap.length;
						td.bitrate     = ap.bitrate;
					} else {
						td.length = (int32)0;
						td.bitrate = 0;
					}		
				}
				finally {
					if((td.artist == "")||(td.artist == null)) td.artist = "unknown artist";
					if((td.title  == "")||(td.title  == null)) td.title  = "unknown title";
					if((td.album  == "")||(td.album  == null)) td.album  = "unknown album";
					if((td.genre  == "")||(td.genre  == null)) td.genre  = "unknown genre";
					t = null;
					taglib_file = null;
				}
			}
			else {
				td = new TrackData();
				Item? item = item_handler_manager.create_uri_item(f.get_uri());
				td.artist = "unknown artist";
				td.title  = "unknown title";
				td.album  = "unknown album";
				td.genre  = "unknown genre";
				td.tracknumber = (uint)0;
				td.item   = item;

				td.length = (int32)0;
				td.bitrate = 0;
			}
		}
		else {
			td = new TrackData();

			td.artist = "unknown artist";
			td.title  = "unknown title";
			td.album  = "unknown album";
			td.genre  = "unknown genre";
			td.tracknumber = (uint)0;
			td.item   = Item(ItemType.UNKNOWN, f.get_uri());

			td.length = (int32)0;
			td.bitrate = 0;
		}

		if(td.title  == "unknown title") {
			td.title = prepare_name_from_filename(GLib.Filename.display_basename(filename));
		}
		return td;
	}
}

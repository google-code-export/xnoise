/* libplaylist.h generated by valac, the Vala compiler, do not modify */


#ifndef __LIBPLAYLIST_H__
#define __LIBPLAYLIST_H__

#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib-object.h>

G_BEGIN_DECLS


#define PL_TYPE_LIST_TYPE (pl_list_type_get_type ())

#define PL_TYPE_RESULT (pl_result_get_type ())

#define PL_TYPE_DATA (pl_data_get_type ())
#define PL_DATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PL_TYPE_DATA, PlData))
#define PL_DATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PL_TYPE_DATA, PlDataClass))
#define PL_IS_DATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PL_TYPE_DATA))
#define PL_IS_DATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PL_TYPE_DATA))
#define PL_DATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PL_TYPE_DATA, PlDataClass))

typedef struct _PlData PlData;
typedef struct _PlDataClass PlDataClass;
typedef struct _PlDataPrivate PlDataPrivate;

#define PL_DATA_TYPE_FIELD (pl_data_field_get_type ())

#define PL_TYPE_DATA_COLLECTION (pl_data_collection_get_type ())
#define PL_DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PL_TYPE_DATA_COLLECTION, PlDataCollection))
#define PL_DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PL_TYPE_DATA_COLLECTION, PlDataCollectionClass))
#define PL_IS_DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PL_TYPE_DATA_COLLECTION))
#define PL_IS_DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PL_TYPE_DATA_COLLECTION))
#define PL_DATA_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PL_TYPE_DATA_COLLECTION, PlDataCollectionClass))

typedef struct _PlDataCollection PlDataCollection;
typedef struct _PlDataCollectionClass PlDataCollectionClass;
typedef struct _PlDataCollectionPrivate PlDataCollectionPrivate;

#define PL_DATA_COLLECTION_TYPE_ITERATOR (pl_data_collection_iterator_get_type ())
#define PL_DATA_COLLECTION_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PL_DATA_COLLECTION_TYPE_ITERATOR, PlDataCollectionIterator))
#define PL_DATA_COLLECTION_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PL_DATA_COLLECTION_TYPE_ITERATOR, PlDataCollectionIteratorClass))
#define PL_DATA_COLLECTION_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PL_DATA_COLLECTION_TYPE_ITERATOR))
#define PL_DATA_COLLECTION_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PL_DATA_COLLECTION_TYPE_ITERATOR))
#define PL_DATA_COLLECTION_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PL_DATA_COLLECTION_TYPE_ITERATOR, PlDataCollectionIteratorClass))

typedef struct _PlDataCollectionIterator PlDataCollectionIterator;
typedef struct _PlDataCollectionIteratorClass PlDataCollectionIteratorClass;
typedef struct _PlDataCollectionIteratorPrivate PlDataCollectionIteratorPrivate;

#define PL_TYPE_READER (pl_reader_get_type ())
#define PL_READER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PL_TYPE_READER, PlReader))
#define PL_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PL_TYPE_READER, PlReaderClass))
#define PL_IS_READER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PL_TYPE_READER))
#define PL_IS_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PL_TYPE_READER))
#define PL_READER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PL_TYPE_READER, PlReaderClass))

typedef struct _PlReader PlReader;
typedef struct _PlReaderClass PlReaderClass;
typedef struct _PlReaderPrivate PlReaderPrivate;

#define PL_TYPE_WRITER (pl_writer_get_type ())
#define PL_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PL_TYPE_WRITER, PlWriter))
#define PL_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PL_TYPE_WRITER, PlWriterClass))
#define PL_IS_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PL_TYPE_WRITER))
#define PL_IS_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PL_TYPE_WRITER))
#define PL_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PL_TYPE_WRITER, PlWriterClass))

typedef struct _PlWriter PlWriter;
typedef struct _PlWriterClass PlWriterClass;
typedef struct _PlWriterPrivate PlWriterPrivate;

typedef enum  {
	PL_READER_ERROR_UNKNOWN_TYPE,
	PL_READER_ERROR_SOMETHING_ELSE
} PlReaderError;
#define PL_READER_ERROR pl_reader_error_quark ()
typedef enum  {
	PL_WRITER_ERROR_UNKNOWN_TYPE,
	PL_WRITER_ERROR_NO_DATA,
	PL_WRITER_ERROR_NO_DEST_URI
} PlWriterError;
#define PL_WRITER_ERROR pl_writer_error_quark ()
typedef enum  {
	PL_LIST_TYPE_UNKNOWN = 0,
	PL_LIST_TYPE_IGNORED,
	PL_LIST_TYPE_M3U,
	PL_LIST_TYPE_PLS,
	PL_LIST_TYPE_ASX,
	PL_LIST_TYPE_XSPF
} PlListType;

typedef enum  {
	PL_RESULT_UNHANDLED = 0,
	PL_RESULT_ERROR,
	PL_RESULT_IGNORED,
	PL_RESULT_SUCCESS,
	PL_RESULT_EMPTY
} PlResult;

struct _PlData {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PlDataPrivate * priv;
};

struct _PlDataClass {
	GTypeClass parent_class;
	void (*finalize) (PlData *self);
};

typedef enum  {
	PL_DATA_FIELD_URI = 0,
	PL_DATA_FIELD_TITLE,
	PL_DATA_FIELD_AUTHOR,
	PL_DATA_FIELD_GENRE,
	PL_DATA_FIELD_ALBUM,
	PL_DATA_FIELD_COPYRIGHT,
	PL_DATA_FIELD_DURATION,
	PL_DATA_FIELD_PARAM_NAME,
	PL_DATA_FIELD_PARAM_VALUE,
	PL_DATA_FIELD_IS_REMOTE,
	PL_DATA_FIELD_IS_PLAYLIST
} PlDataField;

struct _PlDataCollection {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PlDataCollectionPrivate * priv;
};

struct _PlDataCollectionClass {
	GTypeClass parent_class;
	void (*finalize) (PlDataCollection *self);
};

struct _PlDataCollectionIterator {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PlDataCollectionIteratorPrivate * priv;
};

struct _PlDataCollectionIteratorClass {
	GTypeClass parent_class;
	void (*finalize) (PlDataCollectionIterator *self);
};

struct _PlReader {
	GObject parent_instance;
	PlReaderPrivate * priv;
};

struct _PlReaderClass {
	GObjectClass parent_class;
};

struct _PlWriter {
	GObject parent_instance;
	PlWriterPrivate * priv;
};

struct _PlWriterClass {
	GObjectClass parent_class;
};


GQuark pl_reader_error_quark (void);
GQuark pl_writer_error_quark (void);
GType pl_list_type_get_type (void);
GType pl_result_get_type (void);
extern gboolean pl_debug;
glong pl_get_duration_from_string (char** duration_string);
GFile* pl_get_file_for_location (char** adr, char** base_path);
PlListType pl_get_playlist_type_for_uri (char** uri_);
PlListType pl_get_type_by_extension (char** uri_);
PlListType pl_get_type_by_data (char** uri_);
gpointer pl_data_ref (gpointer instance);
void pl_data_unref (gpointer instance);
GParamSpec* pl_param_spec_data (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void pl_value_set_data (GValue* value, gpointer v_object);
void pl_value_take_data (GValue* value, gpointer v_object);
gpointer pl_value_get_data (const GValue* value);
GType pl_data_get_type (void);
GType pl_data_field_get_type (void);
PlData* pl_data_new (void);
PlData* pl_data_construct (GType object_type);
void pl_data_add_field (PlData* self, PlDataField field, const char* val);
PlDataField* pl_data_get_contained_fields (PlData* self, int* result_length1);
char* pl_data_get_field (PlData* self, PlDataField field);
char* pl_data_get_uri (PlData* self);
char* pl_data_get_title (PlData* self);
char* pl_data_get_author (PlData* self);
char* pl_data_get_genre (PlData* self);
char* pl_data_get_album (PlData* self);
char* pl_data_get_copyright (PlData* self);
char* pl_data_get_duration_string (PlData* self);
char* pl_data_get_param_name (PlData* self);
char* pl_data_get_param_value (PlData* self);
glong pl_data_get_duration (PlData* self);
gboolean pl_data_is_remote (PlData* self);
gboolean pl_data_is_playlist (PlData* self);
gpointer pl_data_collection_ref (gpointer instance);
void pl_data_collection_unref (gpointer instance);
GParamSpec* pl_param_spec_data_collection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void pl_value_set_data_collection (GValue* value, gpointer v_object);
void pl_value_take_data_collection (GValue* value, gpointer v_object);
gpointer pl_value_get_data_collection (const GValue* value);
GType pl_data_collection_get_type (void);
PlDataCollection* pl_data_collection_new (void);
PlDataCollection* pl_data_collection_construct (GType object_type);
gint pl_data_collection_get_size (PlDataCollection* self);
gboolean pl_data_collection_data_available (PlDataCollection* self);
char** pl_data_collection_get_found_uris (PlDataCollection* self, int* result_length1);
char* pl_data_collection_get_title_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_author_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_genre_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_album_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_copyright_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_duration_string_for_uri (PlDataCollection* self, char** uri_needle);
glong pl_data_collection_get_duration_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_param_name_for_uri (PlDataCollection* self, char** uri_needle);
char* pl_data_collection_get_param_value_for_uri (PlDataCollection* self, char** uri_needle);
gboolean pl_data_collection_get_is_remote_for_uri (PlDataCollection* self, char** uri_needle);
gboolean pl_data_collection_get_is_playlist_for_uri (PlDataCollection* self, char** uri_needle);
gint pl_data_collection_get_number_of_entries (PlDataCollection* self);
gboolean pl_data_collection_contains (PlDataCollection* self, PlData* d);
gboolean pl_data_collection_contains_field (PlDataCollection* self, PlDataField field, const char* value);
gpointer pl_data_collection_iterator_ref (gpointer instance);
void pl_data_collection_iterator_unref (gpointer instance);
GParamSpec* pl_data_collection_param_spec_iterator (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void pl_data_collection_value_set_iterator (GValue* value, gpointer v_object);
void pl_data_collection_value_take_iterator (GValue* value, gpointer v_object);
gpointer pl_data_collection_value_get_iterator (const GValue* value);
GType pl_data_collection_iterator_get_type (void);
PlDataCollectionIterator* pl_data_collection_iterator (PlDataCollection* self);
gint pl_data_collection_index_of (PlDataCollection* self, PlData* d);
PlData* pl_data_collection_get (PlDataCollection* self, gint index);
void pl_data_collection_set (PlDataCollection* self, gint index, PlData* item);
gboolean pl_data_collection_add (PlDataCollection* self, PlData* item);
void pl_data_collection_insert (PlDataCollection* self, gint index, PlData* item);
gboolean pl_data_collection_remove (PlDataCollection* self, PlData* item);
PlData* pl_data_collection_remove_at (PlDataCollection* self, gint index);
void pl_data_collection_clear (PlDataCollection* self);
void pl_data_collection_merge (PlDataCollection* self, PlDataCollection* data_collection);
PlDataCollectionIterator* pl_data_collection_iterator_new (PlDataCollection* dc);
PlDataCollectionIterator* pl_data_collection_iterator_construct (GType object_type, PlDataCollection* dc);
gboolean pl_data_collection_iterator_next (PlDataCollectionIterator* self);
gboolean pl_data_collection_iterator_first (PlDataCollectionIterator* self);
PlData* pl_data_collection_iterator_get (PlDataCollectionIterator* self);
void pl_data_collection_iterator_remove (PlDataCollectionIterator* self);
gboolean pl_data_collection_iterator_previous (PlDataCollectionIterator* self);
gboolean pl_data_collection_iterator_has_previous (PlDataCollectionIterator* self);
void pl_data_collection_iterator_set (PlDataCollectionIterator* self, PlData* item);
void pl_data_collection_iterator_insert (PlDataCollectionIterator* self, PlData* item);
void pl_data_collection_iterator_add (PlDataCollectionIterator* self, PlData* item);
gint pl_data_collection_iterator_index (PlDataCollectionIterator* self);
GType pl_reader_get_type (void);
PlReader* pl_reader_new (void);
PlReader* pl_reader_construct (GType object_type);
PlResult pl_reader_read (PlReader* self, const char* list_uri, GError** error);
void pl_reader_read_async (PlReader* self, const char* list_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
PlResult pl_reader_read_finish (PlReader* self, GAsyncResult* _res_, GError** error);
gboolean pl_reader_data_available (PlReader* self);
gint pl_reader_get_number_of_entries (PlReader* self);
char** pl_reader_get_found_uris (PlReader* self, int* result_length1);
char* pl_reader_get_title_for_uri (PlReader* self, char** uri_needle);
char* pl_reader_get_author_for_uri (PlReader* self, char** uri_needle);
char* pl_reader_get_genre_for_uri (PlReader* self, char** uri_needle);
char* pl_reader_get_album_for_uri (PlReader* self, char** uri_needle);
char* pl_reader_get_copyright_for_uri (PlReader* self, char** uri_needle);
char* pl_reader_get_duration_string_for_uri (PlReader* self, char** uri_needle);
glong pl_reader_get_duration_for_uri (PlReader* self, char** uri_needle);
gboolean pl_reader_get_is_remote_for_uri (PlReader* self, char** uri_needle);
gboolean pl_reader_get_is_playlist_for_uri (PlReader* self, char** uri_needle);
PlListType pl_reader_get_ptype (PlReader* self);
const char* pl_reader_get_playlist_uri (PlReader* self);
PlDataCollection* pl_reader_get_data_collection (PlReader* self);
GType pl_writer_get_type (void);
PlWriter* pl_writer_new (PlListType ptype, gboolean overwrite, gboolean absolute_uris);
PlWriter* pl_writer_construct (GType object_type, PlListType ptype, gboolean overwrite, gboolean absolute_uris);
PlResult pl_writer_write (PlWriter* self, PlDataCollection* data_collection, const char* playlist_uri, GError** error);
void pl_writer_write_asyn (PlWriter* self, PlDataCollection* data_collection, const char* playlist_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
PlResult pl_writer_write_asyn_finish (PlWriter* self, GAsyncResult* _res_, GError** error);
const char* pl_writer_get_uri (PlWriter* self);
gboolean pl_writer_get_use_absolute_uris (PlWriter* self);
gboolean pl_writer_get_overwrite_if_exists (PlWriter* self);


G_END_DECLS

#endif

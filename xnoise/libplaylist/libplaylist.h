/* libplaylist.h generated by valac, the Vala compiler, do not modify */


#ifndef __LIBPLAYLIST_H__
#define __LIBPLAYLIST_H__

#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define PL_TYPE_LIST_TYPE (pl_list_type_get_type ())

#define PL_TYPE_RESULT (pl_result_get_type ())

#define PL_TYPE_TARGET_TYPE (pl_target_type_get_type ())

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

#define SIMPLE_XML_TYPE_READER (simple_xml_reader_get_type ())
#define SIMPLE_XML_READER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIMPLE_XML_TYPE_READER, SimpleXmlReader))
#define SIMPLE_XML_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIMPLE_XML_TYPE_READER, SimpleXmlReaderClass))
#define SIMPLE_XML_IS_READER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIMPLE_XML_TYPE_READER))
#define SIMPLE_XML_IS_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIMPLE_XML_TYPE_READER))
#define SIMPLE_XML_READER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIMPLE_XML_TYPE_READER, SimpleXmlReaderClass))

typedef struct _SimpleXmlReader SimpleXmlReader;
typedef struct _SimpleXmlReaderClass SimpleXmlReaderClass;
typedef struct _SimpleXmlReaderPrivate SimpleXmlReaderPrivate;

#define SIMPLE_XML_TYPE_NODE (simple_xml_node_get_type ())
#define SIMPLE_XML_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIMPLE_XML_TYPE_NODE, SimpleXmlNode))
#define SIMPLE_XML_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIMPLE_XML_TYPE_NODE, SimpleXmlNodeClass))
#define SIMPLE_XML_IS_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIMPLE_XML_TYPE_NODE))
#define SIMPLE_XML_IS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIMPLE_XML_TYPE_NODE))
#define SIMPLE_XML_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIMPLE_XML_TYPE_NODE, SimpleXmlNodeClass))

typedef struct _SimpleXmlNode SimpleXmlNode;
typedef struct _SimpleXmlNodeClass SimpleXmlNodeClass;

#define SIMPLE_XML_TYPE_WRITER (simple_xml_writer_get_type ())
#define SIMPLE_XML_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIMPLE_XML_TYPE_WRITER, SimpleXmlWriter))
#define SIMPLE_XML_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIMPLE_XML_TYPE_WRITER, SimpleXmlWriterClass))
#define SIMPLE_XML_IS_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIMPLE_XML_TYPE_WRITER))
#define SIMPLE_XML_IS_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIMPLE_XML_TYPE_WRITER))
#define SIMPLE_XML_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIMPLE_XML_TYPE_WRITER, SimpleXmlWriterClass))

typedef struct _SimpleXmlWriter SimpleXmlWriter;
typedef struct _SimpleXmlWriterClass SimpleXmlWriterClass;
typedef struct _SimpleXmlWriterPrivate SimpleXmlWriterPrivate;
typedef struct _SimpleXmlNodePrivate SimpleXmlNodePrivate;

#define SIMPLE_XML_NODE_TYPE_ITERATOR (simple_xml_node_iterator_get_type ())
#define SIMPLE_XML_NODE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIMPLE_XML_NODE_TYPE_ITERATOR, SimpleXmlNodeIterator))
#define SIMPLE_XML_NODE_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIMPLE_XML_NODE_TYPE_ITERATOR, SimpleXmlNodeIteratorClass))
#define SIMPLE_XML_NODE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIMPLE_XML_NODE_TYPE_ITERATOR))
#define SIMPLE_XML_NODE_IS_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIMPLE_XML_NODE_TYPE_ITERATOR))
#define SIMPLE_XML_NODE_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIMPLE_XML_NODE_TYPE_ITERATOR, SimpleXmlNodeIteratorClass))

typedef struct _SimpleXmlNodeIterator SimpleXmlNodeIterator;
typedef struct _SimpleXmlNodeIteratorClass SimpleXmlNodeIteratorClass;
typedef struct _SimpleXmlNodeIteratorPrivate SimpleXmlNodeIteratorPrivate;

typedef enum  {
	PL_READER_ERROR_UNKNOWN_TYPE,
	PL_READER_ERROR_SOMETHING_ELSE
} PlReaderError;
#define PL_READER_ERROR pl_reader_error_quark ()
typedef enum  {
	PL_WRITER_ERROR_UNKNOWN_TYPE,
	PL_WRITER_ERROR_NO_DATA,
	PL_WRITER_ERROR_NO_DEST_URI,
	PL_WRITER_ERROR_DEST_REMOTE
} PlWriterError;
#define PL_WRITER_ERROR pl_writer_error_quark ()
typedef enum  {
	PL_LIST_TYPE_UNKNOWN = 0,
	PL_LIST_TYPE_IGNORED,
	PL_LIST_TYPE_M3U,
	PL_LIST_TYPE_PLS,
	PL_LIST_TYPE_ASX,
	PL_LIST_TYPE_XSPF,
	PL_LIST_TYPE_WPL
} PlListType;

typedef enum  {
	PL_RESULT_UNHANDLED = 0,
	PL_RESULT_ERROR,
	PL_RESULT_IGNORED,
	PL_RESULT_SUCCESS,
	PL_RESULT_EMPTY,
	PL_RESULT_DOUBLE_WRITE
} PlResult;

typedef enum  {
	PL_TARGET_TYPE_URI,
	PL_TARGET_TYPE_REL_PATH,
	PL_TARGET_TYPE_ABS_PATH
} PlTargetType;

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

struct _SimpleXmlReader {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SimpleXmlReaderPrivate * priv;
	SimpleXmlNode* root;
};

struct _SimpleXmlReaderClass {
	GTypeClass parent_class;
	void (*finalize) (SimpleXmlReader *self);
};

struct _SimpleXmlWriter {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SimpleXmlWriterPrivate * priv;
};

struct _SimpleXmlWriterClass {
	GTypeClass parent_class;
	void (*finalize) (SimpleXmlWriter *self);
};

struct _SimpleXmlNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SimpleXmlNodePrivate * priv;
	GHashTable* attributes;
};

struct _SimpleXmlNodeClass {
	GTypeClass parent_class;
	void (*finalize) (SimpleXmlNode *self);
};

struct _SimpleXmlNodeIterator {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SimpleXmlNodeIteratorPrivate * priv;
};

struct _SimpleXmlNodeIteratorClass {
	GTypeClass parent_class;
	void (*finalize) (SimpleXmlNodeIterator *self);
};


GQuark pl_reader_error_quark (void);
GQuark pl_writer_error_quark (void);
GType pl_list_type_get_type (void);
GType pl_result_get_type (void);
GType pl_target_type_get_type (void);
extern gboolean pl_debug;
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
char* pl_data_get_rel_path (PlData* self);
char* pl_data_get_abs_path (PlData* self);
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
PlTargetType pl_data_get_target_type (PlData* self);
void pl_data_set_target_type (PlData* self, PlTargetType value);
const char* pl_data_get_base_path (PlData* self);
void pl_data_set_base_path (PlData* self, const char* value);
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
PlDataField* pl_data_collection_get_contained_fields_for_idx (PlDataCollection* self, gint idx, int* result_length1);
PlDataField* pl_data_collection_get_contained_fields_for_uri (PlDataCollection* self, char** uri, int* result_length1);
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
gboolean pl_data_collection_append (PlDataCollection* self, PlData* item);
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
void pl_data_collection_iterator_append (PlDataCollectionIterator* self, PlData* item);
gint pl_data_collection_iterator_index (PlDataCollectionIterator* self);
GType pl_reader_get_type (void);
PlReader* pl_reader_new (void);
PlReader* pl_reader_construct (GType object_type);
PlResult pl_reader_read (PlReader* self, const char* list_uri, GError** error);
void pl_reader_read_asyn (PlReader* self, const char* list_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
PlResult pl_reader_read_asyn_finish (PlReader* self, GAsyncResult* _res_, GError** error);
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
PlListType pl_get_playlist_type_for_uri (char** uri_);
PlListType pl_get_type_by_extension (char** uri_);
PlListType pl_get_type_by_data (char** uri_);
glong pl_get_duration_from_string (char** duration_string);
GFile* pl_get_file_for_location (const char* adr, char** base_path, PlTargetType* tt);
GType pl_writer_get_type (void);
PlWriter* pl_writer_new (PlListType ptype, gboolean overwrite);
PlWriter* pl_writer_construct (GType object_type, PlListType ptype, gboolean overwrite);
PlResult pl_writer_write (PlWriter* self, PlDataCollection* data_collection, const char* playlist_uri, GError** error);
void pl_writer_write_asyn (PlWriter* self, PlDataCollection* data_collection, const char* playlist_uri, GAsyncReadyCallback _callback_, gpointer _user_data_);
PlResult pl_writer_write_asyn_finish (PlWriter* self, GAsyncResult* _res_, GError** error);
const char* pl_writer_get_uri (PlWriter* self);
gboolean pl_writer_get_overwrite_if_exists (PlWriter* self);
#define SIMPLE_XML_AMPERSAND_ESCAPED "&amp;"
#define SIMPLE_XML_GREATER_THAN_ESCAPED "&gt;"
#define SIMPLE_XML_LOWER_THAN_ESCAPED "&lt;"
#define SIMPLE_XML_QUOTE_ESCAPED "&quot;"
#define SIMPLE_XML_APOSTROPH_ESCAPED "&apos;"
gpointer simple_xml_reader_ref (gpointer instance);
void simple_xml_reader_unref (gpointer instance);
GParamSpec* simple_xml_param_spec_reader (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void simple_xml_value_set_reader (GValue* value, gpointer v_object);
void simple_xml_value_take_reader (GValue* value, gpointer v_object);
gpointer simple_xml_value_get_reader (const GValue* value);
GType simple_xml_reader_get_type (void);
gpointer simple_xml_node_ref (gpointer instance);
void simple_xml_node_unref (gpointer instance);
GParamSpec* simple_xml_param_spec_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void simple_xml_value_set_node (GValue* value, gpointer v_object);
void simple_xml_value_take_node (GValue* value, gpointer v_object);
gpointer simple_xml_value_get_node (const GValue* value);
GType simple_xml_node_get_type (void);
SimpleXmlReader* simple_xml_reader_new (const char* filename);
SimpleXmlReader* simple_xml_reader_construct (GType object_type, const char* filename);
SimpleXmlReader* simple_xml_reader_new_from_string (const char* xml_string);
SimpleXmlReader* simple_xml_reader_construct_from_string (GType object_type, const char* xml_string);
void simple_xml_reader_read (SimpleXmlReader* self, gboolean case_sensitive);
gpointer simple_xml_writer_ref (gpointer instance);
void simple_xml_writer_unref (gpointer instance);
GParamSpec* simple_xml_param_spec_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void simple_xml_value_set_writer (GValue* value, gpointer v_object);
void simple_xml_value_take_writer (GValue* value, gpointer v_object);
gpointer simple_xml_value_get_writer (const GValue* value);
GType simple_xml_writer_get_type (void);
SimpleXmlWriter* simple_xml_writer_new (SimpleXmlNode* root, const char* header_string);
SimpleXmlWriter* simple_xml_writer_construct (GType object_type, SimpleXmlNode* root, const char* header_string);
void simple_xml_writer_write (SimpleXmlWriter* self, const char* filename);
SimpleXmlNode* simple_xml_node_new (const char* name);
SimpleXmlNode* simple_xml_node_construct (GType object_type, const char* name);
gboolean simple_xml_node_has_text (SimpleXmlNode* self);
void simple_xml_node_prepend_child (SimpleXmlNode* self, SimpleXmlNode* node);
void simple_xml_node_append_child (SimpleXmlNode* self, SimpleXmlNode* node);
void simple_xml_node_insert_child (SimpleXmlNode* self, gint pos, SimpleXmlNode* node);
SimpleXmlNode* simple_xml_node_get_child_by_name (SimpleXmlNode* self, const char* childname);
gint simple_xml_node_get_idx_of_child (SimpleXmlNode* self, SimpleXmlNode* node);
SimpleXmlNode* simple_xml_node_get (SimpleXmlNode* self, gint idx);
void simple_xml_node_set (SimpleXmlNode* self, gint idx, SimpleXmlNode* node);
gboolean simple_xml_node_remove (SimpleXmlNode* self, SimpleXmlNode* node);
gboolean simple_xml_node_remove_child_at_idx (SimpleXmlNode* self, gint idx);
void simple_xml_node_clear (SimpleXmlNode* self);
gpointer simple_xml_node_iterator_ref (gpointer instance);
void simple_xml_node_iterator_unref (gpointer instance);
GParamSpec* simple_xml_node_param_spec_iterator (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void simple_xml_node_value_set_iterator (GValue* value, gpointer v_object);
void simple_xml_node_value_take_iterator (GValue* value, gpointer v_object);
gpointer simple_xml_node_value_get_iterator (const GValue* value);
GType simple_xml_node_iterator_get_type (void);
SimpleXmlNodeIterator* simple_xml_node_iterator (SimpleXmlNode* self);
const char* simple_xml_node_get_text (SimpleXmlNode* self);
void simple_xml_node_set_text (SimpleXmlNode* self, const char* value);
const char* simple_xml_node_get_name (SimpleXmlNode* self);
SimpleXmlNode* simple_xml_node_get_parent (SimpleXmlNode* self);
gint simple_xml_node_get_children_count (SimpleXmlNode* self);
SimpleXmlNodeIterator* simple_xml_node_iterator_new (SimpleXmlNode* parent_node);
SimpleXmlNodeIterator* simple_xml_node_iterator_construct (GType object_type, SimpleXmlNode* parent_node);
gboolean simple_xml_node_iterator_next (SimpleXmlNodeIterator* self);
SimpleXmlNode* simple_xml_node_iterator_get (SimpleXmlNodeIterator* self);
void simple_xml_node_iterator_set (SimpleXmlNodeIterator* self, SimpleXmlNode* item);

extern const char* PL_remote_schemes[2];

G_END_DECLS

#endif

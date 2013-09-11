/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_STREAMS_H_GUARD
#define WXPHP_STREAMS_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_streams_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxDataOutputStream_entry;
void php_wxDataOutputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxDataOutputStream_php: public wxDataOutputStream{
	public:
	
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxDataOutputStream 
{
    zend_object zo;
    wxDataOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxDataOutputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxDataOutputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDataOutputStream_functions[] = {
	PHP_ME(php_wxDataOutputStream, BigEndianOrdered, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataOutputStream, Write16, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataOutputStream, Write32, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataOutputStream, Write8, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataOutputStream, WriteDouble, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataOutputStream, WriteString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxDataInputStream_entry;
void php_wxDataInputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxDataInputStream_php: public wxDataInputStream{
	public:
	
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxDataInputStream 
{
    zend_object zo;
    wxDataInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxDataInputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxDataInputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDataInputStream_functions[] = {
	PHP_ME(php_wxDataInputStream, ReadString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataInputStream, ReadDouble, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataInputStream, Read8, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataInputStream, Read32, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataInputStream, Read16, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDataInputStream, BigEndianOrdered, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxStreamBase_entry;
void php_wxStreamBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxStreamBase_php: public wxStreamBase{
	public:
	
	wxStreamBase_php():wxStreamBase(){}
		
	wxFileOffset OnSysSeek(wxFileOffset pos, wxSeekMode mode);
	wxFileOffset OnSysTell() const;
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxStreamBase 
{
    zend_object zo;
    wxStreamBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxStreamBase_free(void *object TSRMLS_DC);
zend_object_value php_wxStreamBase_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxStreamBase_functions[] = {
	PHP_ME(php_wxStreamBase, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxOutputStream_entry;
void php_wxOutputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxOutputStream_php: public wxOutputStream{
	public:
	
	wxOutputStream_php():wxOutputStream(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxOutputStream 
{
    zend_object zo;
    wxOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxOutputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxOutputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxOutputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxInputStream_entry;
void php_wxInputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxInputStream_php: public wxInputStream{
	public:
	
	wxInputStream_php():wxInputStream(){}
		
	size_t OnSysRead(void* buffer, size_t bufsize);
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxInputStream 
{
    zend_object zo;
    wxInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxInputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxInputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxInputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFFileOutputStream_entry;
void php_wxFFileOutputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFFileOutputStream_php: public wxFFileOutputStream{
	public:
	
	wxFFileOutputStream_php(const wxString& filename, const wxString& mode="wb"):wxFFileOutputStream(filename, mode){}
	wxFFileOutputStream_php(wxFFile& file):wxFFileOutputStream(file){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFFileOutputStream 
{
    zend_object zo;
    wxFFileOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFFileOutputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFFileOutputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileOutputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFileOutputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFileOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFileOutputStream_entry;
void php_wxFileOutputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileOutputStream_php: public wxFileOutputStream{
	public:
	
	wxFileOutputStream_php(const wxString& ofileName):wxFileOutputStream(ofileName){}
	wxFileOutputStream_php(wxFile& file):wxFileOutputStream(file){}
	wxFileOutputStream_php(int fd):wxFileOutputStream(fd){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFileOutputStream 
{
    zend_object zo;
    wxFileOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFileOutputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFileOutputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileOutputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileOutputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFileInputStream_entry;
void php_wxFileInputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileInputStream_php: public wxFileInputStream{
	public:
	
	wxFileInputStream_php(const wxString& ifileName):wxFileInputStream(ifileName){}
	wxFileInputStream_php(wxFile& file):wxFileInputStream(file){}
	wxFileInputStream_php(int fd):wxFileInputStream(fd){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFileInputStream 
{
    zend_object zo;
    wxFileInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFileInputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFileInputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileInputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileInputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFFileInputStream_entry;
void php_wxFFileInputStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFFileInputStream_php: public wxFFileInputStream{
	public:
	
	wxFFileInputStream_php(wxFFile& file):wxFFileInputStream(file){}
	wxFFileInputStream_php(const wxString& filename, const wxString& mode="rb"):wxFFileInputStream(filename, mode){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFFileInputStream 
{
    zend_object zo;
    wxFFileInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFFileInputStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFFileInputStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileInputStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFileInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFFileInputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFFileStream_entry;
void php_wxFFileStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFFileStream_php: public wxFFileStream{
	public:
	
	wxFFileStream_php(const wxString& iofileName, const wxString& mode="w+b"):wxFFileStream(iofileName, mode){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFFileStream 
{
    zend_object zo;
    wxFFileStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFFileStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFFileStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFileStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFFileStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxFileStream_entry;
void php_wxFileStream_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileStream_php: public wxFileStream{
	public:
	
	wxFileStream_php(const wxString& iofileName):wxFileStream(iofileName){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFileStream 
{
    zend_object zo;
    wxFileStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFileStream_free(void *object TSRMLS_DC);
zend_object_value php_wxFileStream_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileStream_functions[] = {
	PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileStream, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_STREAMS_H_GUARD
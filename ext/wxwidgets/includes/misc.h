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

#ifndef WXPHP_MISC_H_GUARD
#define WXPHP_MISC_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_misc_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxArtProvider_entry;
void php_wxArtProvider_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxArtProvider_php: public wxArtProvider{
	public:
	
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxArtProvider 
{
    zend_object zo;
    wxArtProvider_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxArtProvider_free(void *object TSRMLS_DC);
zend_object_value php_wxArtProvider_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxArtProvider_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, Remove, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, PushBack, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, Push, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, Pop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, Insert, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, HasNativeProvider, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, GetSizeHint, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, GetNativeSizeHint, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, GetIconBundle, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, GetIcon, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, GetBitmap, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxArtProvider, Delete, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxCaret_entry;
void php_wxCaret_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCaret_php: public wxCaret{
	public:
	
	wxCaret_php():wxCaret(){}
	wxCaret_php(wxWindow* window, int width, int height):wxCaret(window, width, height){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxCaret 
{
    zend_object zo;
    wxCaret_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxCaret_free(void *object TSRMLS_DC);
zend_object_value php_wxCaret_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxCaret_functions[] = {
	PHP_ME(php_wxCaret, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxCaret, Show, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, SetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, SetBlinkTime, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, Move, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, IsVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, Hide, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, GetWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, GetBlinkTime, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCaret, GetPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxNotificationMessage_entry;
void php_wxNotificationMessage_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxNotificationMessage_php: public wxNotificationMessage{
	public:
	
	wxNotificationMessage_php():wxNotificationMessage(){}
	wxNotificationMessage_php(const wxString& title, const wxString& message=wxEmptyString, wxWindow* parent=NULL, int flags=wxICON_INFORMATION):wxNotificationMessage(title, message, parent, flags){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxNotificationMessage 
{
    zend_object zo;
    wxNotificationMessage_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxNotificationMessage_free(void *object TSRMLS_DC);
zend_object_value php_wxNotificationMessage_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxNotificationMessage_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, Close, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, SetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, SetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, SetParent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, SetTitle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, Show, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxNotificationMessage, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxStopWatch_entry;
void php_wxStopWatch_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxStopWatch_php: public wxStopWatch{
	public:
	
	wxStopWatch_php():wxStopWatch(){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxStopWatch 
{
    zend_object zo;
    wxStopWatch_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxStopWatch_free(void *object TSRMLS_DC);
zend_object_value php_wxStopWatch_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxStopWatch_functions[] = {
	PHP_ME(php_wxStopWatch, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxStopWatch, Time, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStopWatch, Start, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStopWatch, Resume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxStopWatch, Pause, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxTaskBarIcon_entry;
void php_wxTaskBarIcon_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxTaskBarIcon_php: public wxTaskBarIcon{
	public:
	
	wxTaskBarIcon_php(wxTaskBarIconType iconType=wxTBI_DEFAULT_TYPE):wxTaskBarIcon(iconType){}
		
	wxMenu* CreatePopupMenu();
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxTaskBarIcon 
{
    zend_object zo;
    wxTaskBarIcon_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxTaskBarIcon_free(void *object TSRMLS_DC);
zend_object_value php_wxTaskBarIcon_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTaskBarIcon_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, Destroy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, IsAvailable, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, IsIconInstalled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, PopupMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, RemoveIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, SetIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTaskBarIcon, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxTimer_entry;
void php_wxTimer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxTimer_php: public wxTimer{
	public:
	
	wxTimer_php():wxTimer(){}
	wxTimer_php(wxEvtHandler* owner, int id=-1):wxTimer(owner, id){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxTimer 
{
    zend_object zo;
    wxTimer_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxTimer_free(void *object TSRMLS_DC);
zend_object_value php_wxTimer_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTimer_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, AddPendingEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, DeletePendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, GetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, IsUnlinked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessEventLocally, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, ProcessPendingEvents, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, QueueEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, RemoveFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SafelyProcessEvent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetEvtHandlerEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetNextHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, SetPreviousHandler, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxEvtHandler, Unlink, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, GetInterval, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, GetOwner, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, IsOneShot, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, IsRunning, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, Notify, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, SetOwner, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, Start, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, Stop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTimer, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxWindowDisabler_entry;
void php_wxWindowDisabler_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxWindowDisabler_php: public wxWindowDisabler{
	public:
	
	wxWindowDisabler_php(bool disable=true):wxWindowDisabler(disable){}
	wxWindowDisabler_php(wxWindow* winToSkip):wxWindowDisabler(winToSkip){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxWindowDisabler 
{
    zend_object zo;
    wxWindowDisabler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxWindowDisabler_free(void *object TSRMLS_DC);
zend_object_value php_wxWindowDisabler_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWindowDisabler_functions[] = {
	PHP_ME(php_wxWindowDisabler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxBusyCursor_entry;
void php_wxBusyCursor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxBusyCursor_php: public wxBusyCursor{
	public:
	
	wxBusyCursor_php(const wxCursor* cursor=wxHOURGLASS_CURSOR):wxBusyCursor(cursor){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxBusyCursor 
{
    zend_object zo;
    wxBusyCursor_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxBusyCursor_free(void *object TSRMLS_DC);
zend_object_value php_wxBusyCursor_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBusyCursor_functions[] = {
	PHP_ME(php_wxBusyCursor, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_MISC_H_GUARD
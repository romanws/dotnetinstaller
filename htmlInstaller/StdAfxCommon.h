#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#ifndef WINVER
#define WINVER 0x0500
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif						

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0500
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0500
#endif

#ifndef _WIN32_MSI
#define _WIN32_MSI 110
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

#define _AFX_ALL_WARNINGS

#include <afxwin.h> // standard MFC components
#include <afxext.h> // MFC exceptions
#include <afxdisp.h> // MFC automation

#include <afxdtctl.h> // Internet Explorer 4
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h> // common Windows components
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <winuser.h>

#include <time.h>
#include <tchar.h>

#include <ostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <list>

#include <strsafe.h>
#include <msi.h>
#include <msiquery.h>

#include <stdio.h>
#include "common.h"


/*
void WINAPI OutputDebugString( _In_opt_  LPCTSTR lpOutputString );
Sends a string to the debugger for display.
 */
void	OutputDebugStringA( const char *message ) {
 fprintf( stderr, "%s\n", message );
}


/*
BOOL WINAPI SetWindowPos(
  _In_      HWND hWnd,
  _In_opt_  HWND hWndInsertAfter,
  _In_      int X,
  _In_      int Y,
  _In_      int cx,
  _In_      int cy,
  _In_      UINT uFlags
);
Changes the size, position, and Z order of a child, pop-up, or top-level window. These windows are ordered according to their appearance on the screen. The topmost window receives the highest rank and is the first window in the Z order.
 */
int		SetWindowPos( uint16_t hWnd, uint16_t hWndInsertAfter, int X, int Y, int cx, int cy, uint16_t uFlags ) {

 fprintf( stderr, "SetWindowPos();\n" );

 return 1;
}


/*
int WINAPI MessageBox(
  _In_opt_  HWND hWnd,
  _In_opt_  LPCTSTR lpText,
  _In_opt_  LPCTSTR lpCaption,
  _In_      UINT uType
);
Displays a modal dialog box that contains a system icon, a set of buttons, and a brief application-specific message, such as status or error information. The message box returns an integer value that indicates which button the user clicked.
 */
int		MessageBoxA( uint16_t hWnd, const char *lpText, const char *lpCaption, uint16_t uType ) {

 fprintf( stderr, "MessageBox(): %s:: %s\n", lpCaption, lpText );
 return 1;
}
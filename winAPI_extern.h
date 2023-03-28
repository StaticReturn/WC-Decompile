#ifndef __WINAPI_EXTERN_H__
#define __WINAPI_EXTERN_H__

void    OutputDebugStringA( const char *message );
int		SetWindowPos( uint16_t hWnd, uint16_t hWndInsertAfter, int X, int Y, int cx, int cy, uint16_t uFlags );
int		MessageBoxA( uint16_t hWnd, const char *lpText, const char *lpCaption, uint16_t uType );
#endif
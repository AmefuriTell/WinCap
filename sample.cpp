/*
#include <stdio.h>
#include <windows.h>
#include <dwmapi.h>

#pragma comment( lib, "dwmapi.lib" )

int main()
{
	while(true)
	{
		Sleep(1000);
		POINT pt;
		GetCursorPos(&pt);
		HWND hwndFind = GetAncestor(WindowFromPoint(pt), 2);
		if(hwndFind)
		{
			char buf[1000];
			GetWindowTextA(hwndFind, buf, 1000);
			RECT rect;
			DwmGetWindowAttribute(hwndFind, DWMWA_EXTENDED_FRAME_BOUNDS, &rect, sizeof(rect));
			printf("%s (%d,%d) (%d,%d)\n", buf, rect.right, rect.top, rect.left, rect.bottom);
		}
	}
}
*/

#include <stdio.h>
#include <windows.h>
#include <dwmapi.h>

#pragma comment(lib, "dwmapi.lib")

int main()
{
	//まず、ディスプレイを列挙する。
	//次にディスプレイごとの各点について調べる。
}
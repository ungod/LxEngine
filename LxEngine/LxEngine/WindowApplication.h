#pragma once

#include "resource.h"
#include "World.h"
#include <wtypes.h>

class WindowApplication
{
public:
	static int Launch(World* world, HINSTANCE hInstance, int nCmdShow);

private:
	static ATOM                RegisterClass(HINSTANCE hInstance);
	static BOOL                InitInstance(HINSTANCE, int);
	static LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
	static INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
};


#pragma once

#include "resource.h"
#include "World.h"
#include <wtypes.h>

class WindowApplication
{
public:
	static WindowApplication* Instance;
	static WindowApplication* Get()
	{
		if (Instance == nullptr)
			Instance = new WindowApplication();

		return Instance;
	}

	int Launch(World* world, HINSTANCE hInstance, int nCmdShow);

public:
	ATOM                RegisterWinClass(HINSTANCE hInstance);
	BOOL                InitInstance(HINSTANCE, int);
	LRESULT CALLBACK    AppWndProc(HWND, UINT, WPARAM, LPARAM);
	INT_PTR CALLBACK    AppAbout(HWND, UINT, WPARAM, LPARAM);
};


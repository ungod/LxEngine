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

public:
	HWND GetHwnd() { return m_hwnd; }
	int Launch(World* world, HINSTANCE hInstance, int nCmdShow);

private:
	HWND m_hwnd;
	World* m_CurrentWorld;
	std::wstring m_assetsPath;

public:
	ATOM                RegisterWinClass(HINSTANCE hInstance);
	std::wstring		GetAssetFullPath(LPCWSTR assetName);
	BOOL                InitInstance(HINSTANCE, int);
	LRESULT CALLBACK    AppWndProc(HWND, UINT, WPARAM, LPARAM);
	INT_PTR CALLBACK    AppAbout(HWND, UINT, WPARAM, LPARAM);
};


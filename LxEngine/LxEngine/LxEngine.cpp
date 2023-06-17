#include "stdafx.h"

#include "framework.h"
#include "LxEngine.h"
#include "WindowApplication.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    World World(1920, 1080);
    return WindowApplication::Get()->Launch(&World, hInstance, nCmdShow);
}
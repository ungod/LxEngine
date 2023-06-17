// LxEngine.cpp : 定义应用程序的入口点。
//

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

    WindowApplication App;
    World World;
    return App.Launch(&World, hInstance, nCmdShow);
}
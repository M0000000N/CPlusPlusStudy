#pragma once
#include <stdbool.h>
// 렌더러 초기화 해줌
bool Renderer_Init(void);
// 렌더러 정리
void Renderer_Cleanup(void);
// 화면 전환하는거
void Renderer_Flip(void);
// 콘솔에 맞게 더블 어쩌고를 해야해요

void Renderer_Clear(void);
void Renderer_DrawText(const char* text, int numberOfText);
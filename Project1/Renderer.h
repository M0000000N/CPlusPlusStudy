#pragma once
#include <stdbool.h>
// ������ �ʱ�ȭ ����
bool Renderer_Init(void);
// ������ ����
void Renderer_Cleanup(void);
// ȭ�� ��ȯ�ϴ°�
void Renderer_Flip(void);
// �ֿܼ� �°� ���� ��¼�� �ؾ��ؿ�

void Renderer_Clear(void);
void Renderer_DrawText(const char* text, int numberOfText);
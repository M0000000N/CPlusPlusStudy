// �� �̴��Լ�, �ݷ� �Լ�

// �ʱ�ȭ�� �� ���� �� return true;
// ������ ����� ���� ���ӷ����� �����ؾ���
// ���ӷ��� : �Է�ó�� -> ���� ������Ʈ -> ������� (�Լ����� ���弼��)
// c������ ����°ſ��� ������ �������� ������ �׳� abc�� ���� �������
// 
//
#include "App.h"
#include <stdlib.h>
#include <windows.h>
#include "Renderer.h"

bool App_Init(void)
{
	if (false == Renderer_Init())
	{
		return false;
	}
	return true;
}

void processInput(void)
{

}

void update(void)
{

}

void render(void)
{
	//system("cls");
	//puts("hh"); //�̷��� �ϸ� ��� ������ �ؼ� ���ڰŸ��� �߻��Ѵ�.
	//Sleep(10);

	Renderer_DrawText("������", sizeof("������"));

	// 1. ȭ�� ��ȯ�ϰ�
	Renderer_Flip();

	// 2. ������� ����(����ȭ��)�� �����ش�.
	Renderer_Clear();

}

int App_Run(void)
{
	while (true)
	{
		processInput();
		update();
		render();
	}
}
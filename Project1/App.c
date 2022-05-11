// 앱 이닛함수, 햅런 함수

// 초기화할 게 없을 때 return true;
// 게임을 만들기 위해 게임루프를 구성해야함
// 게임루프 : 입력처리 -> 게임 업데이트 -> 게임출력 (함수세개 만드세요)
// c언어가지고 만드는거에요 별개로 생각하지 마세요 그냥 abc로 만들어도 상관없음
// 
//
#include "App.h"
#include <stdlib.h>
#include <windows.h>
#include "Renderer.h"
//#include "Timer"
#include "Input.h"

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
	Input_Update();
}



void update(void) 
{
	
}

void render(void) //랜더하는 것 
{
	

	Renderer_DrawText(str, strlen(str));
	//system("cls");
	//puts("hh"); //이렇게 하면 썼다 지웠다 해서 깜박거림이 발생한다.
	//Sleep(10);

	Renderer_DrawText("집갈래", sizeof("집갈래"));

	// 1. 화면 전환하고
	Renderer_Flip();

	// 2. 백버퍼의 내용(이전화면)을 지워준다.
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
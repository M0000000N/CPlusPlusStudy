# include <stdio.h>

// Stack : 정적 할당 영역
// Heap : 동적 할당 영역
// Data : 정적 데이터
// Code : 프로그램 명령어

void __cdecl Sum(void)
{
	int a = 10;
	int b = 20;
	return (a + b);
}

void __stdcall Sum2(void)
{
	int a = 10;
	int b = 20;
	return (a + b);
}

void __fastcall Sum3(void)
{
	int a = 10;
	int b = 20;
	return (a + b);
}

int main()
{
	Sum();
	Sum2();
	Sum3();
}
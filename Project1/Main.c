//메인함수의 반환값의 의미 : 프로그램이 성공적으로 종료됐는지 여부
#include "App.h"
int main(void)
{
	// 1. 프로그램 초기화
	if (false == App_Init())
	{
		puts("앱 초기화에 실패했습니다.");
		return 1; // 0이어도 되나 없어도 되나?
	}
	// 2. 프로그램 실행
	return App_Run();
}
// 절차지향 프로그래밍 : 함수를 이용해서 프로그램을 만드는 것
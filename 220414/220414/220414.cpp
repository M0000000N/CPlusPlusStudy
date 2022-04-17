// 220414.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{

	srand(time(NULL));
	int result = rand() % 26 + 65;  // a = 65 ~ z = 90 -> a부터 z까지는 65부터 90까지임
	char result_char = (char)result;
	cout << result_char << endl;

	char input;
	cout << "A~Z중 하나의 키를 입력하세요 : "; cin >> input;
	if (input == result)
		cout << "승리";
	else
	{
		for (int i = 4; i > 0; i--)
		{
			cout << "남은 기회는 " << i << "번 입니다.";
			cout << "A~Z중 하나의 키를 입력하세요 : "; cin >> input;
			if (input == result)
			{
				cout << "승리";
				i = 0;
			}
		}
		cout << "정답 : " << result_char << endl;
		cout << "GAME OVER" << endl;
	}
}


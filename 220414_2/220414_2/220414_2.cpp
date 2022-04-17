// 220414_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	srand(time(NULL));	
	int player_x = 0; // 플레이어(0, 0)가 존재한다.
	int player_y = 0;

	int exit_x = 0; //탈출지점이 존재한다.
	int exit_y = 0;

	char map[10][10]; //2차원 배열

	while (exit_x == exit_y && exit_x == 0) // 출구 (0, 0) 제외(맞나?)
	{
		exit_x = rand() % 10;
		exit_y = rand() % 10;

		//cout << "(" << exit_x << " , " << exit_y << ")" << endl;

		if (exit_x != exit_y)
		{
			break;
		}
	}	

	while (1)
	{
		for (int y = 0; y < 10; y++) // 맵을 출력하는 애
		{
			for (int x = 0; x < 10; x++)
			{
				map[x][y] = '#';
				map[player_x][player_y] = 'O';
				map[exit_x][exit_y] = 'E';
				cout << map[x][y];
			}
			cout << endl;
		}

		char move = _getch();
		//cout << move << endl;
		switch (move)
		{
		case 'w':
			map[player_x][player_y -= 1] = 'O';
			break;

		case 'a':
			map[player_x -= 1][player_y] = 'O';
			break;

		case 's':
			map[player_x][player_y += 1] = 'O';
			break;

		case 'd':
			map[player_x += 1][player_y] = 'O';
			break;

		default:
			cout << "w, a, s, d 중 하나를 입력하여 O를 움직여주세요";
			break;
		}
		system("cls");

		if (exit_x == player_x && exit_y == player_y)
		{
			cout << "탈출에 성공했습니다";
			break;
		}
	}
	/*
	while (1)
	{
		srand(time(NULL));
		char map[10][10]; //2차원 배열
		int player_x = 0; // 플레이어(0, 0)가 존재한다.
		int player_y = 0;
		int exit_x = rand() % 10; //탈출지점이 존재한다.
		int exit_y = rand() % 10;

		while (exit_x == exit_y && exit_x == 0) // 출구 (0, 0) 제외(맞나?)
		{
			int exit_x = rand() % 10;
			int exit_y = rand() % 10;
			if (exit_x != exit_y)
			{
				break;
			}
		}
		//cout << "목적지 위치 : (" << exit_x << ", " << exit_y << ")" << endl;

		// w = 119, a = 97, s = 115, d = 100
		/*int w = 87;	char w_char = (char)w;
		int a = 65;	char a_char = (char)a;
		int s = 83;	char s_char = (char)s;
		int d = 68;	char d_char = (char)d;

		for (int y = 0; y < 10; y++)
		{
			for (int x = 0; x < 10; x++)
			{
				srand(time(NULL));
				int player_x = 0; // 플레이어(0, 0)가 존재한다.
				int player_y = 0;
				int exit_x = rand() % 10; //탈출지점이 존재한다.
				int exit_y = rand() % 10;
				while (exit_x == exit_y && exit_x == 0) // 출구 (0, 0) 제외(맞나?)
				{
					int exit_x = rand() % 10;
					int exit_y = rand() % 10;
					if (exit_x != exit_y)
					{
						break;
					}
				}
				map[x][y] = '#';
				//if (x == player_x && y == player_y)
				map[player_x][player_y] = 'O';
				//else if (x == exit_x && y == exit_y)
				map[exit_x][exit_y] = 'E';
				//cout << map[x][y];
			}
			cout << endl;
		}

		switch (move)
		{
		case 'w':
			map[player_x][player_y - 1] = 'O';
			system("cls");
			break;

		case 'a':
			map[player_x - 1][player_y] = 'O';
			system("cls");
			break;

		case 's':
			map[player_x][player_y + 1] = 'O';
			system("cls");
			break;

		case 'd':
			map[player_x + 1][player_y] = 'O';
			system("cls");
			break;

		default:
			//cout << "w, a, s, d 중 하나를 입력하여 O를 움직여주세요";
			break;
		}
	}
	*/
}

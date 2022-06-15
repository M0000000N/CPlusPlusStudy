#include <iostream>
#include <random>
#include <conio.h>
using namespace std;

int  main()
{
	srand(time(NULL));
	int player_x = 0;
	int player_y = 0;
	int monster_x = rand()%10;
	int monster_y = rand() % 10;
	char map[10][10] = { 0 };
	map[player_x][player_y] = 'P';
	map[monster_x][monster_y] = 'O';

	cout << "이동할 방향 키를 입력해주세요";
	while (true)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				map[i][j] = '#';
				map[player_x][player_y] = 'P';
				map[monster_x][monster_y] = 'O';
				cout << map[i][j];
			}
			cout << endl;
		}

		char input = _getch();
		//cin >> input;

		switch (input)
		{
		case 'w':
			if (player_y > 0)
				player_y -= 1;
			break;

		case 'a':
			if (player_x > 0)
				player_x -= 1;
			break;

		case 's':
			if (player_y < 9)
				player_y += 1;
			break;

		case 'd':
			if (player_x < 9)
				player_x += 1;
			break;
		}
		system("cls");

		if (player_x == monster_x && player_y == monster_y)
		{
			cout << "탈출완료!";
		}
	}
	return 0;
}
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int map[10][10];
	int player[10][10];
	int place[10][10];

	// w = 119, a = 97, s = 115, d = 100
	int w = 87;	char w_char = (char)w;	
	int a = 65;	char a_char = (char)a;
	int s = 83;	char s_char = (char)s;
	int d = 68;	char d_char = (char)d;
	
	srand(time(NULL));  //10*10 크기의 맵을 구성한다. (2차원 배열)
	int i = rand() % 10;
	int j = rand() % 10;
	if (i == j && i == 0) // (0, 0) 제외인데 이게 맞는지 모르겠음
	{
		int i = rand() % 10;
		int j = rand() % 10;
	}
	cout << "목적지 위치 : (" i << ", " << j << ")" << endl;

	int move;
	switch (move)
	{
	case 119: 
		cout << "안녕하세요. 당신의 고향은 서울이군요.";
		break;
	case 97:
		cout << "안녕하세요. 당신의 고향은 양평이군요.";
		break;
	case 115:
		cout << "안녕하세요. 당신의 고향은 광주군요.";
		break;
	case 100:
		cout << "안녕하세요. 당신의 고향은 대전이군요.";
		break;
	default:
		cout << "5개중에 선택해주세요.";
		break;
	}




	//cout << nums << endl;
	//cout << nums[0] << endl; //1
	//cout << nums[9] << endl; //12
	//cout << nums[10] << endl; //잘못된 메모리주소에 접근해서 런타임오류

	/*int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12 };

	for (int i = 0; i < 10; i++)
	{
		cout << &(nums[i]) << endl;
	}*/
	
}

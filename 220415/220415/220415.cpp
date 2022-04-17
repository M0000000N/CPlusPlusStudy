//#include <iostream>
//#include <string>
//using namespace std;
//
//// 여기에 구조체를 넣는다.
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//struct student
//{
//	string name; // 클래스도 쓸 수 있고
//	int age; // 기본 자료형도 쓸 수 있고
//	string homeTown;
//	int pride;
//	int monthlyScore[12];	// 배열도 넣을 수 있고
//	score myScore;			//앞에서 정의한 구조체도 넣을 수 있다.
//}seoyeon,jaehyuk;			// 중괄호와 세미콜론 사이에 student 변수를 미리 선언해줄 수도 있다.
//
//
//int main() //우리가 사용하는 유일한 함수
//
//{
//	
//	/*
//	프로그래밍 기초 (메모리, CPU, 디스크)
//	getch()
//	구조체
//	1. 절차적
//	2. 구조적
//	3. 객체지향적
//	###	추상화 ###
//	실제세계 (현상) 을 간략화 / 기호화 / 보편화 해서 표현한 것
//	코드-> 주석 없이 코드 설명을 하려면 어렵다.
//	코드에서 추상화가 필요한 이유는 사람이 코드를 짜는 것이기 때문에
//	다를 사람이 코드를 해석하기 편리해야 하고 다른 사람이 인수인계받아 유지보수 하기 편리하고
//	다른사람들과 함께 공동으로 코드를 만들기 편리
//
//	배열 : 속성이 동일한 여러개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로
//		서로 연관되어 있음을 표시함으로써 추상화함
//
//	구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화
//	함수 : 프로세스코드를 특정 기능 단위로 묶어서 추상화
//
//	최악의 추상화 -> 추상화 단계를 상승시키는 과정
//	*/
//
//	//string a, b, c; //최악의 추상화
//	//string a[3];	//위보단 나음
//	//string name1, name2, name3;	//아니면 이런식으로든지
//	//string studentName[3];	// 위의 것 보다 의도가 명료하게 드러나기 때문에 좋은 추상화
//
//		/*
//		구조체란?
//		- 변수를 모아놓은 집합체
//		- 특정 변수들이 무언가의 하위개념으로 묶일 수 있을 때
//			ex) 학생이름, 나이, 성적 등등을
//				studentName[10], studentAge[10], studentKorscore[10]
//				'학생'의 'xxx' -> 학생 이라는 구조체로 묶어서 사용할 수 있다.
//		1. 구조체를 정의하는 위치 : 구조체가 사용되는 함수의 바깥쪽, 앞, 위에 정의한다.
//
//		2. 구조체 정의의 방법
//		struct 구조체 변수명
//		{
//			구저체 안에 들어갈 하위 변수 (Name, Age, Korscore가 하위번수)
//		}
//		구체는 일종의 우리가 새롭게 만든 데이터형이다.
//		구조체 안에 들어갈 수 있는 하위 변수는 무엇이 있을까??
//		int/bool/float 같은 기본 자료형들은 모두 사용가능
//		string <- 클래스
//
//		3. 구조체 선언과 초기화
//		기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일
//		int a[3] = {50, 70, 80};
//		구조체 변수도 선언과 동시에 초기화 할 수 있다.
//
//		player.HP = player.HP - monster[n].dmg;	//주석없이 코드를 배우지 않은 사람에게도 어느정도의 가독성이 확보된다.
//
//
//		*/
//	int a;
//	student minseop; //구조체 변수의 선언
//	minseop.name = "심민섭";
//	minseop.name = "34";
//	minseop.homeTown = "인천";
//	minseop.pride = 100;
//
//
//	//초간단실습 : student 구조체를 사용해서 자기 자신의 정보를 입력하고 확인해보자.
//	student sujin;
//	sujin.name = "문수진";
//	sujin.age = 25;
//	sujin.homeTown = "당진";
//	sujin.pride = 100;
//	sujin.myScore.eng = 99;
//	sujin.myScore.kor = 100;
//	sujin.monthlyScore[0] = 80;
//	sujin.monthlyScore[2] = 90;
//	score myScore = { 50, 80, 90 }; //배열을 초기화하듯 구조체 변수도 초기화 할 수 있다.
//	//monster a = {"고블린", 79, 55, 12f}
//
//	cout << "이름 : " << sujin.name << endl;
//	cout << "나이 : " << sujin.age << endl;
//	cout << "고향 : " << sujin.homeTown << endl;
//	cout << "자신감 : " << sujin.pride << endl;
//	cout << "영어점수 : " << sujin.myScore.eng << endl;
//	cout << "국어점수 : " << sujin.myScore.kor << endl;
//	cout << "1월 성적 : " << sujin.monthlyScore[0] << endl;
//	cout << "3월 성적 : " << sujin.monthlyScore[2] << endl;
//	cout << myScore.kor << myScore.eng << myScore.math << endl;
//
//	
//
//}
#include <iostream>﻿
#include <conio.h>
#include <string>

using namespace std;

/*
		과제 : 미궁탈출 게임의 업데이트
		사용할 수 있는 모든 요소에 구조체를 활용해서 소스코드를 개선해보세요.
		tile : 지형 정보를 넣고(숲, 늪, 평지)
		player : 피로도를 넣고
		플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 (숲 -1, 늪 -3, 평지 0)
		표시되도록 수정해봅시다.
	*/

struct location
{
	int x;
	int y;
}player, forest, swamp, plain;


int main()
{
	location exit;

	srand(time(NULL));				// 출구 (0, 0) 제외(맞나?)
	do {
		exit.x = rand() % 10;
		exit.y = rand() % 10;
	} while (exit.y == 0 && exit.x == 0);

	player.x = 0;	player.y = 0;	// 플레이어(0, 0)가 존재한다.	
	int hp = 50;
		
	char map[10][10]; //2차원 배열

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
				switch (rand() % 3)
				{
				case 0:
					map[j][i] = 'F';
					
					break;
				case 1:
					map[j][i] = 'S';
					break;
				case 2:
					map[j][i] = 'P';
					break;
				default:
					break;
				}
		}
	}

	while (1)
	{
		for (int y = 0; y < 10; y++) // 맵을 출력하는 애
		{
			for (int x = 0; x < 10; x++)
			{
				if (player.x == x && player.y == y)
				{
					cout << 'O';
				}
				else
				{
					map[exit.x][exit.y] = 'E';
					cout << map[x][y];
				}
			}
			cout << endl;
		}

		char move = _getch();
		//cout << move << endl;
		switch (move)
		{
		case 'w':
			if (player.y > 0)
				player.y -= 1;
			break;

		case 'a':
			if (player.x > 0)
				player.x -= 1;
			break;

		case 's':
			if (player.y < 9)
				player.y += 1;
			break;

		case 'd':
			if (player.x < 9)
				player.x += 1;
			break;

		default:
			cout << "w, a, s, d 중 하나를 입력하여 O를 움직여주세요";
			break;
		}

		system("cls");

		//if ('O' == 'F')
		
		if (exit.x == player.x && exit.y == player.y)
		{
			cout << "탈출에 성공했습니다" << endl;
			break;
		}
			cout << "피로도 : " << hp << endl;
	}

}
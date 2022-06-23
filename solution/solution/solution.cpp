#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

#pragma region selfnumber
//int main()
//{
//    int n ;
//    int count=0;
//    bool isSelfNumber[100000];
//    int selfNumber[100000];
//
// //   while (n != 0)
// //   {
// //       n /= 10;
// //       count++;
// //   }
// //   cout << n << endl;
// //   cout << count << endl;
//
//	////	// n이 1의 자리수일 떄 셀프넘버
// //   while (count = 1)
// //   {
//
// //   }
//		for (int n = 1; n <= 10000; n++)
//		{
//            //int n = 1;
//			isSelfNumber[n] = true;
//			isSelfNumber[n + n / 10 + n % 10] = false;
//            //n++;
//		}
//
//        for (int i = 1; i <= 10000; i++)
//        {
//            int n = 1;
//			if (isSelfNumber[n])
//			{
//                cout << n;
//			}
//            n++;
//        }
//
//    // n이 1000의 자리수일 때 셀프넘버
//    //n % 10;
//
//    // n이 100의 자리수일 떄 셀프넘버
//
//    // n이 10의 자리수일 때 셀프넘버
//	//if (n % 10 == n * 1)
//	//	if (n % 10 == n)
//
//
//    return 0;
//}
#pragma endregion

#pragma region 손익분기점
//int main()
//{
//	int A;
//	int B;
//	int C;
//	cin >> A >> B >> C;
//	int count = 0;
//	int income = C * count;
//	int cost = A + B * count;
//
//	while (income <= cost)
//	{
//		income = C * count;
//		cost = A + B * count;
//		count++;
//	}
//	if (count == 0)
//	{
//		cout << "-1";
//	}
//	else
//	cout << income;
//}
#pragma endregion

#pragma region 에디터_연결리스트시도
//#include <list>
//int main()
//{
//	string s = ""; // 문자열을 입력받는다.
//	cout << "문자열을 입력하세요 : ";
//	cin >> s;
//
//	int M;	// 명령어의 개수를 입력받는다.
//	cout << "명령어의 개수를 입력하세요 : ";
//	cin >> M;
//
//	// 명령어를 처리한다.
//	list<char> lst(s.begin(), s.end());
//	list<char>::iterator cursor = lst.end();
//
//	while (M--)
//	{
//		// 명령어를 입력받는다. 
//		char op;
//		cin >> op;
//
//		switch (op)
//		{
//		case 'L':
//		{
//			if (cursor != lst.begin())
//				--cursor;
//			break;
//		}
//		case 'D':
//		{
//			if (cursor != lst.end())
//				++cursor;
//			break;
//		}
//		case 'B':
//		{
//			// 문자를 지운 후 커서 위치 업데이트 필요함.
//			if (cursor != lst.begin())
//			{
//				--cursor;
//				cursor = lst.erase(cursor);
//			}
//		}
//		case 'P':
//		{
//			char param;
//			cin >> param;
//			// 문자를 추가하기 전에 위치를 업데이트 해줘야함.
//			cursor = lst.insert(cursor, param);
//			cursor++;
//			break;
//		}
//	}
//
//	// 출력한다.
//		for (list<char>::iterator iter = lst.begin(); iter != lst.end(); ++iter)
//		{
//			cout << *iter;
//		}
//}
#pragma endregion

#pragma region 키로거
//int main()
//{
//	//
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int testCase;
//	cin >> testCase;
//	while (testCase--)
//	{
//		//1. 문자열을 입력받는다.
//		string input;
//		cin >> input;
//
//		// 2. 컨테이너 2개를 만든다. (커서 왼편에 존재하는 문자열(정방향으로 저장), 커서 오른편에 존재하는 문자열로 역방향저장)
//		vector(char>
//		
//	}
//}
#pragma endregion

#pragma region 키로거
#include <stack>
int main()
{	
	// 정수를 저장하는 스택
	stack<int> stack;
	
	// 명령의 수 N
	int N = 0;
	cin >> N;

	// 정수 X를 스택에 넣을 것
	int X;

	while (N--)
	{
		// 명령이 하나씩 주어짐
		string order = "";
		cin >> order;

		if (order == "push")
		{
			cin >> X;
			stack.push(X);
		}
		if (order == "pop")
		{
			if (stack.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		if (order == "size")
		{
			cout << stack.size() << "\n";
		}
		if (order == "empty")
		{
			if (stack.empty())
			{
				cout << "1" << "\n";
			}
			else
				cout << "0" << "\n";
		}
		 if(order == "top")
		{
			if (stack.empty())
			{
				cout << "-1\n";
			}
			else
			cout << stack.top() << "\n";
		}
	}
}

#pragma endregion
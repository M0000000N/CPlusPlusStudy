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
#include <forward_list>
class ForwardList
{
	struct Node             // 노드는 외부에 공개하지 않는다. 
	{
		Node(int data = 0, Node* next = nullptr);
		Node(const Node&) = delete;
		Node& operator=(const Node&) = delete;
		~Node();

		int     Data = 0;       // 실제 데이터
		Node* Next = nullptr;   // 다음 원소
	};

	class const_iterator    // 데이터를 수정할 수 없는 반복자. const int*같은 것
	{
	public:
		const_iterator(Node* p = nullptr);
		~const_iterator();

		const int& operator*() const;       // 역참조
		const int* operator->() const;      // 멤버접근
		const_iterator& operator++();       // 전위 증가 연산자
		const_iterator  operator++(int);    // 후위 증가 연산자
		bool            operator==(const const_iterator& rhs) const;
		bool            operator!=(const const_iterator& rhs) const;
		bool            operator==(nullptr_t p) const;
		bool            operator!=(nullptr_t p) const;

	public:
		Node* _p = nullptr;
	};

	// 데이터 수정이 가능한 반복자
	class iterator : public const_iterator
	{
	public:
		// using const_iterator::const_iterator;
		iterator(Node* p = nullptr);

		int& operator*() const;
		int* operator->() const;
		iterator& operator++();
		iterator        operator++(int);
	};

public:
private:
	// 더미노드 : 실제 데이터를 담지 않음, 오로지 구현의 편의성을 위해 존재.
	Node* _head = new Node();   // before_begin()
	Node* _end = new Node();    // end()

};

int main()
{
	std::forward_list<int> flist;
	std::forward_list<int>::iterator iter;
	//ForwardList::const_iterator pos;

	int sizeOfChar; // 문자열의 길이
	cin >> sizeOfChar;
	int stateCount;	// 입력할 명령어의 개수
	cin >> stateCount;
	char statement = '0';

	string str = "";
	cin >> str;
	//cin.get();

	for (int i = str.size()-1; i >= 0; i--)
	{
		flist.insert_after(flist.before_begin(), str[i]);
	}

	while (stateCount)
	{
		//str[iter];
		switch (statement)
		{
		case 'L':
		{
			if (iter == flist.begin())
			{
				break;
			}
			else
			{
				//iter = iter.operator->();
			}
		}
		case 'D':
		{
			if (iter == flist.end())
			{
				break;
			}
			else
			{
				iter = iter.operator++();
			}
		}
		case 'B':
		{
			if (iter == flist.begin())
			{
				break;
			}
			else
			{
				flist.erase_after(iter);
			}
		}
		case 'P':
		{
			char state_char;
			cin >> state_char;

			if (iter == flist.begin())
			{
				break;
			}
			else
			{
			}
		}
		stateCount--;
		}

	}
}
#pragma endregion

#pragma region


#pragma endregion

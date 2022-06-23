// 숫자를 입력받는다.
// 
// 1. 입력한 숫자가 이전 입력 숫자보다 클 때
// top <= 입력받은 수 까지 수열++을 push -> +출력
// pop-> -출력
// 
// 2. 입력한 숫자가 이전 입력 숫자보다 작을 때
// top <= 입력받은 수 까지 pop -> -출력
// 
// 수열++을 push한 수가 입력한 숫자보다 크면 중단.
// 
#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N; // 테스트 케이스
	cin >> N;

	int seq = 1;		// 임의의 수열
	stack<int> seqStack; // 임의의 수열을 담을 스택
	int inputNum[] = { 0, };// 입력한 수를 담을 배열
	int index = 1;			// 입력한 수를 담을 배열의 인덱스
	inputNum[0] = 0;		// 첫 입력의 비교를 위한 임의의 숫자
	seqStack.push(0);
	string print;	//프린트할 것
	bool isTrue = true;

	while (N--)
	{
		cin >> inputNum[index];	// 입력한 수를 배열에 담음

		if (inputNum[index] < inputNum[index - 1])// 입력수가 이전 입력수 보다 작을 때
		{
			if (seqStack.top() == inputNum[index] && !seqStack.empty())
			{
				seqStack.pop();
				print += "- : 이전 입력수보다 작았다.\n";
			}
			else
			{
				isTrue = false;
				break;
			}
		}
		else if (inputNum[index] == 0 || inputNum[index] == inputNum[index - 1])
		{
			isTrue = false;
			break;
		}
		else if (inputNum[index] > inputNum[index - 1])   // 입력한 수가 이전 입력 수 보다 클 때
		{
			while (seqStack.top() < inputNum[index])	// 입력받은 수 까지 수열++을 push, +출력
			{
				seqStack.push(seq);
				seq++;
				print += "+\n";
			}
			if (seqStack.top() == inputNum[index] && !seqStack.empty())
			{
				seqStack.pop();
				print += "- : 이전 입력수보다 컸다.\n";
			}
		}
		index++;
	}

	if (isTrue)
	{
		cout << print;
	}
	else if(!isTrue)
	{
		cout << "NO\n";
	}
	return 0;
}

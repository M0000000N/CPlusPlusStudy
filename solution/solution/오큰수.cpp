#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	int M = N;
	int* seq = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> seq[i];
	}
	int index = 0;

	stack<int> sseq;

	string print = "";
	while (--N)
	{
		for (int i = M - 1; i > index; i--) // 스택에 수열 담기
		{
			sseq.push(seq[i]);
		}

		do 
		{
			if (seq[index] < sseq.top())	// 다음 숫자가 크다면
			{
				print += sseq.top();	// 다음숫자 프린트
			}
			else
			{
				print += "-1";
			}
				sseq.pop();
		} while (seq[index] > sseq.top());
		index++;
	}
	cout << print;

	return 0;
}
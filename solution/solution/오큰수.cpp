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
		for (int i = M - 1; i > index; i--) // ���ÿ� ���� ���
		{
			sseq.push(seq[i]);
		}

		do 
		{
			if (seq[index] < sseq.top())	// ���� ���ڰ� ũ�ٸ�
			{
				print += sseq.top();	// �������� ����Ʈ
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
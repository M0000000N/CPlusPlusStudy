// ���ڸ� �Է¹޴´�.
// 
// 1. �Է��� ���ڰ� ���� �Է� ���ں��� Ŭ ��
// top <= �Է¹��� �� ���� ����++�� push -> +���
// pop-> -���
// 
// 2. �Է��� ���ڰ� ���� �Է� ���ں��� ���� ��
// top <= �Է¹��� �� ���� pop -> -���
// 
// ����++�� push�� ���� �Է��� ���ں��� ũ�� �ߴ�.
// 
#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N; // �׽�Ʈ ���̽�
	cin >> N;

	int seq = 1;		// ������ ����
	stack<int> seqStack; // ������ ������ ���� ����
	int inputNum[] = { 0, };// �Է��� ���� ���� �迭
	int index = 1;			// �Է��� ���� ���� �迭�� �ε���
	inputNum[0] = 0;		// ù �Է��� �񱳸� ���� ������ ����
	seqStack.push(0);
	string print;	//����Ʈ�� ��
	bool isTrue = true;

	while (N--)
	{
		cin >> inputNum[index];	// �Է��� ���� �迭�� ����

		if (inputNum[index] < inputNum[index - 1])// �Է¼��� ���� �Է¼� ���� ���� ��
		{
			if (seqStack.top() == inputNum[index] && !seqStack.empty())
			{
				seqStack.pop();
				print += "- : ���� �Է¼����� �۾Ҵ�.\n";
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
		else if (inputNum[index] > inputNum[index - 1])   // �Է��� ���� ���� �Է� �� ���� Ŭ ��
		{
			while (seqStack.top() < inputNum[index])	// �Է¹��� �� ���� ����++�� push, +���
			{
				seqStack.push(seq);
				seq++;
				print += "+\n";
			}
			if (seqStack.top() == inputNum[index] && !seqStack.empty())
			{
				seqStack.pop();
				print += "- : ���� �Է¼����� �Ǵ�.\n";
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

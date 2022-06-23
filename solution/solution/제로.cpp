#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
	// 정수 입력
	int K = 0;
	cin >> K;

	stack<int> stack;

	int input;

	while (K--)
	{
		cin >> input;
		if (input == 0)
		{
			stack.pop();
		}
		else
			stack.push(input);
	}
	int sum = 0;
	while (stack.size() != 0)
	{
		sum += stack.top();
		stack.pop();
	}
	cout << sum;
}
#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	while (true)
	{
		string line;
		getline(cin, line, '.');
		stack<int> stack;
		if (!stack.empty())
		{
			stack.pop();
		}
		if (line.size() == 1 && line.front() == '\n' || line.empty())
		{
			break;
		}

		for (int i = 0; i < line.length(); ++i)
		{
			if (line[i] == '(')
			{
				stack.push(1);
			}
			if (line[i] == ')')
			{
				if (!stack.empty() && stack.top() == 1)
				{
					stack.pop();
				}
				else
				{
					stack.push(3);
					break;
				}
			}
			if (line[i] == '[')
			{
				stack.push(2);
			}
			if (line[i] == ']')
			{
				if (!stack.empty() && stack.top() == 2)
				{
					stack.pop();
				}
				else
				{
					stack.push(3);
					break;
				}
			}
		}

		if (stack.empty())
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}
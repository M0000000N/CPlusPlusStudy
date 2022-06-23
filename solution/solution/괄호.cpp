#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int T;		// 테스트 데이터의 수 
	cin >> T;
	int count = 0;
	while (T--)
	{
		string brac;
		cin >> brac;
		cin.get();
		//cout << brac.length() << "\n";

		for (int i = 0; i < brac.length(); ++i)
		{
			if (brac[i] == ')')
			{
				--count;
			}
			else if (brac[i] == '(')
			{
				++count;
			}
			if (count < 0)
				break;
		}
		if (count == 0)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
		count = 0;
	}
}

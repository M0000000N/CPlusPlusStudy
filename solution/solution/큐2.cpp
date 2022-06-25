#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main()
{
	int N;
	cin >> N;
	std::deque<int> q;
	string print = "";
	for(int i = N; i > 0; i--)
	{
		q.push_front(i);
	}

	std::deque<int>::const_iterator iter = q.begin();

	int K;
	cin >> K;

	cout << "< ";
	while (!q.empty())
	{
		for (int i = 0; i < K-1; i++)
		{
			if (iter == q.end() - 1)
			{
				iter = q.begin();
			}
			else
			{
				iter++;
			}
		}
		cout << *iter;
		//print += *iter;
		q.erase(iter);
	}
	cout << ">";
	/*cout << "<";
	for(int i = 0; i < N; i++)
	{
		if (i != N - 1)
		{
			cout << print[i] << ", ";
		}
		else
			cout << print[i];
	}
	cout << ">";*/

	return 0;
}
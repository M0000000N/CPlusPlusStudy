#include <iostream>
#include <limits.h>
#include <algorithm>
//#include <vector>
//#include <stack>
//#include <queue>

using namespace std;

#pragma region ����ī��
//int arr [500000];
//int arr2[500000];
//int N, M;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + N);
//
//	cin >> M;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> arr2[i];
//		pair<int*, int*>range = equal_range(arr, arr + N, arr2[i]);
//		cout << range.second - range.first << "\n";
//	}
//}
#pragma endregion

#pragma region �����ڸ���
//using ll = long long;
//
//ll N, M;
//ll arr[1000000];
//
//int main()
//{
//	// ������ ���� ���������� ������ ����
//	cin >> N >> M;
//	// ������ �ִ� ������ ����
//	for (ll i = 0; i < N; ++i)
//	{
//		cin >> arr[i];
//	}
//	// ������ ���� ��������
//	sort(arr, arr + N);
//
//	// ���� ���� [1, arr[n])
//	ll s = 0, e = arr[N - 1];
//	// M(���������� �ϴ� ������ ���̿� ������ ���� �����
//	ll maxHeight = 0;
//
//	while (s < e)
//	{
//		ll result = 0;
//		// ���ܱ⿡ ������ �� �ִ� ������ �ִ�
//		ll nowHeight = (s + e) / 2;
//
//		
//		// ������ �ظ� ����
//		for (ll i = 0; i < N; ++i)
//		{
//			if( arr[i] > nowHeight)
//			{
//				result += (arr[i] - nowHeight);
//			}
//		}
//
//		if (result >= M)
//		{
//			if (maxHeight < nowHeight)
//			{
//				maxHeight = nowHeight;
//			}
//			s = nowHeight + 1;
//		}
//		else
//			e = nowHeight;
//	}
//	cout << maxHeight;
//}
#pragma endregion

#pragma region DFS,BFS

//vector<int> graph[1001];
//int N, M, V;
//void dfs()
//{
//	bool isVisited[1001] = { false };
//	stack<int> st; // ������ �湮�� ������ ����
//	stack<int> st2; // �湮�� �б����� ����
//	st.push(V); // ù��°�� �湮�� ����
//	st2.push(V);
//	isVisited[V] = true;
//
//	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
//	while (false == st2.empty())
//	{
//		// ������ �湮�Ѵ�.
//		int node = st.top(); // �湮�� ����
//		isVisited[node] = true;
//		st.pop();
//		cout << node << ' ';
//
//		// ������ �湮�� ������ ã�´�.
//		for (int i = 0; i < graph[node].size(); i++)
//		{
//			int nextNode = graph[node][i];
//
//			// �бⰡ �ִ��� �Ǻ�
//			if (nextNode)
//			{
//				st2.push(nextNode);
//			}
//			else
//				st2.pop();
//
//			if (isVisited[nextNode] == false)
//			{
//				st.push(nextNode);
//				isVisited[nextNode] = true;
//			}
//		}
//	}
//}
//
//void bfs()
//{
//	bool isVisited[1001] = { false };
//	queue<int> que;// ������ �湮�� ������ ����
//	que.push(V); // ù��°�� �湮�� ����
//	isVisited[V] = true;
//
//	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
//	while (false == que.empty())
//	{
//		// ������ �湮�Ѵ�.
//		int node = que.front();
//		que.pop();
//		isVisited[node] = true;
//		cout << node << ' ';
//
//		// ������ �湮�� ������ ã�´�.
//		for (int nextNode : graph[node])
//		{
//			if (isVisited[nextNode] == false)
//			{
//				que.push(nextNode);
//				isVisited[nextNode] = true;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	cin >> N >> M >> V;
//
//	for (int i = 0; i < M; ++i) // �׷��� ����
//	{
//		int s, e;
//		cin >> s >> e;
//		graph[s].push_back(e);
//		graph[e].push_back(s);
//	}
//	for (int i = 1; i <= N; ++i)
//	{
//		sort(graph[i].begin(), graph[i].end());
//	}
//
//	// DFS
//	dfs();
//
//	cout << '\n';
//	// BFS
//	bfs();
//}
#pragma endregion

#pragma region ������ ��ġ
int main()
{
	int N, C;
	cin >> N >> C;

	int arr[200000];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);

	int s = 0, e = N;
	int wifi[200000];
	wifi[0] = arr[0];
	wifi[N] = arr[N];
	while (s < e)
	{
		int m = s + (e - s) / 2;
		�Ÿ���� = �Ÿ��� / (N - 1);
		int maxlength = MAX_VAL
		for (int i = 1; i < N - 1; ++i)
		{
			wifi[i] = arr[i + m];
		}

		if (�������� �Ÿ��� / N�� 0���� ũ�ų� ������)
		{
			if (�Ÿ� ���߿� ���� ū�� < �Ÿ����)
			{
				�Ÿ� �� �߿� ���� ū�� = �Ÿ����
			}
			s = �Ÿ���� + 1
		}
		else
			e = �Ÿ����߿� ���� ū��	
		
	}
	cout << �Ÿ����߿� ���� ū��

}
#pragma endregion
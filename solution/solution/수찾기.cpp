#include <iostream>
#include <limits.h>
#include <algorithm>
//#include <vector>
//#include <stack>
//#include <queue>

using namespace std;

#pragma region 숫자카드
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

#pragma region 나무자르기
//using ll = long long;
//
//ll N, M;
//ll arr[1000000];
//
//int main()
//{
//	// 나무의 수와 가져가려는 나무의 길이
//	cin >> N >> M;
//	// 가지고 있는 나무의 높이
//	for (ll i = 0; i < N; ++i)
//	{
//		cin >> arr[i];
//	}
//	// 나무의 높이 오름차순
//	sort(arr, arr + N);
//
//	// 범위 설정 [1, arr[n])
//	ll s = 0, e = arr[N - 1];
//	// M(가져가려고 하는 나무의 길이와 같은지 비교할 결과값
//	ll maxHeight = 0;
//
//	while (s < e)
//	{
//		ll result = 0;
//		// 절단기에 설정할 수 있는 높이의 최댓값
//		ll nowHeight = (s + e) / 2;
//
//		
//		// 가상의 해를 구함
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
//	stack<int> st; // 앞으로 방문할 정점을 저장
//	stack<int> st2; // 방문한 분기점을 저장
//	st.push(V); // 첫번째로 방문할 정점
//	st2.push(V);
//	isVisited[V] = true;
//
//	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
//	while (false == st2.empty())
//	{
//		// 정점을 방문한다.
//		int node = st.top(); // 방문한 숫자
//		isVisited[node] = true;
//		st.pop();
//		cout << node << ' ';
//
//		// 다음을 방문할 정점을 찾는다.
//		for (int i = 0; i < graph[node].size(); i++)
//		{
//			int nextNode = graph[node][i];
//
//			// 분기가 있는지 판별
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
//	queue<int> que;// 앞으로 방문할 정점을 저장
//	que.push(V); // 첫번째로 방문할 정점
//	isVisited[V] = true;
//
//	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
//	while (false == que.empty())
//	{
//		// 정점을 방문한다.
//		int node = que.front();
//		que.pop();
//		isVisited[node] = true;
//		cout << node << ' ';
//
//		// 다음을 방문할 정점을 찾는다.
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
//	for (int i = 0; i < M; ++i) // 그래프 구성
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

#pragma region 공유기 설치
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
		거리평균 = 거리합 / (N - 1);
		int maxlength = MAX_VAL
		for (int i = 1; i < N - 1; ++i)
		{
			wifi[i] = arr[i + m];
		}

		if (와이파이 거리합 / N이 0보다 크거나 같으면)
		{
			if (거리 합중에 제일 큰거 < 거리평균)
			{
				거리 합 중에 제일 큰거 = 거리평균
			}
			s = 거리평균 + 1
		}
		else
			e = 거리합중에 제일 큰거	
		
	}
	cout << 거리합중에 제일 큰거

}
#pragma endregion
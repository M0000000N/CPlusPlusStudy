#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
// #include <limits.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <tuple>

using namespace std;

//#define 숫자카드
//#define 나무자르기
//#define 와이파이
//#define 키로거
//#define DFS,BFS
//#define 바이러스
//#define 단지번호붙이기
//#define 미로탐색
//#define 토마토
//#define 토마토2
#define 숨바꼭질


#ifdef 숫자카드
int arr[500000];
int arr2[500000];
int N, M;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> arr2[i];
		pair<int*, int*>range = equal_range(arr, arr + N, arr2[i]);
		cout << range.second - range.first << "\n";
	}
}
#endif

#ifdef 나무자르기

using ll = long long;

ll N, M;
ll arr[1000000];

int main()
{
	// 나무의 수와 가져가려는 나무의 길이
	cin >> N >> M;
	// 가지고 있는 나무의 높이
	for (ll i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
	// 나무의 높이 오름차순
	sort(arr, arr + N);

	// 범위 설정 [1, arr[n])
	ll s = 0, e = arr[N - 1];
	// M(가져가려고 하는 나무의 길이와 같은지 비교할 결과값
	ll maxHeight = 0;

	while (s < e)
	{
		ll result = 0;
		// 절단기에 설정할 수 있는 높이의 최댓값
		ll nowHeight = (s + e) / 2;


		// 가상의 해를 구함
		for (ll i = 0; i < N; ++i)
		{
			if (arr[i] > nowHeight)
			{
				result += (arr[i] - nowHeight);
			}
		}

		if (result >= M)
		{
			if (maxHeight < nowHeight)
			{
				maxHeight = nowHeight;
			}
			s = nowHeight + 1;
		}
		else
			e = nowHeight;
	}
	cout << maxHeight;
}
#endif

#ifdef 와이파이

int N, C;
int x[200000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		cin >> x[i];
	}
	sort(x, x + N);

	// 이진검색을 할 범위는 가장 인접한 공유기 사이의 거리 -> [1, x[N-1]]
	int s = 1, e = x[N - 1] + 1;
	int answer = 0;

	while (s < e)
	{
		// 중앙값을 해의 후보로 정한다.,
		int m = s + (e - s) / 2;	// 0부터 집의 개수 사이의 중간값

		// 실제로 m거리만큼 떨어뜨려 공유기를 배치할 수 있는지 확인한다.
		int count = 1;
		int i = 0;
		for (int j = i + 1; j < N; j++)
		{
			if (x[j] - x[i] >= m)
			{
				count++;
				i = j;
			}
		}

		if (count < C)
		{
			e = m;
		}
		else
		{
			if (answer < m)
			{
				answer = m;
			}
			s = m + 1;
		}
	}
	cout << answer;
}
#endif

#ifdef 키로거

#include <list>
int main()
{
	string s = ""; // 문자열을 입력받는다.
	cin >> s;

	int M;	// 명령어의 개수를 입력받는다.
	cin >> M;

	// 명령어를 처리한다.
	list<char> lst(s.begin(), s.end());
	list<char>::iterator cursor = lst.end();

	while (M--)
	{
		// 명령어를 입력받는다. 
		char op;
		cin >> op;

		switch (op)
		{
		case 'L':
		{
			if (cursor != lst.begin())
				--cursor;
			break;
		}
		case 'D':
		{
			if (cursor != lst.end())
				++cursor;
			break;
		}
		case 'B':
		{
			// 문자를 지운 후 커서 위치 업데이트 필요함.
			if (cursor != lst.begin())
			{
				--cursor;
				cursor = lst.erase(cursor);
			}
			break;
		}
		case 'P':
		{
			char param;
			cin >> param;
			// 문자를 추가하기 전에 위치를 업데이트 해줘야함.
			cursor = lst.insert(cursor, param);
			cursor++;
			break;
		}
		}
	}
	// 출력한다.
	for (list<char>::iterator iter = lst.begin(); iter != lst.end(); ++iter)
	{
		cout << *iter;
	}
	cout << '\n';

}

#endif

#ifdef DFS,BFS

int N, M, V;
vector<int> graph[1001];

void DFS()
{
	// 1. 방문 여부를 저장한다.
	bool isVisited[1001] = { false };
	// 2. DFS에 사용할 스택
	stack<int> stk; // 스택에는 앞으로 방문할 정점을 저장
	stk.push(V); // 초기설정
	isVisited[V] = true;
	cout << V << " "; // 1
	while (!stk.empty()) // 스택이 비어있다면 모든 정점을 방문한 것으로 판단
	{
		// 3-1. 정점을 방문한다.
		int node = stk.top();
		// 3-2. 다음으로 방문할 정점을 찾는다.
		for (int nextNode : graph[node])
		{
			if (!isVisited[nextNode])
			{
				stk.push(nextNode);
				isVisited[nextNode] = true;
				cout << nextNode << " ";
				break;
			}
		}
		if (node == stk.top())
		{
			stk.pop();
		}
	}
}

void dfs(int vertex)
{
	static bool isVisited[1001] = { false };

	isVisited[vertex] = true;

	cout << vertex << ' ';

	// 다음을 방문할 정점을 찾는다.
	for (int next : graph[vertex])
	{
		if (isVisited[next] == false)
		{
			dfs(next);
		}
	}
}

void bfs()
{
	bool isVisited[1001] = { false };
	queue<int> que;// 앞으로 방문할 정점을 저장
	que.push(V); // 첫번째로 방문할 정점
	isVisited[V] = true;

	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
	while (false == que.empty())
	{
		// 정점을 방문한다.
		int node = que.front();
		que.pop();
		//isVisited[node] = true;
		cout << node << ' ';

		// 다음을 방문할 정점을 찾는다.
		for (int nextNode : graph[node])
		{
			if (isVisited[nextNode] == false)
			{
				que.push(nextNode);
				isVisited[nextNode] = true;
			}
		}

		for (size_t i = 0; i < graph[node].size(); ++i)
		{
			int nextNode = graph[node][i];
			if (false == isVisited[nextNode])
			{
				st.push(nextNode);
				isVisited[nextNode] = true;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M >> V;

	for (int i = 0; i < M; ++i) // 그래프 구성
	{
		int s, e;
		cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}

	for (int i = 1; i <= N; ++i)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	// DFS
	dfs(V);

	cout << '\n';
	// BFS
	bfs();
}
#endif

#ifdef 바이러스

vector<int> graph[1001];
int N, M;

int bfs()
{
	int count = 0;
	bool isVisited[1001] = { false };
	queue<int> que;// 앞으로 방문할 정점을 저장
	que.push(1); // 첫번째로 방문할 정점
	isVisited[1] = true;

	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
	while (false == que.empty())
	{
		// 정점을 방문한다.
		int node = que.front();
		que.pop();
		isVisited[node] = true;

		// 다음을 방문할 정점을 찾는다.
		for (int nextNode : graph[node])
		{
			if (isVisited[nextNode] == false)
			{
				que.push(nextNode);
				isVisited[nextNode] = true;
				count++;
			}
		}
	}
	return count;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; ++i) // 그래프 구성
	{
		int s, e;
		cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}
	cout << bfs();
}

#endif

#ifdef 단지번호붙이기
int N = 0;
bool arr[30][30] = { false }; // 입력받는 배열
bool isVisited[30][30] = { false };
int complexCount = 0; // 단지수
int complexHouse[626] = { 0 }; // 단지 안 집 개수

void complexNum(int x, int y)
{
	isVisited[y][x] = true;
	complexHouse[complexCount]++;

	if (x + 1 < N && arr[y][x + 1] && isVisited[y][x + 1] == false)
	{
		complexNum(x + 1, y);
	}

	if (y + 1 < N && arr[y + 1][x] && isVisited[y + 1][x] == false)
	{
		complexNum(x, y + 1);
	}

	if (x - 1 >= 0 && arr[y][x - 1] && isVisited[y][x - 1] == false)
	{
		complexNum(x - 1, y);
	}

	if (y - 1 >= 0 && arr[y - 1][x] && isVisited[y - 1][x] == false)
	{
		complexNum(x, y - 1);
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			scanf("%1d", &arr[i][j]);
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (arr[i][j] && isVisited[i][j] == false)
			{
				complexNum(j, i);
				complexCount++;
			}
		}
	}

	cout << complexCount << '\n';

	sort(complexHouse, complexHouse + complexCount);
	for (int i = 0; i < complexCount; i++)
	{
		cout << complexHouse[i] << '\n';
	}

	return 0;
}

#endif

#ifdef 미로탐색

int Xrange = 0, Yrange = 0;
int map[101][101] = { false }; // 입력받는 배열
bool isVisited[101][101] = { false };
int tryCount = 1;

void visitMazeq(int x, int y)
{
	queue<pair<int, int>> q; // 앞으로 방문할 정점을 저장
	q.emplace(x, y); // 첫번째로 방문할 정점
	isVisited[y][x] = true;

	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
	while (false == q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			// 정점을 방문한다.
			int Xnode = q.front().first;
			int Ynode = q.front().second;
			isVisited[Ynode][Xnode] = true;
			q.pop();

			if (Xnode + 1 <= Xrange && map[Ynode][Xnode + 1] == 1 && isVisited[Ynode][Xnode + 1] == false)
			{
				q.emplace(Xnode + 1, Ynode);
				isVisited[Ynode][Xnode + 1] = true;
			}

			if (Ynode + 1 <= Yrange && map[Ynode + 1][Xnode] && isVisited[Ynode + 1][Xnode] == false)
			{
				q.emplace(Xnode, Ynode + 1);
				isVisited[Ynode + 1][Xnode] = true;
			}

			if (Xnode - 1 > 0 && map[Ynode][Xnode - 1] && isVisited[Ynode][Xnode - 1] == false)
			{
				q.emplace(Xnode - 1, Ynode);
				isVisited[Ynode][Xnode - 1] = true;
			}

			if (Ynode - 1 > 0 && map[Ynode - 1][Xnode] && isVisited[Ynode - 1][Xnode] == false)
			{
				q.emplace(Xnode, Ynode - 1);
				isVisited[Ynode - 1][Xnode] = true;
			}
		}
		tryCount++;
		if (isVisited[Yrange][Xrange])//원하는 지점에 도착했을 때
		{
			return;
		}
	}
}

int main()
{
	cin >> Yrange >> Xrange;

	for (int _y = 1; _y <= Yrange; _y++)
	{
		for (int _x = 1; _x <= Xrange; _x++)
		{
			scanf("%1d", &map[_y][_x]);
		}
	}
	visitMazeq(1, 1);
	cout << tryCount;
}
#endif

#ifdef 토마토
int ripeDay;
int Xrange, Yrange;
int box[1000][1000];
int needToRipe = 0;
bool isVisited[1000][1000] = { false };

queue<pair<int, int>> q; // 앞으로 방문할 정점을 저장

void bfs()
{
	isVisited[y][x] = true;

	// 더이상 방문할 정점이 없을 떄 까지 방문한다.
	while (false == q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			// 정점을 방문한다.
			int Xnode = q.front().first;
			int Ynode = q.front().second;
			isVisited[Ynode][Xnode] = true;
			q.pop();

			if (Xnode + 1 <= Xrange && box[Ynode][Xnode + 1] == 0 && isVisited[Ynode][Xnode + 1] == false)
			{
				q.emplace(Xnode + 1, Ynode);
				isVisited[Ynode][Xnode + 1] = true;
				needToRipe--;
			}

			if (Ynode + 1 <= Yrange && box[Ynode + 1][Xnode] == 0 && isVisited[Ynode + 1][Xnode] == false)
			{
				q.emplace(Xnode, Ynode + 1);
				isVisited[Ynode + 1][Xnode] = true;
				needToRipe--;

			}

			if (Xnode - 1 > 0 && box[Ynode][Xnode - 1] == 0 && isVisited[Ynode][Xnode - 1] == false)
			{
				q.emplace(Xnode - 1, Ynode);
				isVisited[Ynode][Xnode - 1] = true;
				needToRipe--;

			}

			if (Ynode - 1 > 0 && box[Ynode - 1][Xnode] == 0 && isVisited[Ynode - 1][Xnode] == false)
			{
				q.emplace(Xnode, Ynode - 1);
				isVisited[Ynode - 1][Xnode] = true;
				needToRipe--;
			}
		}
		if (q.empty()) break;
		ripeDay++;
		std::cout << "[ " << ripeDay << " ]" << "\n";
		for (int y = 1; y <= Yrange; y++)
		{
			for (int x = 1; x <= Xrange; x++)
			{
				switch (isVisited[y][x])
				{
				case -1:
					std::cout << "◎";
					break;
				case 1:
					std::cout << "○";
					break;
				case 0:
					std::cout << "●";
					break;
				}
			}
			std::cout << "\n";
		}
		std::cout << needToRipe << "\n";
	}
}

enum { EMPTY, TOMATO, RIPED };

int main()
{
	cin >> Xrange >> Yrange;

	struct Coord
	{
		int Xrange;
		int Yrange;
	};

	for (int _x = 1; _x <= Xrange; _x++)
	{
		for (int _y = 1; _y <= Yrange; _y++)
		{
			cin >> box[Yrange][Xrange];
			if (box[Yrange][Xrange] == 1)
			{
				q.emplace(Xrange, Yrange); // 첫번째로 방문할 정점
			}
			if (box[Yrange][Xrange] == TOMATO)
			{
				needToRipe++;
			}
		}
	}

	while (false == q.empty())
	{
		const Coord coord{ Xrange, Yrange }

		bfs();

		if (needToRipe != 0)
		{
			cout << -1;
		}
		else
		{
			cout << ripeDay;
		}
	}
#endif

#ifdef 토마토2

	int main()
	{
		int X = 0, Y = 0, Z = 0;
		int box[100][100][100];
		enum { EMPTY = -1, TOMATO, RIPENED };

		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		// 1. M, N을 입력 받는다.
		cin >> X >> Y >> Z;

		// 2. 토마토 상자의 정보를 입력 받는다.

		queue< tuple<int, int, int > > q;

		int tomatoCount = 0;
		for (int z = 0; z < Z; z++)
		{
			for (int y = 0; y < Y; ++y)
			{
				for (int x = 0; x < X; ++x)
				{
					cin >> box[z][y][x];

					if (box[z][y][x] == RIPENED)
						q.emplace(z, y, x);
					else if (box[z][y][x] == TOMATO)
						++tomatoCount;
				}
			}
		}

		if (tomatoCount == 0)
		{
			cout << 0;
			return 0;
		}

		// 3. 토마토를 숙성시켜야 함
		int minimalDay = 0;
		while (false == q.empty())
		{
			int size = q.size();
			while (size--)
			{
				int z = get<0>(q.front());
				int y = get<1>(q.front());
				int x = get<2>(q.front());

				q.pop();

				const int dx[] = { -1, 1, 0, 0, 0, 0 };
				const int dy[] = { 0, 0, -1, 1, 0, 0 };
				const int dz[] = { 0, 0, 0, 0, -1, 1 };

				for (int i = 0; i < 6; ++i)
				{
					const int nx = x + dx[i];
					const int ny = y + dy[i];
					const int nz = z + dz[i];

					if (nx < 0 || nx >= X || ny < 0 || ny >= Y || nz < 0 || nz >= Z)
						continue;

					if (box[nz][ny][nx] == TOMATO)
					{
						q.emplace(nz, ny, nx);
						box[nz][ny][nx] = RIPENED;
						--tomatoCount;
					}
				}
			}
			++minimalDay;
		}

		// 4. 숙성일 수 출력
		if (tomatoCount > 0)
			cout << -1;
		else
			cout << minimalDay - 1;
	}

#endif // 토마토2

#ifdef 숨바꼭질
#define 왼쪽 0
#define 오른쪽 1
#define 순간이동 2

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		int 수빈, 동생;
		cin >> 수빈 >> 동생;

		queue<int> q;
		q.push(수빈);
		int 다음수빈;
		int moveCount = 0;
		bool isvisited[100001] = { false };

		while (false == q.empty())
		{
			int size = q.size();

			while (size--)
			{
				다음수빈 = q.front();
				isvisited[다음수빈] = true;

				q.pop();

				if (0 <= 다음수빈 - 1 && isvisited[다음수빈 - 1] == false)
				{
					q.push(다음수빈 - 1);
				}
				if (다음수빈 + 1 <= 100000 && isvisited[다음수빈 + 1] == false)
				{
					q.push(다음수빈 + 1);
				}

				if (다음수빈 * 2 <= 100000 && isvisited[다음수빈 * 2] == false)
				{
					q.push(다음수빈 * 2);
				}
				/*for (int move = 0; move < 3; ++move)
				{
					isvisited[다음수빈] = true;
					switch (move)
					{
					case 왼쪽:
						다음수빈 = 수빈 - 1;
						break;
					case 오른쪽:
						다음수빈 = 수빈 + 1;
						break;
					case 순간이동:
						다음수빈 = 수빈 * 2;
						break;
					}

					if (다음수빈 < 0 || 다음수빈 > 100000)
						continue;

					if (!isvisited[다음수빈])
					{
						q.push(다음수빈);
					}
				}*/
			}
			if (isvisited[동생])
				break;

			moveCount++;
		}

		cout << moveCount;

		return 0;
	}

#endif // 숨바꼭질

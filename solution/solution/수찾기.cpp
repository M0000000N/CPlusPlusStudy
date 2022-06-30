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

//#define ����ī��
//#define �����ڸ���
//#define ��������
//#define Ű�ΰ�
//#define DFS,BFS
//#define ���̷���
//#define ������ȣ���̱�
//#define �̷�Ž��
//#define �丶��
//#define �丶��2
#define ���ٲ���


#ifdef ����ī��
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

#ifdef �����ڸ���

using ll = long long;

ll N, M;
ll arr[1000000];

int main()
{
	// ������ ���� ���������� ������ ����
	cin >> N >> M;
	// ������ �ִ� ������ ����
	for (ll i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
	// ������ ���� ��������
	sort(arr, arr + N);

	// ���� ���� [1, arr[n])
	ll s = 0, e = arr[N - 1];
	// M(���������� �ϴ� ������ ���̿� ������ ���� �����
	ll maxHeight = 0;

	while (s < e)
	{
		ll result = 0;
		// ���ܱ⿡ ������ �� �ִ� ������ �ִ�
		ll nowHeight = (s + e) / 2;


		// ������ �ظ� ����
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

#ifdef ��������

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

	// �����˻��� �� ������ ���� ������ ������ ������ �Ÿ� -> [1, x[N-1]]
	int s = 1, e = x[N - 1] + 1;
	int answer = 0;

	while (s < e)
	{
		// �߾Ӱ��� ���� �ĺ��� ���Ѵ�.,
		int m = s + (e - s) / 2;	// 0���� ���� ���� ������ �߰���

		// ������ m�Ÿ���ŭ ����߷� �����⸦ ��ġ�� �� �ִ��� Ȯ���Ѵ�.
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

#ifdef Ű�ΰ�

#include <list>
int main()
{
	string s = ""; // ���ڿ��� �Է¹޴´�.
	cin >> s;

	int M;	// ��ɾ��� ������ �Է¹޴´�.
	cin >> M;

	// ��ɾ ó���Ѵ�.
	list<char> lst(s.begin(), s.end());
	list<char>::iterator cursor = lst.end();

	while (M--)
	{
		// ��ɾ �Է¹޴´�. 
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
			// ���ڸ� ���� �� Ŀ�� ��ġ ������Ʈ �ʿ���.
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
			// ���ڸ� �߰��ϱ� ���� ��ġ�� ������Ʈ �������.
			cursor = lst.insert(cursor, param);
			cursor++;
			break;
		}
		}
	}
	// ����Ѵ�.
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
	// 1. �湮 ���θ� �����Ѵ�.
	bool isVisited[1001] = { false };
	// 2. DFS�� ����� ����
	stack<int> stk; // ���ÿ��� ������ �湮�� ������ ����
	stk.push(V); // �ʱ⼳��
	isVisited[V] = true;
	cout << V << " "; // 1
	while (!stk.empty()) // ������ ����ִٸ� ��� ������ �湮�� ������ �Ǵ�
	{
		// 3-1. ������ �湮�Ѵ�.
		int node = stk.top();
		// 3-2. �������� �湮�� ������ ã�´�.
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

	// ������ �湮�� ������ ã�´�.
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
	queue<int> que;// ������ �湮�� ������ ����
	que.push(V); // ù��°�� �湮�� ����
	isVisited[V] = true;

	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
	while (false == que.empty())
	{
		// ������ �湮�Ѵ�.
		int node = que.front();
		que.pop();
		//isVisited[node] = true;
		cout << node << ' ';

		// ������ �湮�� ������ ã�´�.
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

	for (int i = 0; i < M; ++i) // �׷��� ����
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

#ifdef ���̷���

vector<int> graph[1001];
int N, M;

int bfs()
{
	int count = 0;
	bool isVisited[1001] = { false };
	queue<int> que;// ������ �湮�� ������ ����
	que.push(1); // ù��°�� �湮�� ����
	isVisited[1] = true;

	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
	while (false == que.empty())
	{
		// ������ �湮�Ѵ�.
		int node = que.front();
		que.pop();
		isVisited[node] = true;

		// ������ �湮�� ������ ã�´�.
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

	for (int i = 0; i < M; ++i) // �׷��� ����
	{
		int s, e;
		cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}
	cout << bfs();
}

#endif

#ifdef ������ȣ���̱�
int N = 0;
bool arr[30][30] = { false }; // �Է¹޴� �迭
bool isVisited[30][30] = { false };
int complexCount = 0; // ������
int complexHouse[626] = { 0 }; // ���� �� �� ����

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

#ifdef �̷�Ž��

int Xrange = 0, Yrange = 0;
int map[101][101] = { false }; // �Է¹޴� �迭
bool isVisited[101][101] = { false };
int tryCount = 1;

void visitMazeq(int x, int y)
{
	queue<pair<int, int>> q; // ������ �湮�� ������ ����
	q.emplace(x, y); // ù��°�� �湮�� ����
	isVisited[y][x] = true;

	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
	while (false == q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			// ������ �湮�Ѵ�.
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
		if (isVisited[Yrange][Xrange])//���ϴ� ������ �������� ��
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

#ifdef �丶��
int ripeDay;
int Xrange, Yrange;
int box[1000][1000];
int needToRipe = 0;
bool isVisited[1000][1000] = { false };

queue<pair<int, int>> q; // ������ �湮�� ������ ����

void bfs()
{
	isVisited[y][x] = true;

	// ���̻� �湮�� ������ ���� �� ���� �湮�Ѵ�.
	while (false == q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			// ������ �湮�Ѵ�.
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
					std::cout << "��";
					break;
				case 1:
					std::cout << "��";
					break;
				case 0:
					std::cout << "��";
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
				q.emplace(Xrange, Yrange); // ù��°�� �湮�� ����
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

#ifdef �丶��2

	int main()
	{
		int X = 0, Y = 0, Z = 0;
		int box[100][100][100];
		enum { EMPTY = -1, TOMATO, RIPENED };

		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		// 1. M, N�� �Է� �޴´�.
		cin >> X >> Y >> Z;

		// 2. �丶�� ������ ������ �Է� �޴´�.

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

		// 3. �丶�並 �������Ѿ� ��
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

		// 4. ������ �� ���
		if (tomatoCount > 0)
			cout << -1;
		else
			cout << minimalDay - 1;
	}

#endif // �丶��2

#ifdef ���ٲ���
#define ���� 0
#define ������ 1
#define �����̵� 2

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		int ����, ����;
		cin >> ���� >> ����;

		queue<int> q;
		q.push(����);
		int ��������;
		int moveCount = 0;
		bool isvisited[100001] = { false };

		while (false == q.empty())
		{
			int size = q.size();

			while (size--)
			{
				�������� = q.front();
				isvisited[��������] = true;

				q.pop();

				if (0 <= �������� - 1 && isvisited[�������� - 1] == false)
				{
					q.push(�������� - 1);
				}
				if (�������� + 1 <= 100000 && isvisited[�������� + 1] == false)
				{
					q.push(�������� + 1);
				}

				if (�������� * 2 <= 100000 && isvisited[�������� * 2] == false)
				{
					q.push(�������� * 2);
				}
				/*for (int move = 0; move < 3; ++move)
				{
					isvisited[��������] = true;
					switch (move)
					{
					case ����:
						�������� = ���� - 1;
						break;
					case ������:
						�������� = ���� + 1;
						break;
					case �����̵�:
						�������� = ���� * 2;
						break;
					}

					if (�������� < 0 || �������� > 100000)
						continue;

					if (!isvisited[��������])
					{
						q.push(��������);
					}
				}*/
			}
			if (isvisited[����])
				break;

			moveCount++;
		}

		cout << moveCount;

		return 0;
	}

#endif // ���ٲ���

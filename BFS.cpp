//马的遍历 
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> PII;

const int N = 410;

int n, m, x, y;
int dist[N][N];

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

void bfs()
{
	memset(dist, -1, sizeof dist);
	
	queue<PII> q;
	q.push({x, y});
	dist[x][y] = 0;
	
	while(q.size())
	{
		auto t = q.front(); q.pop();
		int i = t.first, j = t.second;
		for(int k = 0; k < 8; k++)
		{
			int x = i + dx[k], y = j + dy[k];
			if(x < 1 || x > n || y < 1 || y > n) continue;
			if(dist[x][y] != -1) continue;
			
			dist[x][y] = dist[i][j] + 1;
			q.push({x, y});
		} 
	}
}

int main()
{
	cin >> n >> m >> x >> y;
	
	bfs();
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}




//kotori 和迷宫
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> PII;

const int N = 35;

int n, m, x, y;
char a[N][N];
int dist[N][N];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfs()
{
	memset(dist, -1, sizeof dist);
	queue<PII> q;
	q.push({x, y});
	dist[x][y] = 0;
	
	while(q.size())
	{
		auto t = q.front(); q.pop();
		int i = t.first, j = t.second;
		for(int k = 0; k < 4; k++)
		{
			int x = i + dx[k], y = j + dy[k];
			if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] != '*' && dist[x][y] == -1)
			{
				dist[x][y] = dist[i][j] + 1;
				if(a[x][y] == 'e')
				{
					continue;
				}
				q.push({x, y});
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if(a[i][j] == 'k')
			{
				x = i, y = j;
			}
		}
	}
	
	bfs();
	
	int cnt = 0, ret = 1e9;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(a[i][j] == 'e' && dist[i][j] != -1)
			{
				cnt++;
				ret = min(ret, dist[i][j]);
			}
		}
	}
	if(cnt == 0) cout << -1 << endl;
	else cout << cnt << " " << ret << endl;
	
	return 0;
}




//Catch That Cow S
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;

int n = 1e5;
int x, y; 
int dist[N];//标记是否搜过以及最少步数 

void bfs()
{
	queue<int> q;
	q.push(x);
	dist[x] = 0;
	
	while(q.size())
	{
		auto t = q.front(); q.pop();
		int a = t + 1, b = t - 1, c = t * 2;
		
		if(a <= n && dist[a] == -1)
		{
			dist[a] = dist[t] + 1;
			q.push(a);
		}
		if(b > 0 && dist[b] == -1)
		{
			dist[b] = dist[t] + 1;
			q.push(b);
		}
		if(c <= n && dist[c] == -1)
		{
			dist[c] = dist[t] + 1;
			q.push(c);
		}
		//剪枝
		if(a == y || b == y || c == y) return; 
	}
}

int main()
{
	int T; cin >> T;
	while(T--)
	{
		memset(dist, -1, sizeof dist); 
		cin >> x >> y;
		bfs();
		cout << dist[y] << endl;
	}
}




//八数码难题
#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

string s;
string aim = "123804765";
unordered_map<string, int> dist;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfs()
{
    queue<string> q;
    q.push(s);
    dist[s] = 0;
    
    while(q.size())
    {
        string t = q.front(); q.pop();
        int pos = 0;
        while(t[pos] != '0') pos++;
        int x = pos / 3, y = pos % 3; // 计算二维矩阵中对应的位置 
        for(int i = 0; i < 4; i++)
        {
            int a = x + dx[i], b = y + dy[i];
            if(a >= 0 && a <= 2 && b >= 0 && b <= 2)
            {
                string next = t;
                // (x, y) 与 (a, b) 做交换 
                int p = 3 * a + b;
                swap(next[p], next[pos]);
                if(dist.count(next)) continue;
                dist[next] = dist[t] + 1;
                q.push(next);
                if(next == aim) return; // 剪枝 
            }
        }
    }
}

int main()
{
    cin >> s;
    bfs();
    cout << dist[aim] << endl;
    return 0;
}





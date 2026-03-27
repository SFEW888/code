//小明的游戏 
#include <iostream>
#include <deque> 
#include <cstring>

using namespace std;

typedef pair<int, int> PII;

const int N = 510;

int n, m, x1, y1, x2, y2;
char a[N][N];
int dist[N][N];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void bfs()
{
	if(x1 == x2 && y1 == y2)
	{
		dist[x2][y2] = 0;
		return;
	}
	
	memset(dist, -1, sizeof dist);
	deque<PII> q;
	q.push_back({x1, y1});
	dist[x1][y1] = 0;
	
	while(q.size())
	{
		auto t = q.front(); q.pop_front();
		int i = t.first, j = t.second;
		if(i == x2 && j == y2) return;
		
		for(int k = 0; k < 4; k++)
		{
			int x = i + dx[k], y = j + dy[k];
			if(x >= 1 && x <= n && y >= 1 && y <= m)
			{
				char cur = a[i][j], next = a[x][y];
				int w = (cur == next ? 0 : 1);
				if(dist[x][y] == -1)
				{
					dist[x][y] = dist[i][j] + w; 
					if(w == 0) q.push_front({x, y});
					else q.push_back({x, y});
				}
				else if(dist[i][j] + w < dist[x][y])
				{
					//松弛操作
					dist[x][y] = dist[i][j] + w; 
				}
				
			}
		}
	}
}

int main()
{
	while(cin >> n >> m, n && m)
	{
		if(!n && !m) break;
		
		for(int i = 1; i <= n; i++)
		    for(int j = 1; j <= m; j++)
		        cin >> a[i][j];
		cin >> x1 >> y1 >> x2 >> y2;
		bfs();
		cout << dist[x2][y2] << endl;
	}
	return 0;
}






















































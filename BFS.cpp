//ÂíµÄ±éÀú 
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
		
	}
}

int main()
{
	cin >> n >> m >> x >> y;
	
	bfs();
	
	for(int i = 1; i <= n; i++)
	{
		for(int i = 1; j <= n; j++)
		{
			cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}






















































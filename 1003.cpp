#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
int edge[501][501], weight[501], w[501],dis[501],num[501];
int N, M, C1, C2,a,b,c;
bool Graph[501];
const int inf = 9999999;
int main()
{
	cin >> N >> M >> C1 >> C2;
	for (int i = 0;i < N;i++)
		cin >> weight[i];
	
	fill(edge[0], edge[0] + 501 * 501, inf);
	fill(dis, dis + 501, inf);

	while (M--)
	{
		cin >> a >> b >> c;
		edge[a][b] = edge[b][a] = c;
	}


	dis[C1] = 0;
	num[C1] = 1;
	w[C1] = weight[C1];

	

	for (int i = 0;i < N;i++)
	{
			int u = -1;
			int minn = inf;
	
			for (int j = 0;j < N;j++)
			{
				if (minn > dis[j]&& Graph[j]==false)
				{
					u = j;
					minn = dis[j];
				}
			}
			if (u == -1)
				break;

			Graph[u] = true;

			for (int v = 0;v < N;v++)
			{
				if (Graph[v] == false && edge[u][v] != inf)
				{
					if (dis[u] + edge[u][v] < dis[v])
					{
						dis[v] = dis[u] + edge[u][v];
						num[v] = num[u];
						w[v] = w[u] + weight[v];
					}
					else if (dis[u] + edge[u][v] == dis[v])
					{
						num[v] = num[u] + num[v];
						if (w[u] + weight[v] > w[v])
							w[v] = w[u] + weight[v];
					}
				}
			}
		
	}
		
		
	

	cout << num[C2] << " " << w[C2];
	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool visit[1001];
int AdjMatrix[1001][1001];
int N;
//参考柳神
//掌握dfs遍历某个节点并把节点标记为true 然后这说明是一个连通分量 遍历所有节点
//确定最后节点标记为true 求得连通分量 然后输出连通分量-1 
//因为当a个互相分立的连通分量需要变为连通图的时候，只需要添加a-1个路线，
//就能让他们相连
//只要标记某个城市为true那么深度优先遍历就绝对不会遍历该城市，相当于该节点不会被城市所遍历
void dfs(int node)
{
	visit[node] = true;
	for (int i = 1;i <= N;i++)
	{
		if(visit[i]==false&&AdjMatrix[node][i]==1)
		dfs(i);
	}
}

int main()
{
	int M, K,a;
	cin >> N >> M >> K;

	while (M--)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		AdjMatrix[temp1][temp2] = AdjMatrix[temp2][temp1] = 1;
	}

	for (int i = 0;i < K;i++)
	{
		fill(visit, visit + 1001, false);
		scanf("%d", &a);
		int cnt = 0;
		visit[a] = true;
		for(int j=1;j <= N;j++)
		{
			if (visit[j] == false)
			{
				dfs(j);
				cnt++;
			}
				
		}
		printf("%d\n", cnt - 1);
	}
	return 0;
}
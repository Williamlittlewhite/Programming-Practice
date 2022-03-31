#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
//注意递归return一定是在基准状况return dfs要注意是Depth+1  最后输出一定是maxdepth
vector<int> v[100];
int book[100];
int maxdepth = -1;
void dfs(int index, int depth)
{
	if (v[index].size() == 0)
	{
		book[depth]++;
		maxdepth = max(depth, maxdepth);
		return;
	}
	if (v[index].size() != 0)
	{
		for (int j = 0;j < v[index].size();j++)
		{
			dfs(v[index][j], depth+1);
		}
	}
}

int main()
{
	int N, M,ID,K,temp;
	cin >> N >> M;

	for (int i = 0;i < M;i++)
	{
		cin >> ID >> K;
		for (int j = 0;j < K;j++)
		{
			cin >> temp;
			v[ID].push_back(temp);
		}
	}

	dfs(1, 0);

	cout << book[0];
	for (int i = 1;i <= maxdepth;i++)
		cout << " " << book[i];
	return 0;
}
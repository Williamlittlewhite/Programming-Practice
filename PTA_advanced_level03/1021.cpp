//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//int N;
//bool visit[10001];
//vector<vector<int>> v;//存储边，相当于二维数组
//vector<int> temp;///临时存储最高的节点
//set<int> s; //set容器，没有重复元素，并且有序，默认从小到大
////本题比较复杂，寻找图是否能构成树，只需要利用图的dfs即可，然后temp存取最深层次的节点
////记住寻找图最深根只需要用dfs找到最深根集合，然后从集合里面挑一个点我们继续dfs得到另一个最深根集合
////两个最深根集合相互结合我们就得到了最深根的集合！
//int maxheight = 0;
//void dfs(int node, int height)
//{
//	if (height > maxheight)
//	{
//		maxheight = height;
//		temp.clear();
//		temp.push_back(node);
//	}
//	else if (height == maxheight)
//		temp.push_back(node);
//	visit[node] = true;
//	for (int i = 0;i < v[node].size();i++)
//	{
//		if(visit[v[node][i]]==false)
//			dfs(v[node][i], height + 1);
//	}
//}
//
//int main()
//{
//	scanf("%d", &N);
//	v.resize(N + 1);
//	int a, b,s1=0,cnt = 0;
//	for (int i = 0;i < N-1 ;i++)
//	{
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//
//	for (int i = 1;i <= N;i++)
//	{
//		if (visit[i] == false)
//		{
//			dfs(i, 1);
//			if (i == 1) {
//				if (temp.size() != 0) s1 = temp[0];
//				for (int j = 0;j < temp.size();j++)
//					s.insert(temp[j]);
//			}
//			cnt++;
//		}
//	}
//
//
//	if (cnt >= 2) {
//		printf("Error: %d components", cnt);
//	}
//	else
//	{
//		temp.clear();
//		maxheight = 0;
//		fill(visit, visit + 10001, false);
//		dfs(s1, 1);//等于1时最高高度的节点，随便选一个来dfs，找出其他最高高度的节点，一头一尾的都是最高
//		for (int i = 0;i < temp.size();i++)
//			s.insert(temp[i]);
//		for (auto it = s.begin();it != s.end();it++)
//			printf("%d\n", *it);
//	}
//	return 0;
//
//}
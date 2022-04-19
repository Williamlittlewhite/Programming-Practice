//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<cmath>
//#include<queue>
//using namespace std;
//vector<int> v;
////题目很简单 一遍AC！
//void Convert(int a,int b)
//{
//	while (a)
//	{
//		v.push_back(a % b);
//		a /= b;
//	}
//}
//
//
//
//int main()
//{
//	int N, b,flag=1;
//	scanf("%d %d", &N, &b);
//	Convert(N, b);
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i] != v[v.size() - 1 - i])
//			flag = 0;
//	}
//
//	if (flag)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	printf("%d", v[v.size() - 1]);
//	for (int i = v.size() - 2;i >= 0;i--)
//		printf(" %d", v[i]);
//
//
//	return 0;
//}
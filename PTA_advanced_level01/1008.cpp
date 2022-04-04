//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<math.h>
//#include<string>
//#include<algorithm>
//using namespace std;
////本题很简单 基本编程思想
//static int sum = 0;
//void Caculate(int& a, int& b)
//{
//	if (a < b)
//		sum =sum+(b - a) * 6 + 5;
//	if (a == b)
//		sum = sum + 5;
//	if (a > b)
//		sum =sum+(a - b) * 4 + 5;
//}
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	vector<int> v;
//	v.push_back(0);
//	while (N--)
//	{
//		int temp;
//		cin >> temp;
//		v.push_back(temp);
//	}
//	for (int i = 0; i < v.size()-1;i++)
//		Caculate(v[i], v[i + 1]);
//
//	printf("%d", sum);
//}
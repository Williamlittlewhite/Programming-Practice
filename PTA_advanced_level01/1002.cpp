#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
//class PolyNomial 自己的思路想不下去了 参照柳神的思路写
//{
//public:
//	int exponents;
//	double coefficents;
//};
//
//
//int main()
//{
//	int K;
//	cin >> K;
//	vector<PolyNomial> v,v1,v2;
//	while (K--)
//	{
//		PolyNomial p;
//		cin >> p.exponents >> p.coefficents;
//		v.push_back(p);
//	}
//	int K1;
//	cin >> K1;
//	while (K1--)
//	{
//		PolyNomial p;
//		cin >> p.exponents >> p.coefficents;
//		v1.push_back(p);
//	}
//	
//	if (v[0].exponents > v1[0].exponents)
//	{
//
//	}
//	return 0;
//}
int main()
{
	double c[1001]={0};
	int K;
	cin >> K;
	while (K--)
	{
		int i;
		double temp;
		cin >> i >> temp;
		c[i] += temp;
	}
	int K1;
	cin >> K1;
	while (K1--)
	{
		int i;
		double temp;
		cin >> i >> temp;
		c[i] += temp;
	}
	int count = 0;
	for (int i = 0;i < 1001;i++)
	{
		if (c[i] != 0)
			count++;
	}
	cout << count;
	for (int i = 1000;i >= 0;i--)
	{
		if (c[i] != 0.0)
			printf(" %d %.1lf", i, c[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
//本题难点注意定义为double 同时注意所有月饼不够用的情况 注意使用面向对象的思想
using namespace std;
typedef struct MoonCake {
	double Capacity=1.0;
	double TotalPrice=1.0;
	double Price;
}Cake;

bool cmp(Cake& a, Cake& b)
{
	return a.Price > b.Price;
}
int main()
{
	int N,temp1,temp2;
	double D;
	cin >> N >> D;
	int N1 = N,N2=N;
	vector<MoonCake> v;
	while (N--)
	{
		
		Cake c;
		v.push_back(c);	
	}
	for (int i = 0;i < v.size();i++)
		cin >> v[i].Capacity;
	for (int i = 0;i < v.size();i++)
	{
		cin >> v[i].TotalPrice;
		v[i].Price = v[i].TotalPrice / v[i].Capacity;
	}
	sort(v.begin(), v.end(), cmp);
	double sum = 0, Max = 0;
	for (int i = 0;i < v.size();i++)
	{
		sum = sum + v[i].Capacity;
		Max = Max + v[i].TotalPrice;
	}
	if (sum <= D)
	{
		printf("%.2lf", Max);
		return 0;
	}
	else
	{
		Max = 0;
		sum = 0;
	}
	for (int i = 0;i < v.size();i++)
	{
		
		if (v[0].Capacity > D)
		{
			printf("%.2lf", v[0].Price * D);
			break;
		}
		else {
		sum = sum + v[i].Capacity;
		Max = Max + v[i].TotalPrice;
		if (sum > D)
		{
			sum = sum - v[i].Capacity;
			Max = Max - v[i].TotalPrice;
			Max = Max + (D - sum) * v[i].Price;
			printf("%.2lf", Max);
			break;
		}
		}
	}



	


	return 0;
}
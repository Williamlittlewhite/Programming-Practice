#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//本题学习柳神的思路，主要是vector的初始化，以及利用索引代表信息，和链表的反转那个题有异曲同工之妙
//注意最高分是0分的特殊情况
//class person
//{
//public:
//	int SchoolNumber;
//	int Grade;
//};
//bool cmp(person& a, person& b)
//{
//	return a.SchoolNumber > b.SchoolNumber; 
////注意标准库sort不能大于等于只能大于或者小于比较
//}
//int main()
//{
//	int N;
//	cin >> N;
//	vector <person> v;
//	map<int, int> m;
//	while (N--)
//	{
//		person p;
//		cin >> p.SchoolNumber >> p.Grade;
//		v.push_back(p);
//	}
//	long int sum=0,temp=0;
//	sort(v.begin(), v.end(),cmp);
//	for (int i = 1;i <= v[0].SchoolNumber;i++)
//	{
//		sum = 0;
//		for (int j = 0;j < v.size();j++)
//		{
//			if (v[j].SchoolNumber == i)
//			{
//				sum += v[j].Grade;
//			}
//		}
//		m[i]=sum;
//	}
//	for (int i = 1;i <= v[0].SchoolNumber;i++)
//	{
//		if (m[i] > temp)
//			temp = m[i];
//	}
//	for (int i = 1;i <= v[0].SchoolNumber;i++)
//	{
//		if (m[i] == temp)
//			cout << i << " " << temp;
//	}
	
//}
//int main()
//{
//	
//	int N, SchoolNumber, Grade,temp=0,t;
//	cin >> N;
//	vector<int> v(N+1);
//	while (N--)
//	{
//		cin >> SchoolNumber >> Grade;
//		v[SchoolNumber] += Grade;
//	}
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i] >= temp)
//		{
//			temp = v[i];
//			t = i;
//		}
//	}
//	cout << t << " " << temp;
//}
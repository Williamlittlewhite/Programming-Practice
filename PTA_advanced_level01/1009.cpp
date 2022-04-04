#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
//自己写的是相加的 相乘的参考柳神想法 也类似相加很简单
//int main()
//{
//	int K1,K2;
//	cin >> K1;
//	vector<double> v(11);
//	while (K1--)
//	{
//		int temp1;
//		double temp2;
//		cin >> temp1 >> temp2;
//		v[temp1] = temp2;
//	}
//	cin >> K2;
//	while (K2--)
//	{
//		int temp1;
//		double temp2;
//		cin >> temp1 >> temp2;
//		v[temp1]+= temp2;
//	}
//	int cnt=0;
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i])
//			cnt++;
//	}
//	cout << cnt << " ";
//	for (int i = 0;i < v.size();i++)
//	{
//		if (v[i])
//			cout << i << " " << v[i];
//	}
//	return 0;
//}
int main()
{
	int K1, K2;
	double a[1001]={0.0}, result[2002] = {0.0};
	scanf("%d", &K1);
	for (int i = 0;i < K1;i++)
	{
		int temp1;double temp2;
		scanf("%d %lf", &temp1, &temp2);
		a[temp1] = temp2;
	}
	scanf("%d", &K2);
	for (int i = 0;i < K2;i++)
	{
		int temp1;double temp2;
		scanf("%d %lf", &temp1, &temp2);
		for (int j = 0;j < 1001;j++)
			result[j + temp1] += a[j] * temp2;
	}
	int cnt=0;
	for (int i = 0;i < 2002;i++)
	{
		if (result[i])
			cnt++;
	}
	printf("%d", cnt);
	for (int i = 2001;i >=0;i--)
	{
		if (result[i])
			printf(" %d %.1f", i, result[i]);
	}
	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	int N,i=0,a[1000],m=0;
//	cin >> N;
//	while (N--)
//	{
//		cin >> a[i++];
//	}
//
//
//	int k, sum1 = 0;
//	for (k = 0;k < i;k++)
//	{
//		if (a[k] % 2 == 0 && a[k] % 5 == 0)
//		{
//			sum1 += a[k];
//			m++;
//		}
//	}
//	if(m!=0)
//		cout << sum1<<" ";
//	else
//		cout << "N" << " ";
//
//	int sum2 = 0, j = 0;
//	for (k = 0;k < i;k++)
//	{
//		if (a[k] % 5 == 1)
//		{
//			if (j % 2 == 0)
//			{
//				sum2 += a[k];
//				j++;
//			}
//			else
//			{
//				sum2 -= a[k];
//				j++;
//			}
//		}
//	}
//	if(j!=0)
//		cout << sum2 << " ";
//	else
//		cout << "N" << " ";
//
//
//
//	int count = 0;
//	for (k = 0;k < i;k++)
//	{
//		if (a[k] % 5 == 2)
//		{
//			count++;
//		}
//	}
//	if (count != 0)
//		cout << count << " ";
//	else
//		cout << "N" << " ";
//
//
//
//	double average, sum3 = 0;
//	int temp=0;
//	for (k = 0;k < i;k++)
//	{
//		if (a[k] % 5 == 3)
//		{
//			sum3 += a[k];
//			temp++;
//		}
//	}
//	average = sum3 / temp;
//	if (temp != 0)
//		printf("%.1lf ", average);
//	else
//		cout << "N" << " ";
//	
//
//
//	int temp1 = 0,p=0;
//	for (k = 0;k < i;k++)
//	{
//		if (a[k] % 5 == 4)
//		{
//			p++;
//			if (a[k] > temp1)
//				temp1 = a[k];
//		}
//	}
//	if(p!=0)
//		cout << temp1;
//	else
//		cout << "N" ;
//
//
//	return 0;
//}
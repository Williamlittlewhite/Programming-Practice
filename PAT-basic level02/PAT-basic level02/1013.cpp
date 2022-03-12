//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<math.h>
//using namespace std;
////本题难点在于要用long int 否则会导致无法存够10000个素数 同时注意输出跨段的
////时候的特殊技巧，在输出换行的同时将标志位清0就可以每隔10个数字使得换行而非空格
//int isprime(long int& n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int M,N,a[70000],j=1,g,h;
//	long int k;
//	scanf("%d %d", &M, &N);
//	for (k = 2;k < 165500;k++)
//	{
//		if (isprime(k))
//		{
//			a[j++] = k;
//		}
//	}
//
//		for (g = M,h=1;g <= N;g++,h++)
//		{
//			if (g == N)
//			{
//				cout << a[g];
//				break;
//			}
//			if (h<10)
//			{
//				cout << a[g] << " ";
//			}
//			else
//			{
//				cout << a[g] << endl,h=0;
//			}
//			
//		}
//	
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////自己写的测试例4超时，参考柳神用数组下标当做信息的思路
////int main()
////{
////	int N, i = 0,Grade[100000];
////	cin >> N;
////	while (N--)
////	{
////		cin >> Grade[i++];
////	}
////	int K,LookUp[100000], j = 0;
////	scanf("%d", &K);
////	char ch = getchar();
////	while (K--)
////	{
////		cin >> LookUp[j++];
////	}
////	int temp[10000]={0},m;
////	for (m = 0;m < j;m++)
////	{
////		for (int n = 0; n < i;n++)
////		{
////			if (LookUp[m] == Grade[n])
////				temp[m]++;
////		}
////	}
////	for (int i = 0;i < m;i++)
////	{
////		if(i!=m-1)
////			printf("%d ", temp[i]);
////		else
////			printf("%d", temp[i]);
////	}
////	return 0;
////}
//int main()
//{
//	int N,temp,Grade[100000]={0};
//	scanf("%d", &N);
//	while (N--)
//	{
//		cin >> temp;
//		Grade[temp]++;
//	}
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		scanf("%d", &temp);
//		if (K != 0)
//			printf("%d ", Grade[temp]);
//		else
//			printf("%d", Grade[temp]);
//	}
//	
//	return 0;
//}
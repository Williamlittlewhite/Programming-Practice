//#define _CRT_SECURE_NO_DEPRECATE
//#include<cstdio>
//#include <iostream>
//#include<vector>
////本题没有什么难点关键在于观察规律进行求解，注意M有可能比N大的情况，这种一般取余处理即可
//using namespace std;
//int main()
//{
//	int N, M,temp,i=0,j,k=0;
//	int v[100];
//	scanf("%d %d",&N,&M);
//	int T = N;
//	while (T--)
//	{
//		cin >> temp;
//		v[i++]=temp;
//	}
//	if (M <= N-1&&M>0)
//	{
//		for (j = N - M;k < N;k++, j++)
//		{
//			if (j < i)
//				cout << v[j] << " ";
//			else
//			{
//				if (k != N - 1)
//					cout << v[j % N] << " ";
//				else
//					cout << v[j % N];
//			}
//		}
//	}
//	else if((M%N)!=0&&M>0)
//	{
//		M = M % 6;
//		for (j = N - M;k < N;k++, j++)
//		{
//			if (j < i)
//				cout << v[j] << " ";
//			else
//			{
//				if (k != N - 1)
//					cout << v[j % N] << " ";
//				else
//					cout << v[j % N];
//			}
//		}
//	}
//	else 
//	{
//		for (j = 0;j < N;j++)
//		{
//			if (j != N - 1)
//				cout << v[j] << " ";
//			else
//				cout << v[j];
//		}
//	}
//	return 0;
//}

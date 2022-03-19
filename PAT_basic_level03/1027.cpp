//#define _CRT_SECURE_NO_WARNINGS
//#define CTK_TCK 100
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<math.h>
//using namespace std;
////本题比较简单 注意循环的时候的变量自增情况即可
//
//int main()
//{
//	int i,N;
//	char c;
//
//	cin >> N >> c;
//	int temp = (N - 1) / 2;
//	int sum = 0;
//	int count=0;
//	for (i = 3;sum <= temp;i += 2)
//	{
//		sum += i;
//	}
//	i -= 4;
//	int flag = i;
//	int t = 0;
//	while (i >= 1)
//	{
//		if (t != 0)
//		{
//			int temp1 = t;
//			while (temp1--)
//				cout << " ";
//		}
//		for (int j = i;j > 0;j--)
//		{
//			cout << c;
//			count++;
//		}
//		t++;
//		cout << endl;
//		i -= 2;
//	}
//	i += 4;
//	t -= 2;
//	while (i <= flag)
//	{
//		if (t != 0)
//		{
//			int temp1 = t;
//			while (temp1--)
//				cout << " ";
//		}
//		for (int j = i;j > 0;j--)
//		{
//			cout << c;
//			count++;
//		}
//		t--;
//		cout << endl;
//		i += 2;
//	}
//	cout << N - count;
//	return 0;
//}
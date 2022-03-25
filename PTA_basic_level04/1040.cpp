//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////本题暴力搜索可以求解 但是会超时因此参考柳神重写代码 注意在每次计算后result都取余 
//// 并且单轮 PAT也要取余否则测试例45过不去
////int main()
////{
////	string a;
////	int count = 0;
////	cin >> a;
////	for (int i = 0;i < a.size();i++)
////	{
////		if (a[i] == 'P')
////		{
////			for (int j = i;j < a.size();j++)
////			{
////				if (a[j] == 'A')
////				{
////					for (int k = j;k < a.size();k++)
////					{
////						if (a[k] == 'T')
////							count++;
////					}
////				}
////			}
////		}
////	}
////	cout << count % 1000000007;
////
////
////	return 0;
////}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int countT=0,countP=0,result=0;
//	for (int i = 0;i < s.size();i++)
//		if (s[i] == 'T')
//			countT++;
//	for (int j = 0;j < s.size();j++)
//	{
//		if (s[j] == 'T')
//			countT--;
//		if (s[j] == 'P')
//			countP++;
//		if (s[j] == 'A')
//			result = (result+(countT * countP) % 1000000007)% 1000000007;
//	}
//	cout<< result;
//	return 0;
//};

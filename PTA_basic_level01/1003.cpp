////本题的关键在于第三个条件就是指示如果不属于一二两种情况
////，那么一定保证aPbTc=>aPbATca也就是b每加一个A，c就与a合并一次
////即left*mid == right
//
//#define _CRT_SECURE_NO_DEPRECATE
//#include <iostream>
//using namespace std;
//#include <string.h>
//int isother(string& a)
//{
//	for (int i = 0; i < a.size();i++)
//	{
//		if (a[i] != 'P' && a[i] != 'A' && a[i] != 'T')
//			return 1;
//	}
//	return 0;
//}
//void Evaluate(char* a)
//{
//	int i,t=0,left = 0,mid = 0 ,right = 0;
//	int p = 0;
//	
//	for (i = 0; i < strlen(a);i++)
//	{
//		if (a[i] == 'A' && p == 0 && t == 0)
//		{
//			left++;continue;
//		}
//		else if (a[i] == 'P')
//		{
//			p++;continue;
//		}
//		else if (a[i] == 'A' && p > 0 && t == 0)
//		{
//			mid++;continue;
//		}
//		else if (a[i] == 'T')
//		{
//			t++;continue;
//		}
//		else if (a[i] == 'A' && p > 0 && t > 0)
//		{
//			right++;continue;
//		}
//		else
//			break;
//	}
//	
//	if ((p == 1) && (t == 1) && (mid == 1) && (left == 0) && (right == 0))
//		cout << "YES" << endl;
//	else if (p == 1 && t == 1 && left * mid == right&&mid!=0)
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	
//}
//int main()
//{
//	int n,count = 0;
//	string a;
//	cin >> n;
//	while (count<n)
//	{
//		char a[100] = { 0 };
//		scanf("%s", a);
//		Evaluate(a);
//		count++;
//	}
//
//	return 0;
//}

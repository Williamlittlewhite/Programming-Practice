//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<math.h>
////这个题难点在于中间输入的空格会默认字符输入完毕 %*c解决
////同时注意处理字符的换行时候的情景
////注意用cin的时候不必在意换行和空格 但是如果是scanf就要专门进行处理
//using namespace std;
//void max(int a, int b, int c) //a,b,cΪC J B
//{
//	if (a > b)
//	{
//		if (b > c)
//			cout << 'C';
//		else
//		{
//			if (c > a)
//				cout<< 'B';
//			else
//				cout<< 'C';
//		}
//	}
//	else
//	{
//		if (b < c)
//			cout<< 'B';
//		else {
//			cout<< 'J';
//		}
//	}
//
//}
//int main()
//{
//	int N, i = 0, j = 0;
//	int win = 0, lose = 0, balance = 0;
//	int countC = 0, countJ = 0, countB = 0;
//	int countC1 = 0, countJ1 = 0, countB1 = 0;
//	char a, b;
//	cin >> N;
//	while (N--)
//	{
//		getchar();
//		scanf("%c%*c%c", &a, &b);
//
//		if (a == b)
//			balance++;
//		else if ((a == 'C' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'C'))
//		{
//			win++;
//
//			if (a == 'C')
//				countC++;
//			if (a == 'J')
//				countJ++;
//			if (a == 'B')
//				countB++;
//		}
//		else if ((a == 'J' && b == 'C') || (a == 'B' && b == 'J') || (a == 'C' && b == 'B'))
//		{
//			lose++;
//
//			if (a == 'C')
//				countB1++;
//			if (a == 'J')
//				countC1++;
//			if (a == 'B')
//				countJ1++;
//		}
//	}
//	cout << win << " " << balance << " " << lose << endl;
//	cout << lose << " " << balance << " " << win << endl;
//
//	if (countC == countJ &&countJ == countB)
//		cout << "B";
//	else if (countC == countJ&&countJ > countB)
//		cout << "C";
//	else if (countC == countB&&countB > countJ)
//		cout << "B";
//	else if (countB == countJ && countJ > countC)
//		cout << "B";
//	else
//		max(countC, countJ, countB);
//
//	if (countC1 == countJ1 && countJ1 == countB1)
//		cout << " B";
//	else if ((countC1 == countJ1) && (countJ1 > countB))
//		cout << " C";
//	else if ((countC1 == countB1) && (countB1 > countJ))
//		cout << " B";
//	else if ((countB1 == countJ1) && (countJ1 > countC))
//		cout << " B";
//	else
//	{
//		cout << " ";
//		max(countC1, countJ1, countB1);
//	}
//		return 0;
//
//}
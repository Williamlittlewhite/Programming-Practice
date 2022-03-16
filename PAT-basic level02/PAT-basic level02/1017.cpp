//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//int main()
//{
//	string A;
//	int num[1000];
//	int B,j=0;
//	int temp,R;
//	cin >> A >> B;
//	temp = (A[0] - '0') / B;
//	R = (A[0] - '0') % B;
//	if ((A[0]-'0') > B || A.size() == 1)
//	{
//		cout << temp;
//	}
//	for (int i = 1;i <= A.size()-1;i++)
//	{
//		if (i == A.size() )
//		{
//			R = (R * 10 + (A[i] - '0')) % B;
//			break;
//		}
//		temp = (R* 10 + (A[i] - '0')) / B;
//		R = (R * 10 + (A[i] - '0')) % B;
//		num[j++] = temp;
//	}
//	for (int k = 0;  k<=j-1; k++)
//	{
//		cout << num[k];
//	}
//	cout << " " << R;
//	
//	
//	}
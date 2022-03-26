//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////本题比较简单 学会getline(cin,s)轻易的把一句话合并成一大串字符串 这在不考虑空格十分好用
//int main()
//{
//	string s;
//	int count[26]={0};
//	getline(cin, s);
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = s[i] - 'A' + 'a';
//		if (s[i] >= 'a' && s[i] <= 'z')
//			count[s[i] - 'a']++;
//	}
//	int temp=0;
//	for (int j = 0;j < 26;j++)
//		if (count[j] > temp)
//			temp = count[j];
//	for (int j = 0;j < 26;j++)
//		if (count[j] == temp)
//		{
//			char b = 'a' + j;
//			cout << b << " " << temp;
//			break;
//		}
//	return 0;
//	}
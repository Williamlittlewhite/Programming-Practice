//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////参考柳神思路 学会append补齐string 学会利用字符数组转换进制！
//int main()
//{
//	string s1, s2,s3;
//	cin >> s1 >> s2;
//	reverse(s1.begin(), s1.end());
//	reverse(s2.begin(), s2.end());
//	if (s1.size() < s2.size())
//		s1.append(s2.size()-s1.size(), '0');
//	else
//		s2.append(s1.size() - s2.size(), '0');
//	char s[14] = { "0123456789JQK" };
//	for (int i = 0;i < s1.size();i++)
//	{
//		if (i % 2 == 0)
//		{
//			int temp = (s1[i] - '0' + s2[i] - '0') % 13;
//			s3 += s[temp];
//		}
//		else
//		{
//			int temp = s2[i] - s1[i];
//			if (temp < 0)
//				temp += 10;
//			s3 += s[temp];
//		}
//	}
//	for (int j = s3.size() - 1;j >= 0;j--)
//		cout << s3[j];
//	return 0;
//}
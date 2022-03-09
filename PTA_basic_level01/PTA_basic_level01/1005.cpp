//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include <algorithm>
////注意这个题的关键点在于自身不能算作为关键数字，除此之外还要注意bool数组的妙用
////注意最后输出格式如果不带空格可以用一个flag处理
//using namespace std;
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//int main()
//{
//	int n,K,i;
//	bool Criticize[10000]={false};
//	vector<int> a;
//	cin >> K;
//	while (K--)
//	{
//			cin >> n;
//			a.push_back(n);
//			while (n != 1)
//			{
//				
//				if (n % 2 == 0)
//				{
//					n /= 2;
//				}
//				else
//				{
//					n = (n * 3 + 1) / 2;
//				}
//				Criticize[n] = true;
//			}
//	}
//	sort(a.begin(), a.end(), cmp);
//	int flag = 0;
//	for (i = 0;i < a.size();i++)
//	{	
//		if (Criticize[a[i]] == false)
//		{
//			if (flag)
//				cout << " ";
//			cout << a[i];
//			flag = 1;
//		}
//	}
//	return 0;
//}
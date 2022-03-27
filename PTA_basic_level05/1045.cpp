//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////想法太简单了算法全部超时 参考柳神代码优化一下  本题坑点注意最后如果啥也没输出 也要输出换行
//// 利用一个思想 即排序后位置不变 且原始数组左边的数都小于右边 那这个数一定是主元的思想！
////int main()
////{
////	int N;
////	long long int n,count=0;
////	vector<long long int> v,v1;
////	cin >> N;
////	int N1 = N;
////	while (N--)
////	{
////		cin >> n;
////		v.push_back(n);
////		v1.push_back(n);
////	}
////	for (int i = 0;i < v.size();i++)
////	{
////		for (int j = 0;j <= i;j++)
////		{
////			if (v[j] > v[i])
////			{
////				v1[i] = -1;count++;
////			}
////		}
////		for (int j = i + 1;j < v.size();j++)
////		{
////			if (v[j] < v[i])
////			{
////				v1[i] = -1;count++;
////			}
////		}
////	}
////	cout << N1-count << endl;
////	for (int i = 0;i < v.size();i++)
////	{	
////		if (count != 0)
////		{
////			if (v1[i] != -1)
////			{
////				cout << v1[i]<<" ";count--;
////			}
////		}
////		else
////		{
////			if (v1[i] != -1)
////			{
////				cout << v1[i];count--;
////			}
////		}
////
////	}
////
////	return 0;
////}
//int main()
//{
//	int N,max=0,count=0;
//	cin >> N;
//	vector<int> v0(N), v1(N),v(N);
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v0[i];
//		v1[i] = v0[i];
//	}
//	sort(v1.begin(), v1.end());
//	for (int i = 0;i < N;i++)
//	{
//		if (v0[i] == v1[i] && v0[i] > max)
//			v[count++] = v0[i];
//		if (v0[i] > max)
//			max = v0[i];
//	}
//	cout << count << endl;
//	for (int j = 0;j < count;j++)
//	{
//		if (j == 0)
//			cout << v[j];
//		else
//			cout << " " << v[j];
//	}
//	cout << endl;
//	return 0;
//}
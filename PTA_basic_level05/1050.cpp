#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
//本题思路复杂 参考柳神的算法写出的代码  注意动态容器的二维情况的使用
//注意外层循环和内层循环的巧妙运用
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int m,n,N,level;
	cin >> N;
	for (n = sqrt(N);n >= 1;n--)
	{
		if ((N % n) == 0)
		{
			m = N / n;
			break;
		}
	}
	vector<int> a(N);
	vector<vector<int>> v(m, vector<int>(n));
	for (int i = 0;i < N;i++)
		cin >> a[i];
	int t = 0;
	sort(a.begin(), a.end(), cmp);
	level = m / 2 + m % 2;

	for (int i = 0;i < level;i++)
	{
		for (int j = i;j < n - i&&t<N;j++)
			v[i][j] = a[t++];
		for (int j = i+1;j < m-i-1 && t<N;j++)
			v[j][n-i-1] = a[t++];
		for (int j = n-i-1;j >=i && t<N;j--)
			v[m-1-i][j] = a[t++];
		for (int j = m - i - 2;j > i&& t < N;j--)
			v[j][i] = a[t++];
	}
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << v[i][j];
			if (j != n - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
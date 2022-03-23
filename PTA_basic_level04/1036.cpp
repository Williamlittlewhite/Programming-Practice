#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//本题学会四舍五入 int(a+0.5)
//注意除法里不是除以浮点数会默认是整形数
int main()
{
	int N;
	char C;
	cin >> N >> C;
	int temp = N,temp1=N,temp2=N;
	int i;
	for (i = 1;i <= int(N/2.0+0.5);i++)
	{
		if (i == 1)
		{
			while (temp--)
			{
				cout << C;
			}
			cout << endl;
		}
		else if (i > 1 && i < int(N/2.0+0.5))
		{
			cout << C;
			temp2 = N;
			temp2 -= 2;
			while (temp2--)
			{
				cout << " ";
			}
			cout << C<<endl;
		}
		else if(i==int(N/2.0+0.5))
		{
			while (temp1--)
			{
				cout << C;
			}
		}
	}
	return 0;
}
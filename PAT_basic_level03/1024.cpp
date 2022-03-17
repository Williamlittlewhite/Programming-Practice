#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
//此题情况太多 不能按照笨办法做 
//考虑substr取出子字符串给出初始结尾位置即可
//stoi可以把字符串转变为数字03->3!!
using namespace std;
int main()
{
	string A,B,C;
	int i = 1,j=0,k=0;
	int sum = 0;
	cin >> A;
	if (A[0] == '-')
		cout << "-";
	while (A[i] != 'E')
		i++;
	B = A.substr(1, i - 1);
	C = A.substr(i + 1);
	int c = stoi(C);
	int n = abs(c);
	if (c < 0)
	{
		cout << "0.";
		n--;
		while(n--)
		{
			cout << "0";
		}
		while (j<B.length())
		{
			if (B[j] == '.')
			{
				j++;
				continue;
			}	
			cout << B[j++];
		}
	}
	else {
		cout << B[0];
		for (k = 2;k < B.length();k++)
		{
			if (k == 2 + n)
				cout << ".";
			cout << B[k];
		}
		int temp = (n - k) + 2;
		if (temp <= 0)
			;
		else {
			while (temp--)
			{
				cout << "0";
			}
		}
	}

	/*if (a[0] == '-')
		cout << "-";
	else
		;

	while (a[i]!='E')
		{
			i++;
		}
		i++;
		if (a[i] == '+')
		{
			i++;
			sum = (a[i] - '0') *10+ (a[i + 1] - '0');
			int n1 = sum;
			cout << a[1];
			while (sum--)
			{
				if (a[j] != 'E')
				{
					if (j == 3 + n1)
					{
						cout << ".";
						j++;
						continue;
					}
					cout << a[j++];
					
				}
				else
					cout << 0;
			}

		}
		else
		{
			i++;
			sum = (a[i]-'0') * 10 + (a[i + 1]-'0') - 1;
			cout << 0 << ".";
			while (sum--)
			{
				cout << 0;
			}
			cout << a[1];
			while (a[j] != 'E')
				cout << a[j++];
		}*/

	
	




	return 0;
}
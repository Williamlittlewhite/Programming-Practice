#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	string s;
	vector<string> v(200);
	v[0] = "tret";v[2] = "feb";v[4] = "apr";
	v[1] = "jan";v[3] = "mar";v[5] = "may";
	v[6] = "jun";v[7] = "jly";v[8] = "aug";
	v[9] = "sep";v[10] = "oct";v[11] = "nov";
	v[12] = "dec";
	v[13] = "tam";v[26] = "hel";v[39] = "maa";
	v[52] = "huh";v[65] = "tou";v[78] = "kes";
	v[91] = "hei";v[104] = "elo";v[117] = "syy";
	v[130] = "lok";v[143] = "mer";v[156] = "jou";
	scanf("%d",&N);
	getchar();//这个很重要
	while (N--)
	{
		getline(cin, s);
 		if (s[0] >= '0' && s[0] <= '9')
		{
			int temp = stoi(s);
			if (temp < 13)
				cout << v[temp]<<endl;
			else
				cout << v[temp / 13] << " " << v[temp % 13]<<endl;
		}
		else
		{
			if (s[3] != ' ')
			{
				int sum = 0;
				string s1 = s.substr(s[0], s[2]);
				string s2 = s.substr(s[3], s[5]);
				for (int j = 0;j < 160;j++)
				{
					if (v[j] == s1)
						sum += j;
				}
				for (int j = 0;j < 160;j++)
				{
					if (v[j] == s2)
						sum += j;
				}
				cout << sum << endl;
			}
			else
			{
				int sum = 0;
				for (int j = 0;j < 160;j++)
				{
					if (v[j] == s)
						sum += j;
				}
				cout << sum << endl;
			}
		}
	}


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string a, b;
	cin >> a;
	cin >> b;
	int count = 0,temp;
	bool flag=true;
	for (int i = 0;i < b.size();i++)
	{
		temp = int(a.find(b[i]));
		if (temp != -1)
			a.erase(a.begin() + temp);
		else
		{
			flag = false;
			count++;
		}

	}
	if (flag)
		cout << "Yes " << a.size();
	else
		cout << "No " << count;
	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
vector<int> v;
//本题比较简单 注意判断素数要注意1不是素数也不是合数的情况！
void convert(int N, int D)
{
	v.clear();
	while (N)
	{
		int temp = N % D;
		v.push_back(temp);
		N /= D;
	}
}
bool isprime(int N)
{
	if (N == 1)
		return false;
	for (int i = 2;i <= sqrt(N);i++)
	{
		if (N % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int input[10000], t = 0;
	scanf("%d", &input[t]);
	while (input[t] >= 0)
	{
		scanf("%d", &input[++t]);
	}
	for (int i = 0;i < t;i+=2)
	{
		convert(input[i], input[i + 1]);
		int InorderNumber = 0, ReverseNumber = 0;
		for (int j = 0;j < v.size();j++)
			ReverseNumber += v[j] * pow(input[i+1], j);
		int cnt = 0;
		for (int j = v.size() - 1;j >= 0;j--, cnt++)
			InorderNumber += v[j] * pow(input[i+1], cnt);

		if (isprime(InorderNumber) && isprime(ReverseNumber))
			printf("Yes\n");
		else
			printf("No\n");
	}
	
}
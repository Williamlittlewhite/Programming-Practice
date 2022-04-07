#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
//本题很简单！
struct Bet
{
	double W;
	double T;
	double L;
};

int main()
{
	vector<Bet> v;
	int temp1 = 3;
	while (temp1--)
	{
		Bet temp;
		scanf("%lf %lf %lf", &temp.W, &temp.T, &temp.L);
		v.push_back(temp);
	}
	double max1 = max(v[0].W, v[0].T);
	double newmax1 = max(v[0].L, max1);
	double max2 = max(v[1].W, v[1].T);
	double newmax2 = max(v[1].L, max2);
	double max3 = max(v[2].W, v[2].T);
	double newmax3 = max(v[2].L, max3);

	if (newmax1 == v[0].W)
		printf("W");
	else if (newmax1 == v[0].T)
		printf("T");
	else if (newmax1 == v[0].L)
		printf("L");

	if (newmax2 == v[1].W)
		printf(" W");
	else if (newmax2 == v[1].T)
		printf(" T");
	else if (newmax2 == v[1].L)
		printf(" L");

	if (newmax3 == v[2].W)
		printf(" W");
	else if (newmax3 == v[2].T)
		printf(" T");
	else if (newmax3 == v[2].L)
		printf(" L");

	double profit = (newmax1 * newmax2 * newmax3 * 0.65 - 1) * 2;
	printf(" %.2f", profit);
}
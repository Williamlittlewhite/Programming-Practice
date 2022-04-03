#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
//贪心算法求最大子列和 注意输入必须放入求最大子列之中否则会超出时间
//注意一定要给变量赋初值 就算后续不需要也要赋初值 否则容易发生段错误
//printf 和scanf永远比cin cout更高效
int main()
{
	int K;
	scanf("%d", &K);
	vector<int> v(K);
	//while (K--)
	//{
	//	int temp;
	//	scanf("%d",&temp);
	//	v.push_back(temp);
	//}

	int sum = 0,maxsum=-1,leftindex=0,rightindex=K-1,tempindex=0;
	for (int i = 0;i < K;i++)
	{
		scanf("%d", &v[i]);
		sum += v[i];
		if (sum > maxsum)
		{
			maxsum = sum;
			leftindex = tempindex;
			rightindex = i;
		}
		if (sum < 0)
		{
			sum = 0;
			tempindex = i + 1;
		}
	}
	if (maxsum < 0)maxsum = 0;
	/*cout << maxsum << " " << v[leftindex] << " " << v[rightindex]*/;
	printf("%d %d %d", maxsum, v[leftindex], v[rightindex]);
	return 0;
}
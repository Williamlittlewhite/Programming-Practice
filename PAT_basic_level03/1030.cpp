#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
//本题自己的做法虽然正确 注意定义成long int否则有可能超出范围,注意下面那个简单的方法，用数组的形式解决
//int main()
//{
//	long int N, p,n;
//	cin >> N >> p;
//	vector<int> v;
//	while (N--)
//	{
//		cin >> n;
//		v.push_back(n);
//	}
//	sort(v.begin(), v.end());
//	int m, M,count,temp=0;
//	long int bound;
//	for (int i = 0;i < v.size();i++)
//	{
//		count = 0;
//		m = v[i];
//		bound = m * p;
//		for (int j = i;j < v.size();j++)
//		{
//			if (v[j] <= bound)
//				count++;
//			else
//				break;
//		}
//		if (count > temp)
//			temp = count;
//	}
//	cout << temp;
//	return 0;
//}

//优化双层循环方法，全部通过测试点
#include <cstdio>
#include <algorithm>
#define MAXN 100001
using namespace std;
int main()
{
	int n;
	long p;
	scanf("%d%ld", &n, &p);
	long a[MAXN];
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}
	sort(a, a + n);//升序排序
	int max_coun = 1;//完美数列最多元素个数，至少1个
	for (int i = 0; i < n; i++) {
		for (int j = i + max_coun; j < n; j++) {//最大值从最小值位置加上当前完美数列最多元素个数处开始即可
			if (a[j] <= a[i] * p) {//满足完美数列
				max_coun = j - i + 1;//更新最多元素个数
			}
			else {//不满足直接跳出循环，j再往后，最大值会更大，更不会满足
				break;
			}
		}
	}
	printf("%d", max_coun);
	return 0;
}

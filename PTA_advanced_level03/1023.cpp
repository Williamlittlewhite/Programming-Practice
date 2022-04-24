//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<map>
//#include<set>
//#include<string>
//#include<algorithm>
//#include<cstring>
//using namespace std;//这句一定放在包含头文件后的第一句话！！
////本题学会利用flag完成字符串的乘法进位操作，学会利用标志数组储存是否是循环的状态，即利用索引表示各位情况，
////注意输出printf("%s",c)可以直接把字符数组一次性输出而不需要一个一个输出！
//int main()
//{
//	char c[20];
//	int mark[10]={0};
//	scanf("%s", c);
//	int flag = 0;
//	int length = strlen(c);
//	for (int i = length - 1;i >= 0;i--)
//	{
//		int temp = c[i] - '0';
//		mark[temp]++;
//		temp =temp*2+flag;
//		flag = 0;
//		if (temp > 9)
//		{
//			temp = temp - 10;
//			flag = 1;
//		}
//		mark[temp]--;
//		c[i] = '0' + temp;
//	}
//
//	int flag1 = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		if (mark[i] != 0)
//			flag1 = 1;
//	}
//	printf("%s", (flag == 1 || flag1 == 1) ? "No\n" : "Yes\n");
//	if (flag == 1) printf("1");
//	printf("%s", c);
//	
//
//
//
//	return 0;
//}
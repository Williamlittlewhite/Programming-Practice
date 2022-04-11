//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
////本题参考柳神思路 
////首先我们对每个窗口当做一个队列结构体，除了用队列记录其中加入的每个人的服务时间 还要用
////队列记录该队列最早出列的时间 和最晚结束交易的时间
////按照输入进行编程
////前M*N个人 外环用M个人内环用N个窗口，分别按将人安排至每个窗口，同时更新队列(Node)的属性
////为1时候队列仅有一个人 此时最早出列时间和最晚交易时间保持一致,判断最晚出列时间是否》540
////大于表示已经无法完成 标记为false result记录每个人的队列最晚出列世界
//
////对后面的K-M*N个，首先找出所有窗口中最早出列的时间及序号，将其出列，然后增加新的人进入
////从而进一步改变队列的所有属性，并记录该人的最晚出列时间
//
////根据result数组和bool数组记录其中每个人的最晚出列时间进行输出
//typedef struct Node {
//	int poptime = 0;
//	int endtime = 0;
//	queue<int> q;
//}node;
//
//int main()
//{
//	int N, M, K, Q, Processing[1001],index=1,result[1001];
//	scanf("%d %d %d %d", &N, &M, &K, &Q);
//	for (int i = 1;i <= K;i++)
//		scanf("%d", &Processing[i]);
//	vector<node> window(N + 1);
//	vector<bool> delay(K + 1, false);
//	for (int i = 1;i <= M;i++)
//	{
//		for (int j = 1;j <= N;j++)
//		{
//			if (index <= K)
//			{
//				window[j].q.push(Processing[index]);
//				if (window[j].endtime >= 540)      //这里一定要先判断是否超时 否则会漏失一部分情况
//					delay[index] = true;
//				window[j].endtime += Processing[index];
//				
//				if (i == 1)
//					window[j].poptime = window[j].endtime;
//				result[index] = window[j].endtime;
//				index++;
//			}
//		}
//	}
//	
//	while (index<=K)
//	{
//		int tempmin = window[1].poptime;
//		int tempnumber = 1;
//		for (int i = 2;i <= N;i++)
//		{
//			if (tempmin > window[i].poptime)
//			{
//				tempnumber = i;
//				tempmin = window[i].poptime;
//			}
//		}
//		window[tempnumber].q.pop();
//		window[tempnumber].q.push(Processing[index]);
//		window[tempnumber].poptime += window[tempnumber].q.front();
//		if (window[tempnumber].endtime >= 540)
//			delay[index] = true;
//		window[tempnumber].endtime += Processing[index];
//		result[index] = window[tempnumber].endtime;
//		index++;
//	}
//	int query[1001];
//	for (int i = 1;i <= Q;i++)
//	{
//		scanf("%d", &query[i]);
//	}
//	for (int j = 1;j <= Q;j++)
//	{
//		int  minute;
//		minute = result[query[j]];
//		if (delay[query[j]] == true)
//			printf("Sorry\n");
//		else
//			printf("%02d:%02d\n", (minute + 480) / 60, (minute + 480) % 60);
//	}
//	
//	return 0;
//}
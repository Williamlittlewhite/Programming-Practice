#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
//本题利用桌子和人分开建模的思想，然后对人来说首先根据顾客到来的时候进行排序；对桌子来说开始的空闲时间都记作
//8.00，用一个bool矩阵记录是否每个人被安排过，用minT和table寻找到最早没人的桌子的时间和索引，如果时间超过了21.00
//不在服务，否则就对桌子根据是否比人空闲时间早晚以及vip的特殊情况针对性处理，从而解决本题的算法！
struct player {
	int arrivetime;
	int servetime=-99999;
	int vipflag;
	int durtime;
};
bool cmp1(player& p1, player& p2) {
	return p1.arrivetime < p2.arrivetime;
}
bool cmp2(player& p1, player& p2) {
	return p1.servetime == p2.servetime ? p1.vipflag > p2.vipflag:p1.servetime < p2.servetime;
}

struct table {
	int time;
	int sum;
	int vip;
};
string display(int t) {
	int h = t / 3600;
	t %= 3600;
	int m = t / 60;
	t %= 60;
	char buffer[100];
	sprintf(buffer, "%02d:%02d:%02d", h, m, t);
	string s(buffer);
	return s;
}
int main()
{
	int N,K,M;
	scanf("%d\n", &N);
	vector<player> p;
	for (int i = 0;i < N;i++)
	{
		int h, m, s;
		player temp;
		scanf("%d:%d:%d %d %d\n", &h, &m, &s, &temp.durtime, &temp.vipflag);
		if (h<21) {
			int arrivetime = h * 3600 + m * 60 + s;
			temp.arrivetime = arrivetime;
			if(temp.durtime>120)
				temp.durtime = 120;
			temp.durtime *= 60;
			p.push_back(temp);
		}
	}
	N = p.size();
	sort(p.begin(), p.end(), cmp1);

	
	scanf("%d %d\n", &K, &M);
	vector<table> t(K);
	for (int i = 0;i < K;i++)
		t[i].time = 8 * 3600;

	for (int i = 0;i < M;i++)
	{
		int index;
		scanf("%d", &index);
		t[index-1].vip = 1;
	}

	vector<bool> served(N);
	for (int count = 0; count < N;count++) {
		int minT = t[0].time;
		int table = 0;
		//minT、table分别指示最早结束窗口的结束时间和标号
		for (int j = 1; j < K; j++) {
			if (t[j].time < minT)
			{
				minT = t[j].time;
				table = j;
			}
		}
		//下班了，不再服务
		if (minT >= 21 * 3600) {
			break;
		}
		//找第一个顾客
		int i = 0;
		while (i < N && served[i])
		{
			i++;
		}
		//有空闲桌子
		if (minT <= p[i].arrivetime) {
			for (int j = 0;j < K;j++)
			{
				if (t[j].time <= p[i].arrivetime) {
					table = j;
					break;
				}
				//取第一个空闲桌子
			}
			//若是vip，若后面有空闲vip桌，取第一个空闲vip桌
			if (p[i].vipflag == 1) {
				for (int j = table;j < K;j++) {
					if (t[j].time <= p[i].arrivetime && t[j].vip == 1)
					{
						table = j;
						break;
					}
				}
			}

		}
		//没有空闲桌子，且第一个空出的桌子是vip桌子
		else if (t[table].vip == 1)
		{
			for (int j = i;j < N&&p[j].arrivetime<=minT;j++)
			{
				if(p[j].vipflag==1&&!served[j])
				{
					i = j;
					break;
				}
			}
		}


		served[i] = true;
		p[i].servetime = p[i].arrivetime < minT ? minT : p[i].arrivetime;
		t[table].time = p[i].servetime + p[i].durtime;
		t[table].sum++;
	}
	sort(p.begin(), p.end(), cmp2);
	for (int i = 0;i < N;i++) {
		if (p[i].servetime != 0&&p[i].servetime>0) {
			int wait = (p[i].servetime - p[i].arrivetime + 30) / 60;
			cout << display(p[i].arrivetime) << " " << display(p[i].servetime) << " " << wait << endl;
		}
	}
	cout << t[0].sum;
	for (int i = 1;i < K;i++) {
		cout << " "<< t[i].sum;
	}
	cout << endl;
	return 0;
}
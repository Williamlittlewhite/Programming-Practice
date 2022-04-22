#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;//这句一定放在包含头文件后的第一句话！！
int N;
struct book
{
	int ID;
	string title;
	string author;
	string keywords;
	string publisher;
	int year;
}book[10001];

int main()
{
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &book[i].ID);
		char ch = getchar();
		getline(cin, book[i].title);
		getline(cin, book[i].author);
		getline(cin, book[i].keywords);
		getline(cin, book[i].publisher);
		scanf("%d", &book[i].year);
	}
	int c = 3;

	return 0;
}
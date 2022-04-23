//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<map>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;//这句一定放在包含头文件后的第一句话！！
////本题注意难点是利用map的特性，类似于python中的字典来存储，同时set集合具有自动排序的功能，可以简化排序这一步骤
////map.find如果没找到会返回map.end的迭代器,这种判断是否能找到相应的元素
////如果一行输入多个单词 学会利用while(cin>>string) getchar()!="\n"的结构使得所有的单词都放入到容器当中
////getline可以指定读取数，不指定时候读取到回车结束，注意前面回车符一定要处理掉才可以用，最大的好处就是可以空格当成一部分字符串
//int N,M,id,number;
//string ttitle, tauthor, tkeywords, tpub, tyear,temp;
//map<string, set<int>> title, author, keywords, pub, year;
//void query(map<string, set<int>>& m, string& s)
//{
//	if (m.find(s) != m.end())
//	{
//		for (auto it = m[s].begin();it != m[s].end();it++)
//			printf("%07d\n", *it);
//	}
//	else
//		printf("Not Found\n");
//}
//
//
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0;i < N;i++)
//	{
//		scanf("%d\n", &id);
//		getline(cin, ttitle);
//		title[ttitle].insert(id);
//		getline(cin, tauthor);
//		author[tauthor].insert(id);
//		while (cin>>tkeywords)
//		{
//			char c = getchar();
//			keywords[tkeywords].insert(id);
//			if (c == '\n')
//				break;
//		}
//		getline(cin, tpub);
//		pub[tpub].insert(id);
//		getline(cin, tyear);
//		year[tyear].insert(id);
//	}
//	
//	scanf("%d", &M);
//	vector<string> v;
//	vector<int> v1;
//	for (int i = 0;i < M;i++)
//	{
//		scanf("%d: ", &number);
//		getline(cin, temp);
//		v.push_back(temp);
//		v1.push_back(number);
//	}
//
//
//	for (int i = 0;i < v.size();i++)
//	{
//		temp = v[i];
//		number = v1[i];
//		cout << number << ": " << temp << endl;
//		if (number == 1) query(title, temp);
//		else if (number == 2) query(author, temp);
//		else if (number == 3) query(keywords, temp);
//		else if (number == 4) query(pub, temp);
//		else if (number == 5) query(year, temp);
//	}
//	return 0;
//}
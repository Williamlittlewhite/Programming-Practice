//#include <iostream>
//#include<string>
////本题难点在于用string如何退出循环 采用一个getchar进行判断即可
////最好只用一次cin要不会发生符号错误等意料之外的错误
//using namespace std;
//int main()
//{
//	int i = 0,j;
//	char ch='a';
//	string a;
//	string v[200];
//
//	while (cin >> v[i++])
//	{
//		ch = getchar();
//		if (ch == '\n')
//			break;
//	}
//	for (j = i - 1;j >= 0;j--)
//		if (j != 0)
//			cout << v[j] << " ";
//		else
//			cout << v[j];
//	return 0;
//}
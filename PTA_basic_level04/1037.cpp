//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////class Money 自己写的 分类不全 懒得细分 参考柳神代码书写 如果是负数先交换 然后加负号即可
////{
////public:
////	long long Galleon;
////	int Sickle;
////	int Knut;
////};
////Money& Caculate(Money& m1, Money& m2)
////{
////	static Money m3;
////	if (m2.Knut > m1.Knut)
////	{
////		m3.Knut = m2.Knut - m1.Knut;
////		if (m2.Sickle > m1.Sickle)
////		{
////			m3.Sickle = m2.Sickle - m1.Sickle;
////			m3.Galleon = m2.Galleon - m1.Galleon;
////		}
////		else
////		{
////			m3.Sickle = m2.Sickle + 17 - m1.Sickle;
////			m3.Galleon = m2.Galleon - 1 - m1.Galleon;
////		}
////	}
////	else
////	{
////		m3.Knut = m1.Knut - m2.Knut;
////		if (m1.Sickle > m2.Sickle)
////		{
////			m3.Sickle = m1.Sickle - m2.Sickle;
////			m3.Galleon = m1.Galleon - m2.Galleon;
////		}
////		else
////		{
////			m3.Sickle = m1.Sickle + 17 - m2.Sickle;
////			m3.Galleon = -(m1.Galleon - 1 - m2.Galleon);
////		}
////
////	}
////	return m3;
////}
////int main()
////{
////	vector<Money> v(2);
////	Money m1;
////	scanf("%lld.%d.%d", &m1.Galleon, &m1.Sickle, &m1.Knut);
////	Money m2;
////	scanf("%lld.%d.%d", &m2.Galleon, &m2.Sickle, &m2.Knut);
////	cout << Caculate(m1, m2).Galleon << "." << Caculate(m1, m2).Sickle << "." << Caculate(m1, m2).Knut;
////}
//int main()
//{
//	int a, b, c, m, n, o, x, y, z;
//	scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &m, &n, &o);
//	if (a > m || (a == m && b > n) || (a == m && b == n && c > o))
//	{
//		swap(a, m);swap(b, n);swap(c, o);
//		printf("-");
//	}
//
//	//z = c < o ? o - c: o + 29 - c;
//	//n = c < o ? n  : n - 1;
//	//y = b < n ? n-b : n + 17 - b;
//	//x = b < n ? m - a : m - a - 1;
//	z = o < c ? o - c + 29 : o - c;
//	n = o < c ? n - 1 : n;
//	y = n < b ? n - b + 17 : n - b;
//	x = n < b ? m - a - 1 : m - a;
//
//	printf("%d.%d.%d",x,y,z);
//	return 0;
//}
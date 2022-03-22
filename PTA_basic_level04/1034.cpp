//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////自己想的比较复杂 测试点3不知道为什么通过不了 放弃了 参考柳神写
////本题难点在于如何找两个数最大公约数 gcd(a,b) return b==0?a:gcd(b,a%b);
////注意范围要使用long long int否则会有测试点过不去
//int gcd(long long a, long long b)
//{
//	return b == 0 ? a: gcd(b, a % b);
//}
//void fun(long m, long n)
//{
//	if (m * n == 0)
//	{
//		if (n == 0)
//			cout << "Inf";
//		else
//			cout << "0";
//	}
//	else
//	{
//		bool flag = (m < 0 && n>0) || (m > 0 && n < 0);
//		m = abs(m);n = abs(n);
//		long long x = m / n;
//	/*	if (flag)
//		{
//			
//			int temp = gcd(m - (m / n) * n, n);
//			if(m/n!=0)
//				cout << "(-" << m / n << " " << (m - (m / n)*n)/temp<<"/"<<n/temp<<")";
//			else
//				cout << "(-" << (m - (m / n) * n) / temp << "/" << n / temp << ")";
//		}
//		else
//		{
//			int temp = gcd(m - (m / n) * n, n);
//			if (m / n != 0)
//				cout << m / n << " " << (m - (m / n) * n) / temp << "/" << n / temp;
//			else
//				cout << (m - (m / n) * n) / temp << "/" << n / temp;
//		}*/
//		printf("%s", flag ? "(-": "");
//		if (x != 0) printf("%lld", x);
//		if (m % n == 0) {
//			if (flag) printf(")");
//			return;
//		}
//		if (x != 0) printf(" ");
//		long long t = gcd(m, n);
//		m = (m-x*n) / t;n = n / t;
//		printf("%lld/%lld%s", m, n, flag ? ")" : "");
//	}
//}
////class number
////{
////public:
////	int a;
////	int b;
////	number(int c=1,int d=1):a(c),b(d){}
////	
////	number& operator+(const number& n)
////	{
////		int temp1 = this->b;
////		this->b = this->b*n.b;
////		this->a = (this->a * n.b) + (temp1 * n.a);
////		return *this;
////	}
////	number& operator-(const number& n)
////	{
////		int temp1 = this->b;
////		this->b = this->b * n.b;
////		this->a = (this->a * n.b) - (temp1 * n.a);
////		return *this;
////	}
////	number& operator*(const number& n)
////	{
////		this->b = this->b * n.b;
////		this->a = this->a * n.a;
////		return *this;
////	}
////	number& operator/(const number& n)
////	{
////		if(n.a==0||n.b==0)
////		{
////			this->b = 0;
////		}
////		this->b = this->b * n.a;
////		this->a = this->a * n.b;
////		return *this;
////	}
////	number& operator=(const number& n)
////	{
////		this->b = n.b;
////		this->a = n.a;
////		return *this;
////	}
////};
////
////
////int main()
////{
////	number n1,n2,n3,n4,n5,n6,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,t1,t2;
////	scanf("%d/%d %d/%d", &n1.a, &n1.b, &n2.a, &n2.b);
////	temp1 = n1;temp2 = n2;temp3 = n1;temp4 = n2;temp5 = n1;temp6 = n2;
////	temp7 = n1; temp8 = n2;t1 = n1;t2 = n2;
////	n3 = n1 + n2;
////	n4 = temp1 - temp2;
////	n5 = temp3 * temp4;
////	n6 = temp5 / temp6;
////	fun(t1.a, t1.b);
////	cout << " + ";
////	fun(t2.a, t2.b);
////	cout << " = ";
////	fun(n3.a, n3.b);
////	cout << endl;
////	fun(t1.a, t1.b);
////	cout << " - ";
////	fun(t2.a, t2.b);
////	cout << " = ";
////	fun(n4.a, n4.b);
////	cout << endl;
////	fun(t1.a, t1.b);
////	cout << " * ";
////	fun(t2.a, t2.b);
////	cout << " = ";
////	fun(n5.a, n5.b);
////	cout << endl;
////	fun(t1.a, t1.b);
////	cout << " / ";
////	fun(t2.a, t2.b);
////	cout << " = ";
////	fun(n6.a, n6.b);
////	cout << endl;
////
////	return 0;
////}
//
//int main() {
//	long long int a, b, c, d;
//	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
//	fun(a, b); printf(" + "); fun(c, d); printf(" = "); fun(a * d + b * c, b * d); printf("\n");
//	fun(a, b); printf(" - "); fun(c, d); printf(" = "); fun(a * d - b * c, b * d); printf("\n");
//	fun(a, b); printf(" * "); fun(c, d); printf(" = "); fun(a * c, b * d); printf("\n");
//	fun(a, b); printf(" / "); fun(c, d); printf(" = "); fun(a * d, b * c);
//	return 0;
//}

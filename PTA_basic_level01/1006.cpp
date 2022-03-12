//#include<iostream>
//#include<stack>
//using namespace std;
////本题没有难点 注意逆序输出使用堆栈stack就行啦
//int main()
//{
//	int N,n;
//	stack<int> a;
//	stack<char> b,c;
//	cin >> N;
//	n = N % 10;
//	while (n!=0)
//	{
//		a.push(n);
//		n--;
//	} 
//	N /= 10;
//	n = N % 10;
//	while (n != 0)
//	{
//		b.push('S');
//		n--;
//	}
//	N /= 10;
//	n = N % 10;
//	while (n != 0)
//	{
//		b.push('B');
//		n--;
//	}
//	while (!c.empty())
//	{
//		cout << c.top();
//		c.pop();
//	}
//	while (!b.empty())
//	{
//		cout << b.top();
//		b.pop();
//	}
//	while (!a.empty())
//	{
//		cout << a.top();
//		a.pop();
//	}
//
//}
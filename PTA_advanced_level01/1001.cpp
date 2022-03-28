#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<stack>
#include<math.h>
#include<string>
using namespace std;
//数字想法有几个测试点难以通过 参考柳神使用Str方式即可 注意s.size%3==(i+1)%3的巧妙处理方法
int main()
{
	long long int a, b;
	/*stack<int> s;*/
	cin >> a >> b;
	long long int output = a + b;
	/*long long int temp = output;
	output = abs(output);
	while (output!=0)
	{
		s.push(output % 1000);
		output /= 1000;
	}
	if (temp < 0)
		cout << "-";
	while (!s.empty())
	{
		printf("%03d", s.top());
		s.pop();
		if(!s.empty())
			cout << ",";
	}*/
	string s = to_string(output);
	for (int i = 0;i < s.size();i++)
	{
		cout << s[i];
		if (s[i] == '-')
			continue;
		if ((i+1) % 3 == s.size()%3 && i != s.size() - 1)
			cout << ",";
	}
	return 0;
}

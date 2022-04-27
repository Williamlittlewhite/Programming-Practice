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
//本题要定义string相加否则会运行时错误越界！
//string& reverse(string& temp)
//{
//	reverse(temp.begin(), temp.end());
//	return temp;
//}
//int main()
//{
//	string N;
//	int K;
//	cin >> N >> K;
//	int step = 0;
//	unsigned long long int n = stoi(N);
//	unsigned long long int temp;
//	for (int i = 1;i <= K;i++)
//	{
//		N = reverse(N);	
//		temp = stoi(N);
//		if (temp == n)
//			break;
//		else
//		{
//			temp = temp + n;
//			N = std::to_string(temp);
//			n = temp;
//			step += 1;
//		}
//
//	}
//	cout << temp<<endl<< step;
//	
//}
string s;
//学会利用反进位然后颠倒求和也是可以的也就是从最高位相加，依次加到最低位最后进位在最低位补1再反转后也是
//正常进位的正确答案，这个非常机智！
//特别大的数要用字符串处理，而字符串求和如上注释所说的技巧必须学会，还要注意引入进位标志也很重要的！
void add(string t) {
	int len = s.length(), carry = 0;
	for (int i = 0;i < len;i++) {
		s[i] = s[i] + t[i] + carry-'0';
		carry = 0;
		if (s[i] > '9') {
			s[i] = s[i] - 10;
			carry = 1;
		}
	}
	if (carry) s += '1';
	reverse(s.begin(), s.end());
}

int main() {
	int cnt, i;
	cin >> s >> cnt;
	for (i = 0;i <= cnt;i++) {
		string t = s;
		reverse(t.begin(), t.end());
		if (s == t || i == cnt)break;
		add(t);
	}

	cout << s << endl << i;
	return 0;

}


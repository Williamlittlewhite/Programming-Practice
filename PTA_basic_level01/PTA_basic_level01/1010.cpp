#define _CRT_SECURE_NO_DEPRECATE
#include<cstdio>
#include<iostream>
using namespace std;
class Item
{
public:
	int Coef;
	int Exef;
	Item(int& a, int& b)
	{
		Coef = a;
		Exef = b;
	};
	void Caculate()
	{
		this->Coef = this->Coef * this->Exef;
		this->Exef = this->Exef - 1;
		
	}

};
int main()
{
	int a, b=2;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		if (b == 0)
			break;
		Item c(a, b);
		c.Caculate();
		cout << c.Coef << " " << c.Exef << " ";
	}

	return 0;
}
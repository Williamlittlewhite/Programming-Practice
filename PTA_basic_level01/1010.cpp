#define _CRT_SECURE_NO_DEPRECATE
#include<cstdio>
#include<iostream>
using namespace std;
//本题注意-2 0这一个没有输出 也就是系数不为0 指数为0的时候不进行输出
//注意0多项式输出 0 0 题中所述“注意“零多项式”的指数和系数都是 0，但是表示为 0 0”的含义是，如果输入只有常数项，求导后的结果只有0 0，那么称这个多项式为零多项式，需要输出
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
		static int isprint = 0;
		if (this->Coef != 0 && this->Exef==0)
			;
		else
		{
			this->Coef = this->Coef * this->Exef;
			this->Exef = this->Exef - 1;
			if (this->Coef == 0);
			else
			{
				if (isprint != 0)
					printf(" ");
				cout <<this->Coef<< " "<<this->Exef ;
					isprint++;
			}
				
		}
	
	}
};
int main()
{
	int a, b,k=0;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		k++;
		Item c(a, b);
		c.Caculate();	
	}
	if (k == 1 && b == 0)
		printf("0 0");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//本题难点在于 DAY HH:MM  HH用06输出 MM08输出 注意到这一点就容易了以下为简单做法
//if (a1[i] == a2[i] && b == 0 && a1[i] >= 'A' && a1[i] <= 'G')
//{
//	day = a1[i] - 'A' + 1;
//	b = 1;
//}
//else if (a1[i] == a2[i] && b == 1)
//{
//	if (a1[i] >= 'A' && a1[i] <= 'N')
//	{
//		hh = a1[i] - 'A' + 10;
//		break;
//	}
//	if (a1[i] >= '0' && a1[i] <= '9')
//	{
//		hh = a1[i] - '0';
//		break;
//	}
//}
//————————————————
//版权声明：本文为CSDN博主「邂逅模拟卷」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/qq_34451909/article/details/104689257
int main()
{
	string a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	int i = 0, j = 0,flag=1;
	int length1, length2;
	if (a.length() > b.length())
		length1 = b.length();
	else
		length1 = a.length();
	for (i = 0;i < length1;i++)
	{
		if (a[i] == b[i]&&flag==1&&a[i]>='A'&&a[i]<='G')
		{
				
				switch (a[i])
				{
				case 'A':
					cout << "MON" << " ";
					flag = 2;
					break;
				case 'B':
					cout << "TUE" << " ";
					flag = 2;
					break;
				case 'C':
					cout << "WED" << " ";
					flag = 2;
					break;
				case 'D':
					cout << "THU" << " ";
					flag = 2;
					break;
				case 'E':
					cout << "FRI" << " ";
					flag = 2;
					break;
				case 'F':
					cout << "SAT" << " ";
					flag = 2;
					break;
				case 'G':
					cout << "SUN" << " ";
					flag = 2;
					break;
				default:
					break;
				}	
				
				continue;
		}
		
		else if(a[i]==b[i]&&flag==2&& ((a[i] >= 'A' && a[i] <= 'N')|| (a[i] >= '0' && a[i] <= '9')))
		{
				switch (a[i])
				{
				case '0':
					cout << "00" << ":";
					break;
				case '1':
					cout << "01" << ":";
					break;
				case '2':
					cout << "02" << ":";
					break;
				case '3':
					cout << "03" << ":";
					break;
				case '4':
					cout << "04" << ":";
					break;
				case '5':
					cout << "05" << ":";
					break;
				case '6':
					cout << "06" << ":";
					break;
				case '7':
					cout << "07" << ":";
					break;
				case '8':
					cout << "08" << ":";
					break;
				case '9':
					cout << "09" << ":";
					break;
				case 'A':
					cout << "10" << ":";
					break;
				case 'B':
					cout << "11" << ":";
					break;
				case 'C':
					cout << "12" << ":";
					break;
				case 'D':
					cout << "13" << ":";
					break;
				case 'E':
					cout << "14" << ":";
					break;
				case 'F':
					cout << "15" << ":";
					break;
				case 'G':
					cout << "16" << ":";
					break;
				case 'H':
					cout << "17" << ":";
					break;
				case 'I':
					cout << "18" << ":";
					break;
				case 'J':
					cout << "19" << ":";
					break;
				case 'K':
					cout << "20" << ":";
					break;
				case 'L':
					cout << "21" << ":";
					break;
				case 'M':
					cout << "22" << ":";
					break;
				case 'N':
					cout << "23" << ":";
					break;

				default:
					break;
				}
		break;
		}

	}
	
	if (c.length() > d.length())
		length2 = d.length();
	else
		length2 = c.length();
	for (i = 0;i < length2;i++)
	{
		if (c[i] == d[i] && ((c[i] <= 'z' && c[i]>='a')|| (c[i] <= 'Z' && c[i]>='A')))
		{
			if (i < 10)
				cout << 0 << i;
			else
				cout << i;
		}
	}

	return 0;
}
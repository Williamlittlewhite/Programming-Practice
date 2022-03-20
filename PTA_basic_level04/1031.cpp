//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//using namespace std;
////本题比较简单 容易AC 注意只检查前17位是否全是数字即可
//
//int main()
//{
//	int N,z, count = 0;
//	char M;
//	vector<string> v;
//	string id;
//	cin >> N;
//l1:	while (N--)
//	{
//		int sum = 0;
//		cin >> id;
//		for (int i = 0;i < id.size()-1;i++)
//		{
//			if (id[i] < '0' || id[i]>'9')
//			{
//				v.push_back(id);
//				count++;
//				goto l1;
//			}
//		}
//		sum = (id[0] - '0') * 7 + (id[1] - '0') * 9 + (id[2] - '0') * 10 + (id[3] - '0') * 5 + (id[4] - '0') * 8 + (id[5] - '0') * 4 + (id[6] - '0') * 2 + (id[7] - '0') * 1 + (id[8] - '0') * 6 + (id[9] - '0') * 3 + (id[10] - '0') * 7 + (id[11] - '0') * 9 + (id[12] - '0') * 10 + (id[13] - '0') * 5 + (id[14] - '0') * 8 + (id[15] - '0') * 4 + (id[16] - '0') * 2;
//		z = sum % 11;
//		switch (z)
//		{
//		case 0:
//			M = '1';
//			break;
//		case 1:
//			M = '0';
//			break;
//		case 2:
//			M = 'X';
//			break;
//		case 3:
//			M = '9';
//			break;
//		case 4:
//			M = '8';
//			break;
//		case 5:
//			M = '7';
//			break;
//		case 6:
//			M = '6';
//			break;
//		case 7:
//			M = '5';
//			break;
//		case 8:
//			M = '4';
//			break;
//		case 9:
//			M = '3';
//			break;
//		case 10:
//			M = '2';
//			break;
//		default:
//			M = 'Z';
//			break;
//		}
//		if (id[17] != M)
//		{
//			v.push_back(id);
//			count++;
//		}
//	}
//	if (count == 0)
//		cout << "All passed";
//	else
//	{
//		for (int i = 0;i < v.size();i++)
//			cout << v[i] << endl;
//	}
//	return 0;
//}
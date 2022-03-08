//#include <iostream>
//#include <math.h>
//#include<stack>
////这个题的关键在于数太大了不能用long表示 看成字符即可解决
//using namespace std;
//char represent[10][8] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
//int main()
//{
//
//	char n;
//	int sum = 0;
//	stack<int> S;
//	n = getchar();
//
//	while (n!='\n')
//	{
//		sum = sum + n- '0';
//		n = getchar();
//	}
//
//	while (sum)
//	{
//		S.push(sum % 10);
//		sum /= 10;
//	}
//	while (!S.empty())
//	{	
//		switch (S.top())
//		{
//		case 0: 
//			cout << "ling";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 1:
//			cout << "yi";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 2:
//			cout << "er";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 3:
//			cout << "san";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 4:
//			cout << "si";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 5:
//			cout << "wu";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 6:
//			cout << "liu";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 7:
//			cout << "qi";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 8:
//			cout << "ba";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		case 9:
//			cout << "jiu";
//			S.pop();
//			if (!S.empty())
//				cout << " ";
//			break;
//		}
//		sum /= 10;
//	}
//
//	return 0;
//}

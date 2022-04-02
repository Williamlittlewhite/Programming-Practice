#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
//本题很简单 学会stoi就可以了
class Person
{
public:
	string ID_number;
	string Sign_in_time;
	string Sign_out_time;
};
bool cmpin(Person a,Person b)
{
	string temp1 = a.Sign_in_time.substr(0, 2);
	string temp2 = a.Sign_in_time.substr(3, 2);
	string temp3 = a.Sign_in_time.substr(6, 2);
	string ttemp1 = b.Sign_in_time.substr(0, 2);
	string ttemp2 = b.Sign_in_time.substr(3, 2);
	string ttemp3 = b.Sign_in_time.substr(6, 2);
	if (stoi(temp1) != stoi(ttemp1))
		return stoi(temp1) > stoi(ttemp1);
	else if (stoi(temp1) == stoi(ttemp1) && stoi(temp2) != stoi(ttemp2))
		return stoi(temp2) > stoi(ttemp2);
	else if (stoi(temp1) == stoi(ttemp1) && stoi(temp2) == stoi(ttemp2) && stoi(temp3) != stoi(ttemp3))
		return stoi(temp3) > stoi(ttemp3);
}
bool cmpout(Person a, Person b)
{
	string temp1 = a.Sign_out_time.substr(0, 2);
	string temp2 = a.Sign_out_time.substr(3, 2);
	string temp3 = a.Sign_out_time.substr(6, 2);
	string ttemp1 = b.Sign_out_time.substr(0, 2);
	string ttemp2 = b.Sign_out_time.substr(3, 2);
	string ttemp3 = b.Sign_out_time.substr(6, 2);
	if (stoi(temp1) != stoi(ttemp1))
		return stoi(temp1) > stoi(ttemp1);
	else if (stoi(temp1) == stoi(ttemp1) && stoi(temp2) != stoi(ttemp2))
		return stoi(temp2) > stoi(ttemp2);
	else if (stoi(temp1) == stoi(ttemp1) && stoi(temp2) == stoi(ttemp2) && stoi(temp3) != stoi(ttemp3))
		return stoi(temp3) > stoi(ttemp3);
}

int main()
{
	int M;
	cin >> M;
	vector<Person> v,v1;
	while (M--)
	{
		Person p;
		cin >> p.ID_number >> p.Sign_in_time >> p.Sign_out_time;
		v.push_back(p);
		v1.push_back(p);
	}
	sort(v.begin(), v.end(), cmpin);
	sort(v1.begin(), v1.end(), cmpout);

	cout << v[v.size()-1].ID_number << " " << v1[0].ID_number;

	return 0;
}
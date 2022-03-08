#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Student
{
public:
	Student(string& a, string& b, int& c)
	{
		StudentNumber = b;
		StudentName = a;
		Grade = c;
	}
	bool operator <(Student& s) { return this->Grade < s.Grade; }

	string StudentNumber;
	string StudentName;
	int Grade;

};

int main()
{
	int n;
	cin>>n;
	int length = n;
	vector<Student> v;
	string a, b;
	int c;
	while (n--)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		Student e(a, b, c);
		v.push_back(e);
	}
	sort(v.begin(), v.end());
	cout << v[length - 1].StudentName<< " " << v[length - 1].StudentNumber << endl;
	cout << v[0].StudentName << " " << v[0].StudentNumber << endl;
}
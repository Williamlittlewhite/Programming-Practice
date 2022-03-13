#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Candidate
{
public:
	string StudentNumber;
	int MoralGrade;
	int IntelligenceGrade;

};
bool cmp1(Candidate& a,Candidate& b)
{
	return (a.IntelligenceGrade + a.MoralGrade) > (b.IntelligenceGrade + b.MoralGrade);
}

int main()
{
	int N, L, H,i=0;
	vector<Candidate> v,v1,v2,v3,v4;
	Candidate s;
	scanf("%d %d %d", &N, &L, &H);
	while (N--)
	{
		cin>>s.StudentNumber>>s.MoralGrade>>s.IntelligenceGrade;
		v.push_back(s);
		i++;
	}


	for (i = 0;i < v.size();i++)
	{
		if (v[i].MoralGrade >= H && v[i].IntelligenceGrade >= H)
		{
			v1.push_back(v[i]);
			continue;
		}

		else if (v[i].MoralGrade >= H && v[i].IntelligenceGrade < H&&v[i].MoralGrade > L && v[i].IntelligenceGrade > L)
		{
			v2.push_back(v[i]);
			continue;
		}

		else if (v[i].MoralGrade < H && v[i].IntelligenceGrade < H&& v[i].MoralGrade>=v[i].IntelligenceGrade&& v[i].MoralGrade > L && v[i].IntelligenceGrade > L)
		{
			v3.push_back (v[i]);
			continue;
		}

		else 
		{
			if ((v[i].MoralGrade > L && v[i].IntelligenceGrade > L))
			{
				v4.push_back(v[i]);
				continue;
			}
		}
	}
	sort(v1.begin(), v1.end(), cmp1);
	sort(v2.begin(), v2.end(), cmp1);
	sort(v3.begin(), v3.end(), cmp1);
	sort(v4.begin(), v4.end(), cmp1);
	cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
	for (int i = 0;i < v1.size();i++)
		cout << v1[i].StudentNumber << " " << v1[i].MoralGrade << " " << v1[i].IntelligenceGrade<<endl;
	for (int i = 0;i < v2.size();i++)
		cout << v2[i].StudentNumber << " " << v2[i].MoralGrade << " " << v2[i].IntelligenceGrade<<endl;
	for (int i = 0;i < v3.size();i++)
		cout << v3[i].StudentNumber << " " << v3[i].MoralGrade << " " << v3[i].IntelligenceGrade << endl;
	for (int i = 0;i < v4.size();i++)
		cout << v4[i].StudentNumber << " " << v4[i].MoralGrade << " " << v4[i].IntelligenceGrade << endl;

	return 0;
}


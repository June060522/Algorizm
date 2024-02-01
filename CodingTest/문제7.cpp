#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
	int w;
	int h;
	int idx;
};

bool compare(const Student& p,const Student& p1)
{
	if (p.h == p1.h)
		return p.w > p1.w;
	else
		return p.h < p1.h;
}

int main()
{
	vector<Student> v;

	int n,a,b;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		Student s;
		s.h = a;
		s.w = b;
		s.idx = i;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].h << " " << v[i].w << " " << v[i].idx << '\n';
	}
}
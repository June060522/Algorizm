#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class member
{
public:
	string name;
	int age;
};

bool compare(member& a, member& b)
{
	return a.age > b.age;
}

int main()
{
	vector<member>vt2{ {"����Ĵ�",8},{"��ī��",8} ,{"�Ḹ��",10} };
	sort(vt2.begin(), vt2.end(), compare);
	for (auto i : vt2)
		cout << i.name << " ";
}
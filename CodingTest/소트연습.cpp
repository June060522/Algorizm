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
	vector<member>vt2{ {"고라파덕",8},{"피카츄",8} ,{"잠만보",10} };
	sort(vt2.begin(), vt2.end(), compare);
	for (auto i : vt2)
		cout << i.name << " ";
}
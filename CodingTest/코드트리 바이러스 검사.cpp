#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	long long m, o, p;
	long long input;
	long long answer = 0;
	vector<long long> peoples;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> input;
		peoples.push_back(input);
	}
	cin >> o >> p;
	for (int i = 0; i < m; i++)
	{
		answer += 1;
		peoples[i] -= o;
		if(peoples[i] > 0)
			answer += ceil((double)peoples[i] / p);
	}
	cout << answer;
}
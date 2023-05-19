#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cout << fixed;
	cout.precision(6);
	priority_queue<double,vector<double>,greater<double>> q;
	int repeat;
	cin >> repeat;
	double input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		q.push(input);
	}
	while (q.size() > 1)
	{
		double temp = q.top();
		q.pop();
		double temp2 = q.top();
		q.pop();
		q.push((temp + temp2) / 2);
	}

	cout << q.top();
}
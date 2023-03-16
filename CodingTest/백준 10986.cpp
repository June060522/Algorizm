#include <iostream>
#include <vector>

using namespace std;

long long num, sum, answer = 0;
vector<long long> numarr;
void basic();
int main()
{
	cin >> num >> sum;
	numarr.assign(sum,0);
	long long tmp,cnt = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		cnt += tmp;
		numarr[cnt % sum]++;
		if (cnt % sum == 0)
			answer++;
	}
	for (int i = 0; i < sum; i++)
	{
		if (numarr[i] >= 2) 
			answer += numarr[i] * (numarr[i] - 1) / 2;
	}

	cout << answer;
}

void basic()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

}
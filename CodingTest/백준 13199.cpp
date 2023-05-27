#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int price, money, need, cupon,savecupon,answer, save;
	cin >> repeat;
	for (int i = 0; i < repeat; i++) 
	{
		answer = 0;
		cin >> price >> money >> need >> cupon;
		int sangun = (money / price) + ((money / price) * cupon) / need;
		int doyoung = (money / price);
		save = (money / price) * cupon;
		if (save >= need)
			doyoung += (save - need) / (need - cupon) + 1;
		cout << doyoung - sangun << '\n';
	}
}
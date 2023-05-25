//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//	int repeat = 0;
//	int price, money, need, cupon,savecupon,answer, save;
//	cin >> repeat;
//	for (int i = 0; i < repeat; i++) 
//	{
//		answer = 0;
//		cin >> price >> money >> need >> cupon;
//		money /= price;// 시킬수 있는 치킨
//		save = cupon * money;// 생기는 쿠폰 수
//		savecupon = save % need;//상언이와 두영이가 같이 쓰는 쿠폰
//		save = save / need * cupon + savecupon;// 남은 쿠폰
//
//		while (save / need > 0)// 상언이가 치킨을 더 시킬 수 있을 동안
//		{
//			answer += save / need;// 치킨을 시키고
//			save = save % need + cupon * save / need;// 쿠폰 받기
//		}
//		cout << answer << '\n';
//	}
//}
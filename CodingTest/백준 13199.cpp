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
//		money /= price;// ��ų�� �ִ� ġŲ
//		save = cupon * money;// ����� ���� ��
//		savecupon = save % need;//����̿� �ο��̰� ���� ���� ����
//		save = save / need * cupon + savecupon;// ���� ����
//
//		while (save / need > 0)// ����̰� ġŲ�� �� ��ų �� ���� ����
//		{
//			answer += save / need;// ġŲ�� ��Ű��
//			save = save % need + cupon * save / need;// ���� �ޱ�
//		}
//		cout << answer << '\n';
//	}
//}
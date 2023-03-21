#include <iostream>

using namespace std;

long long distanceArr[100001];
long long price[100001];
long long useMoney = 0;
int town = 0;

void GO(long long, long long);
int main()
{
	cin >> town;
	for (int i = 0; i < town - 1; i++)
		cin >> distanceArr[i];

	for (int i = 0; i < town; i++)
		cin >> price[i];

	GO(0, 0);
	cout << useMoney;
}

void GO(long long oil, long long index)
{
	long long needOil = 0;
	long long townIndex = 1;
	//종료조건
	if (index >= town)
		return;

	//마을까지 가는 길
	if (oil >= distanceArr[index])
		oil -= distanceArr[index];
	//돈이 부족하면
	else
	{
		//다음 싼주유소를 찾아
		while (true)
		{
			//이거 최소면 와일문을 나와
			if (index + townIndex == town - 1)
				break;

			//값이 적으면
			if (price[index] > price[index + townIndex])
				break;

			townIndex++;
		}
		//그리고 거리를 계산해
		for (int i = index; i < index + townIndex; i++)
			needOil += distanceArr[i];
		//그만큼 주유해
		useMoney += needOil * price[index];
		oil += needOil;
		//그리고 달려!
		oil -= distanceArr[index];
	}
	//다음 마을에서 출발
	GO(oil, index + 1);
}
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<float> x;
vector<float> y;
int main()
{
	int size = 0;
	cout <<"점의 갯수를 입력해주세요 : ";
	cin >> size;
	float inputX;
	float inputY;
	float area = 0;
	cout << "점의 위치를 입력해주세요. ex) (1,1) -> 1 1" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> inputX >> inputY;
		cout << "선택한 점의 위치는 (" << inputX << ", " << inputY << ")입니다."<< endl;
		x.push_back(inputX);
		y.push_back(inputY);
	}
	cout << "-------------------------------------------------" << endl;
	cout << "계산을 시작합니다." << endl;
	cout << "-------------------------------------------------" << endl;

	float neajuck1X;
	float neajuck1Y;
	float neajuck1Length;
	float neajuck2X;
	float neajuck2Y;
	float neajuck2Length;
	for (int i = 1; i < size - 1; i++)
	{
		neajuck1X = x[i] - x[0];
		neajuck1Y =	y[i] - y[0];
		neajuck1Length = sqrt(pow(neajuck1X, 2) + pow(neajuck1Y, 2));
		neajuck1X /= neajuck1Length;
		neajuck1Y /= neajuck1Length;


		neajuck2X = x[i + 1] - x[0];
		neajuck2Y = y[i + 1] - y[0];
		neajuck2Length = sqrt(pow(neajuck2X, 2) + pow(neajuck2Y, 2));
		neajuck2X /= neajuck2Length;
		neajuck2Y /= neajuck2Length;

		area += neajuck1Length* neajuck2Length * sin(acos(neajuck2X * neajuck1X + neajuck1Y * neajuck2Y)) / 2;
	}
	cout << area;
}
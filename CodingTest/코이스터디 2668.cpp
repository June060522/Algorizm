#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int card = 0, star = 0, person = 0;
	int maxScore = 0;
	float minusScore = 0;
	cin >> card >> star >> person;
	int personPerCard = card / person;

	if (star >= personPerCard)
	{
		maxScore = personPerCard;
		star -= personPerCard;
	}
	else
	{
		cout << star;
		return 0;
	}

	minusScore = ((float)star / (float)(person - 1));
	maxScore -= ceil(minusScore);
	cout << maxScore;
}
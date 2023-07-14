#include <iostream>
using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		int dotCnt = 0;
		int zoneCnt = 0;
		int x, y;
		cin >> x >> y;
		
		char **zone = new char*[x];
		for (int j = 0; j < x; j++)
			zone[j] = new char[y];

		for (int j = 0; j < x; j++)
		{
			for (int k = 0; k < y; k++)
			{
				cin >> zone[j][k];
				if (zone[j][k] == '.')
					dotCnt++;
			}
		}

		for (int j = 0; j < x; j++)
		{
			for (int k = 0; k < y; k++)
			{
				if ((k > 0 ? zone[j][k - 1] == '#' : true) && (j > 0 ? zone[j - 1][k] == '#' : true) && zone[j][k] == '.')
					zoneCnt++;
			}
		}

		if (zoneCnt > 1)
			cout << zoneCnt << " sections, ";
		else
			cout << zoneCnt << " section, ";
			
		if(dotCnt > 1)
			cout << dotCnt << " spaces\n";
		else
			cout << dotCnt << " space\n";

	}
}
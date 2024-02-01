#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
	while (k > 0)
	{
		for (int i = 1; i < number.size(); ++i)
		{
			if (number[i] > number[i - 1])
			{
				number.erase(i - 1, 1);
				k--;
				break;
			}
			if (i == number.size() - 1)
			{
				number.erase(number.size() - k);
				k = 0;
			}
		}
	}
    return number;
}

int main()
{
	cout << solution("1924", 2);
}
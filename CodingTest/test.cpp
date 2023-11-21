#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int findVal = 3;
	int arr[6] = { 0,1,2,3,4,5 };
	vector<int> vt = { 0,1,2,3,4,5 };
	cout << lower_bound(arr,arr + 6, findVal) - arr << endl;
	cout << lower_bound(vt.begin(), vt.end(), findVal) - vt.begin() << endl;
	cout << upper_bound(arr,arr + 6, findVal) - arr << endl;
	cout << upper_bound(vt.begin(), vt.end(), findVal) - vt.begin() << endl;
}
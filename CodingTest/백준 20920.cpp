//#include <iostream>
//#include <algorithm>
//#include <stack>
//
//using namespace std;
//
//string inputS[100001];
//string wordS[100001];
//int wordCnt[100001] = { 0 };
//int savewordCnt[100001] = { 0 };
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int repeat = 0, minlength = 0;
//	cin >> repeat >> minlength;
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> inputS[i];
//	}
//
//	sort(inputS, inputS + repeat);
//	string saveS = " ";
//	int idx = -1;
//	for (int i = 0; i < repeat; i++)
//	{
//		if (saveS != inputS[i])
//		{
//			saveS = inputS[i];
//			idx++;
//			wordS[idx] = saveS;
//			++wordCnt[idx];
//		}
//		else
//		{
//			++wordCnt[idx];
//		}
//	}
//	int saveInt = 0;// 1 1 1
//	for (int i = 0; i <= idx; i++)
//	{
//		if (saveInt == wordCnt[i])
//		{
//			savewordCnt[i] = 100002;
//			continue;
//		}
//		else
//		{
//			savewordCnt[i] = wordCnt[i];
//			saveInt = wordCnt[i];
//		}
//	}
//
//	sort(savewordCnt, savewordCnt + idx + 1, greater<>());
//
//	for (int i = 0; i < repeat; i++)
//	{
//		if (savewordCnt[i] == 100002)
//			continue;
//
//		
//		for (int j = 0; j < repeat; j++)
//		{
//			if (wordCnt[j] == savewordCnt[i] && wordS[j].length() >= minlength)
//				cout << wordS[j] << "\n";
//		}
//	}
//}
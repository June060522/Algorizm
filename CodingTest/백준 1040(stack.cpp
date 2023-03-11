#include <iostream>
#include <stack>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, count = 0;// a = 기본값, b = 숫자갯수, count = 중복갯수 확인
	cin >> a >> b;// a,b 입력
	long long answer = a; // 최종 출력
	stack<int> s; // a를 담을 스택 s
	
	set<int> chk; //중복 확인 chk 

	long long c = 1;//c선언   => 자릿수 맞추기 & answer값 저장

	int num = 0; // 큐에 담긴 수를 저장하는 변수
	long long multiple = 0;
	bool check = false;//어떻게할지 몰라 만든 변수
	for (int i = 1; i < b; i++)
	{
		c *= 10;//자릿수 맞추기
	}
	if (c > a)//최소 자릿수가 a보다 크면
	{
		answer = 10;
		for (int i = 2; i < b; i++)
			answer = answer * 10 + i;// 10 +2345....입력
	}

	while (true)//조건이 완료될때까지
	{
		count = 0;// 변수 초기화;
		check = false;
		multiple = 1;
		chk.clear();
		c = answer;
		while (answer > 0)
		{
			s.push(answer % 10);//자릿수 하나씩
			answer /= 10;// 10씩 나누기
		}//스택에 answer넣기
		int size = s.size();
		for (int i = 0; i < size; i++)// 스텍의 사이즈만큼 반복
		{
			if (chk.count(s.top()) == 0)// s의 값이 안담겨 있을때
			{
				if (count < b)// count가 지정된 갯수보다 적으면
				{
					count++;//count를 더하고
					chk.insert(s.top());//chk에 담는다
				}
				else//아니면
				{
					while (chk.count(s.top()) == 0)//체크에 값이 없을때 까지
					{
						s.top()++;//더한다.
						if (s.top() > 9)// 9보다 커지면
						{
							s.top() = 9;
							for (int i = 0; i < s.size(); i++)
							{
								multiple *= 10;//10씩 곱하고
							}
							c += multiple; //answer저장된곳에 1올려주고
							check = true;
							while (!s.empty())//스텍이 비워질때동안
							{
								multiple /= 10;
								c -= s.top() * multiple;
								s.pop();//지우기
							}
							answer = c;// answer에 넣어주고
							break;// 다음 와일문 넘어가기
						}
					}
				}
			}
			if (check)
				break;
			answer = answer * 10 + s.top();//answer를 뒤로 밀어내고 붙이기
			s.pop();//s값 지우기
		}
		if (check)
			continue;
		if (count != b)//만약 카운트와 입력값이 다르면
			answer++;//더하기
		else//아니면
			break;//멈추기
	}

	cout << answer;
}
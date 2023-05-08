#include <iostream>

using namespace std;

class Queue {
public:
	void InitQueue(int num)
	{
		qsize = num;
		front = 0;
		reer = 0;
		buf = new int[num];
	}

	void Enqueue(int num)
	{
		if (IsFull())
		{
			cout << "큐가 꽉 찼음" << endl;
			return;
		}
		buf[reer++] = num;
	}
	bool IsEmpty()
	{
		if (reer == front)
			return true;
		return false;
	}
	bool IsFull()
	{
		if (reer == qsize)
			return true;
		return false;
	}
	int Dequeue()
	{
		if (front == reer)
		{
			cout << "큐가 비워져 있음";
			return -1;
		}
		return buf[front++];
	}
public:
	int* buf;
	int qsize;
	int front;
	int reer;
};

int main()
{
	int i;
	Queue q1;
	q1.InitQueue(10);
	for (int i = 1; i <= 11; i++)
	{
		cout << i << " 입력\n";
		q1.Enqueue(i);
	}
	cout << endl;

	while (!q1.IsEmpty())
	{
		cout << q1.Dequeue() << " 출력\n";
	}
	cout << endl;
}
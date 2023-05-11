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
		buf[reer] = num;
		reer = (reer + 1) % qsize;
	}
	bool IsEmpty()
	{
		if (reer == front)
			return true;
		return false;
	}
	bool IsFull()
	{
		if ((reer + 1) % qsize == front)
			return true;
		return false;
	}
	int Dequeue()
	{
		if (front == reer)
		{
			cout << "큐가 비워져 있음" << endl;
			return -1;
		}
		int a = buf[front];
		front = (front + 1) % qsize;
		return a;
	}

public:
	int* buf;
	int qsize;
	int front;
	int reer;
};

void print_queue(Queue q)
{
	cout << "front=" << q.front << " ";
	cout << "reer = " << q.reer << " | ";
	int i = 0;
	while ((q.front + i) % q.qsize != q.reer)
	{
			cout << q.buf[(q.front + i) % q.qsize] << " | ";
			i++;
	}
	cout << endl;
}

int main()
{
	Queue q1;
	q1.InitQueue(4);
	for (int i = 1; i < 5; i++)
	{
		q1.Enqueue(i);
		print_queue(q1);
	}

	for (int i = 1; i < 5; i++)
	{
		q1.Dequeue();
		print_queue(q1);
	}

	for (int i = 1; i < 5; i++)
	{
		q1.Enqueue(i);
		print_queue(q1);
	}
}


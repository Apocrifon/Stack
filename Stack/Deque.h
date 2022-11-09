#pragma once
#include <iostream>
using namespace std;

struct Deque
{
   
public:
	Deque(int size) : size(size), head(size/2+1), tail(size/2) {};

	bool IsEmpty()
	{
		if (head == tail+1)
			return true;
		return false;
	}
	void PushHead(int value)
	{
		if (head == 0)
			throw exception("OverFlow");
		head--;
		array[head] = value;

	}

	void PushTail(int value)
	{
		if (IsEmpty())
			throw exception("OverFlow");
		tail++;
		array[tail] = value;

	}

	int PopHead()
	{
		if (IsEmpty())
			throw exception("Empty deque");
		head++;
		int result = array[head];

		return result;
	}

	int PopTail()
	{
		if (IsEmpty())
			throw exception("Empty deque");
		tail--;
		int result = array[tail];

		return result;
	}

	int PeekHead()
	{
		if (IsEmpty())
			throw exception("Empty deque");
		return array[head];
	}

	int PeekTail()
	{
		if (IsEmpty())
			throw exception("Empty deque");
		return array[tail];
	}

	void Clear()
	{
		head = size / 2+1;
		tail = size / 2;
	}
	
	int Lenght()
	{
		return tail - head+1;
	}

	void Print()
	{
		for (int i = head;i <= tail; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}
private:
	int size;
	int head;
	int tail;
	int* array = new int[size];
};
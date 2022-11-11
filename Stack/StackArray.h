#pragma once
#include <iostream>
#include <string.h>
#include <exception>
using namespace std;

struct Stack
{
public:
	Stack() : size(0), capacity(1) {}

	void AddMemory()
	{
		auto tempArray = array;
		capacity *= 2;
		array = new int[capacity];
		for (size_t i = 0; i < size; ++i) array[i] = tempArray[i];
		delete[] tempArray;
	}

	bool IsEmpty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}

	void Push(int value)
	{
		if (size == capacity - 1)
			AddMemory();
		size++;
		top++;
		array[top] = value;
	}

	int Pop()
	{
		if (IsEmpty())
			throw exception("Empty Array");
		top--;
		size--;
		return array[top + 1];
	}
	
	int Peek()
	{
		if (IsEmpty())
			throw exception("Empty Array");
		return array[top];
	}

	int Size()
	{
		return size;
	}

	int Capasity()
	{
		return capacity;
	}

	void PrintArray()
	{
		for (int i = 0; i < Size(); i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}

private:
	int size;
	int capacity;
	int* array = new int[capacity];
	int top = -1;
};
#include "StackList.h"
#include "StackArray.h"
#include "Queue.h"
#include "Deque.h"

int main()
{
	auto stackArray = Stack();
	stackArray.Push(1);
	stackArray.Push(2);
	stackArray.Push(3);
	stackArray.Pop();
	stackArray.PrintArray();
	cout << "________" << endl;
	cout << stackArray.Capasity() << endl;
	cout << stackArray.Size() << endl;
	cout << stackArray.Top() << endl;
}
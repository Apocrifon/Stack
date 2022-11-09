#include "StackList.h"
#include "StackArray.h"
#include "Queue.h"
#include "Deque.h"

int main()
{
	auto stackArray = Stack();
	auto stackList = StackList();
	auto queue = Queue();
	auto deque = Deque();
	/*-----������ ��� �������-----*/

	stackArray.Push(1);
	stackArray.Push(2);
	stackArray.Push(3);
	stackArray.Pop();
	stackArray.PrintArray();
	cout << "________" << endl;
	cout << stackArray.Capasity() << endl;
	cout << stackArray.Size() << endl;
	cout << stackArray.Top() << endl;

	/*-----������ ��� ������-----*/

	stackList.AddTail(3);
	stackList.AddTail(2);
	stackList.AddTail(1);
	stackList.RemoveTail();
	stackList.PrintList();

	/*-----������ ��� �������-----*/

	queue.Enqueue(3);
	queue.Enqueue(2);
	queue.Enqueue(1);
	queue.Dequeue();
	cout << queue.Last() << endl;
	cout << queue.First() << endl;
	cout << queue.Length() << endl;
	queue.Clear();
	cout << queue.IsEmpty() << endl;

	/*-----������ ��� ����-----*/

	deque.Push���d(1);
	deque.Push���d(2);
	deque.Push���d(3);
	deque.PushTail(3);
	deque.PushTail(2);
	deque.PushTail(1);
	cout << deque.Length() << endl;
	cout << deque.PeekHead() << endl;
	cout << deque.PeekTail() << endl;
	deque.Clear();
	cout << deque.IsEmpty() << endl;

}
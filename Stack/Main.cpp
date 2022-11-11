#include "StackList.h"
#include "StackArray.h"
#include "Queue.h"
#include "Deque.h"

int main()
{
	auto stackArray = Stack();
	auto stackList = StackList();
	auto queue = Queue();
	auto deque = Deque(10);
	///*-----Методы для массива-----*/
	//stackArray.Push(1);
	//stackArray.Push(2);
	//stackArray.Push(3);
	//cout << stackArray.Pop() << endl;
	//cout << stackArray.Pop() << endl;
	//cout << stackArray.Pop() << endl;
	//cout << stackArray.Capasity() << endl;
	//cout << stackArray.Size() << endl;
	//cout << endl;

	///*-----Методы для Списка-----*/

	//stackList.AddTail(3);
	//stackList.AddTail(2);
	//stackList.AddTail(1);
	//stackList.RemoveTail();

	/*-----Методы для Очереди-----*/

	queue.Enqueue(3);
	queue.Enqueue(2);
	queue.Enqueue(1);
	cout << queue.Dequeue() <<endl;
	cout << queue.PeekHead() << endl;
	cout << queue.PeekTail() << endl;
	cout << queue.Length() << endl;
	queue.Clear();
	cout << queue.IsEmpty() << endl;
	cout << endl;
	/*-----Методы для Дека-----*/

	deque.PushHead(1);
	deque.PushHead(2);
	deque.PushHead(3);
	deque.PushTail(1);
	deque.PushTail(2);
	deque.PushTail(3);
	cout << deque.PopTail() << endl;
	cout << deque.PopHead() << endl;
	cout << deque.IsEmpty() << endl;
	cout << deque.Lenght() << endl;
	deque.Clear();
	deque.Print();
}
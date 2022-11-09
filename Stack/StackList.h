#pragma once
#include <iostream>
using namespace std;

struct Node
{
	int value;
	Node* nextNode;
	Node(int input) : value(input), nextNode(nullptr) {}
};

struct StackList
{
    Node* first;
    Node* last;
    StackList() : first(nullptr), last(nullptr) {}

    bool IsEmpty()
    {
        return first == nullptr;
    }

    void AddTail(int input)
    {
        Node* elem = new Node(input);
        if (IsEmpty())
        {
            first = elem;
            last = elem;
            return;
        }
        last->nextNode = elem;
        last = elem;
    }

    void RemoveTail()
    {
        if (IsEmpty()) return;
        if (first == last) {
            {
                Node* temp = first;
                first = first->nextNode;
                delete temp;
            }
            return;
        }
        Node* p = first;
        while (p->nextNode != last) p = p->nextNode;
        p->nextNode = nullptr;
        delete last;
        last = p;
    }

    void PrintList()
    {
        if (IsEmpty())
            return;
        Node* p = first;
        while (p) {
            cout << p->value << " ";
            p = p->nextNode;
        }
        cout << endl;
    }
};
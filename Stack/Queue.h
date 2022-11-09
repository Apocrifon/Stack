#pragma once
#include <iostream>
using namespace std;

struct Queue
{
public:

    Queue() : first(nullptr), last(nullptr) {}

    bool IsEmpty()
    {
        return first == nullptr;
    }

    void Enqueue(int value)
    {
        Node* elem = new Node(value);
        if (IsEmpty())
        {
            first = elem;
            last = elem;
            return;
        }
        last->nextNode = elem;
        last = elem;
    }

    void Dequeue()
    {
        Node* temp = first;
        first = first->nextNode;
        delete temp;
    }

    int PeekHead()
    {
        if (!IsEmpty())
            return first->value;
    }

    int PeekTail()
    {
        if (!IsEmpty())
            return last->value;
    }

    void Clear()
    {
        while (first) 
        {
            Node* p = first->nextNode;
            free(first);
            first = p;
        }
    }

    int Length()
    {
        auto result = 0;
        Node* p = first;
        while (p != nullptr)
        {
            p = p->nextNode;
            result++;
        }
        return result;
    }

    int Last() 
    {
        if (first!=nullptr)
        return last->value;
        return 0; // what's do
    }

    int First()
    {
        if (first != nullptr)
        return first->value;
        return 0; // what's do
    }

private:
    Node* first;
    Node* last;

};
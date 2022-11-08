#pragma once
#include <iostream>
using namespace std;

struct Queue
{
public:

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
        while (p->nextNode != nullptr)
        {
            p = p->nextNode;
            result++;
        }
        return result;
    }

private:
    Node* first;
    Node* last;
    Queue() : first(nullptr), last(nullptr) {}
};
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

    int Dequeue()
    {
        if (IsEmpty())
            throw exception("Empty List");
        Node* temp = first;
        first = first->nextNode;
        int tempValue = temp->value;
        delete temp;
        return tempValue;
    }

    int PeekHead()
    {
        if (IsEmpty())
            throw exception("Empty queue");
        return first->value;
    }

    int PeekTail()
    {
        if (IsEmpty())
            throw exception("Empty queue");
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

private:
    Node* first;
    Node* last;
};
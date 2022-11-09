#pragma once
#include <iostream>
using namespace std;

struct NodeDeque
{
	int value;
	NodeDeque* nextNode;
	NodeDeque* prevNode;
	NodeDeque(int input) : value(input), nextNode(nullptr), prevNode(nullptr) {}
};

struct Deque
{
public:

    Deque() : first(nullptr), last(nullptr) {}

    bool IsEmpty()
    {
        return first == nullptr;
    }

    void PushTail(int input)
    {
        auto elem = new NodeDeque(input);
        if (IsEmpty())
        {
            first = elem;
            last = elem;
            return;
        }
        elem->prevNode = last;
        last->nextNode = elem;
        last = elem;
    }

    void PushÍåàd(int input)
    {
        auto elem = new NodeDeque(input);
        if (IsEmpty())
        {
            first = elem;
            last = elem;
            return;
        }
        first->prevNode = elem;
        elem->nextNode = first;
        first = elem;
    }

    void PopHead()
    {
        NodeDeque* temp = first;
        first->nextNode->prevNode = nullptr;
        first = first->nextNode;
        delete temp;
    }

    void PopTail()
    {
        if (IsEmpty()) return;
        if (first == last) {
            PopHead();
            return;
        }
        NodeDeque* p = first;
        while (p->nextNode != last) p = p->nextNode;
        p->nextNode = nullptr;
        delete last;
        last = p;
    }

    int PeekHead()
    {
        if (!IsEmpty())
            return first->value;
    }

    int  PeekTail()
    {
        if (!IsEmpty())
            return last->value;
    }

    void Clear()
    {
        while (first) {
            NodeDeque* p = first->nextNode;
            free(first);
            first = p;
        }
    }

    int Length()
    {
        auto result = 0;
        NodeDeque* p = first;
        while (p != nullptr)
        {
            p = p->nextNode;
            result++;
        }
        return result;
    }
private:
    NodeDeque* first;
    NodeDeque* last;
};
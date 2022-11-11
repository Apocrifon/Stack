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

    int RemoveTail()
    {

        if (IsEmpty()) 
            throw exception("empty list");
        if (first == last) 
        {
                auto result = first->value;
                Node* temp = first;
                first = first->nextNode;
                delete temp;
                return result;
        }
        Node* p = first;
        while (p->nextNode != last) p = p->nextNode;
        p->nextNode = nullptr;
        auto result = last->value;
        delete last;
        last = p;
        return result;
    }

    //void PrintList()
    //{
    //    if (IsEmpty())
    //        return;
    //    Node* p = first;
    //    while (p) {
    //        cout << p->value << " ";
    //        p = p->nextNode;
    //    }
    //    cout << endl;
    //}
};
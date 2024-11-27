#ifndef STACKLIST_H
#define STACKLIST_H
#include "stackNode.h"
#include <iostream>
using namespace std;

class stacklist
{
private:
    stackNode* tail;

    bool isEmpty()
    {
        return (tail == NULL);
    }

public:
    /// Constructor
    stacklist()
    {
        tail = NULL;
    }

    /// Push function
    void push(int data)
    {
        stackNode* node = new stackNode(data);

        // Add node to the stack
        node->Prev = tail;
        tail = node;
    }

    /// Pop function
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop.\n";
            return -1;
        }

        int data = tail->Data;
        stackNode* temp = tail;
        tail = tail->Prev;
        delete temp;
        return data;
    }

    /// Peek function
    int peek(int& data)
    {
        if (isEmpty())
        {
            return 0;
        }

        data = tail->Data;
        return 1;
    }

    /// Display the stack
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
            return;
        }

        stackNode* current = tail;
        int i = 0;


        while (current != NULL)
        {
            cout << "Stack element  ";
            cout << "[" << i << "] = " << current->Data << endl;
            current = current->Prev;
            i++;
        }
    }

    /// Destructor
    ~stacklist()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

#endif // STACKLIST_H

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
    Node* head;
    Node* tail;
    int Nodecount;


    Node* getNodeUsingIndex(int index)
    {
        if (index < 0 || index >= Nodecount)
            return NULL;

        Node* current = head;
        int currentIndex = 0;
        while (current != NULL)
        {
            if (currentIndex == index)
                return current;
            current = current->Next;
            currentIndex++;
        }
        return NULL;
    }


    Node* getNodeUsingData(int data)
    {
        Node* current = head;
        while (current != NULL)
        {
            if (current->Data == data)
                return current;
            current = current->Next;
        }
        return NULL;
    }

public:
    // Constructor
    LinkedList()
    {
        head = tail = NULL;
        Nodecount = 0;
    }

    /// create a node
    void add(int data)
    {
        Node* node = new Node(data);
        Nodecount++;

        /// First node
        if (head == NULL)
        {
            head = tail = node;
        }
        else
        {
            tail->Next = node;
            node->Prev = tail;
            tail = node;
        }
    }

    /// Get the number of nodes
    int GetCount()
    {
        return Nodecount;
    }

    /// Display the list
    void display()
    {
        Node* current = head;
        if (current == NULL)
        {
            cout << "Linked List is Empty\n";
            return;
        }
        while (current != NULL)
        {
            cout << current->Data << "\t";
            current = current->Next;
        }
        cout << endl;
    }

    /// Insert a node after a given node
    void InsertAfter(int data, int afterData)
    {
        Node* node = getNodeUsingData(afterData);
        if (node == NULL)
        {
            cout << "Element not found. Can't add after the element.\n";
            return;
        }

        Node* addedNode = new Node(data);
        Nodecount++;


        /// Insert after tail
        if (node == tail)
        {
            node->Next = addedNode;
            addedNode->Prev = node;
            tail = addedNode;
        }
        else
        /// Insert after a middle node
        {
            Node* nextNode = node->Next;
            node->Next = addedNode;
            addedNode->Prev = node;
            addedNode->Next = nextNode;
            nextNode->Prev = addedNode;
        }
    }

    /// Insert a node before a given node
    void InsertBefore(int data, int beforeData)
    {
        Node* node = getNodeUsingData(beforeData);
        if (node == NULL)
        {
            cout << "Element not found. Can't add before the element.\n";
            return;
        }

        Node* addedNode = new Node(data);
        Nodecount++;

        /// Insert before head
        if (node == head)
        {
            addedNode->Next = head;
            head->Prev = addedNode;
            head = addedNode;
        }
        else
        /// Insert before a middle node
        {
            Node* previousNode = node->Prev;
            previousNode->Next = addedNode;
            addedNode->Prev = previousNode;
            addedNode->Next = node;
            node->Prev = addedNode;
        }
    }

    /// Get node data by index
    int getNodeDataByIndex(int index)
    {
        Node* node = getNodeUsingIndex(index);
        if (node == NULL)
        {
            cout << "Index out of bounds.\n";
            return -1;
        }
        return node->Data;
    }

    /// Search for a node by index
    bool search_using_index(int index)
    {
        return (getNodeUsingIndex(index) != NULL);
    }
};

#endif

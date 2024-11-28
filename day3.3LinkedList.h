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


public:
    /// Constructor
    LinkedList()
    {
        head = tail = NULL;

    }


    /// create a node
    void add(int data)
    {
        Node* node = new Node(data);

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
    /// swap node
    void swapNode(int & data1 , int & data2)
    {

        int temp=data1;
        data1=data2;
        data2=temp;
    }


    /// bubble sort
    void BubbleSort()

    {
         bool sorted;   /// swap flag

        /// check if for is empty or has only one node
        if (head == NULL || head->Next == NULL) {
            return;
        }


        do {

            sorted=false;
            Node* current = head;

            while (current->Next != NULL) {
                if (current->Data > current->Next->Data)
                {

                    swapNode(current->Data, current->Next->Data);
                    sorted=true;  ///swap occurs
                }
                current = current->Next; /// Move to the next node
            }
        } while (sorted);
    }



};

#endif

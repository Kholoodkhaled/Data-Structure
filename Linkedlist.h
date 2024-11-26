#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
class Linkedlist
{
    //How Many Node ?
    //Node node;
    //Node node[?????];
    private:
        Node * head;
        Node * tail;
        int Nodecount=0;
      //  int index=0;

    Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL){
            if(current->Data==data){
                return current;
            }
            //Jump
            current=current->Next;
        }
        return NULL;

    }


    Node * getNodeUsingindex(int index){
        Node *current=head;
        while(current != NULL){
            if(current->head==index){
                return Node[index];
            }
            //Jump
            current=current->Next;


    }}


    public:
        Linkedlist() {
            head=tail=NULL;
        }
        void add(int data){
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null
            Nodecount+=1;
            index+=1;
                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }

        /// get number of nodes
        int GetCount()
        {
          return Nodecount;
        }

        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }




   /// Insert node after a given node

    void InsertAfter(int data, int afterData) {
    // Find the node with the specified value (afterData)
    Node* node = getNodeUsingData(afterData);
    if (node == NULL) {
        cout << "Element not found. Can't add after the element.\n";
        return;
    }

    /// Create a new node
    Node* addedNode = new Node(data);

    ///Insert after  first node
    if (node == head && node == tail)
    {
        node->Next = addedNode;
        addedNode->Previous = node;
        tail = addedNode;
    }
    ///Insert after  tail node
    else if (node == tail)
    {
        node->Next = addedNode;
        addedNode->Previous = node;
        tail = addedNode;
    }
    ///  Insert after  middle node
    else
    {
        Node* nextNode = node->Next;
        node->Next = addedNode;
        addedNode->Previous = node;
        addedNode->Next = nextNode;
        nextNode->Previous = addedNode;
    }

//cout << "Node with data " << data << " inserted after node with data " << afterData << ".\n";
}



    ///insert node before given node
	void InsertBefore(int data, int beforeData)
	{
        Node* node = getNodeUsingData(beforeData);
    if (node == NULL) {
        cout << "Element not found. Can't add after the element.\n";
        return;
    }

    /// Create a new node
    Node* addedNode = new Node(data);

    ///Insert before  first node
    if (node == head && node == tail)
    {
        node->Previous = addedNode;
        addedNode->Previous = NULL;
        addedNode->Next = node;
        tail = node;
    }
    ///Insert before  tail node
    else if (node == tail)
    {
        node->Previous = addedNode;
        addedNode->Next = node;
        tail = node;
    }
    ///  Insert before  middle node
    else
    {
        Node* previousNode = node->Next;
        node->Next = addedNode;
        addedNode->Previous = previousNode;
        addedNode->Next = node;
        nextNode->Next = addedNode;
    }

//cout << "Node with data " << data << " inserted before node with data " << beforeData << ".\n";
}



	}


    int search_using_index(int index){
        Node * node = getNodeUsingindex(index);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
    protected:

};

#endif // LINKEDLIST_H

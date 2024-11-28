#ifndef NODE_H
#define NODE_H


class Node
{
    private:

    public:
        Node * Prev,*Next;
        int Data;
        Node(int data){
            Data=data;
            Prev=Next=NULL;
        }


    protected:


};

#endif // NODE_H

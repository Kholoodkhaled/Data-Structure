#ifndef STACKNODE_H
#define STACKNODE_H


class stackNode
{
   public:
    stackNode* Prev;
    int Data;


    stackNode(int data)
    {
        Data = data;
        Prev = NULL;
    }
};

#endif // STACKNODE_H

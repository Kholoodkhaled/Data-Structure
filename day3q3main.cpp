#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    int nodeNum;
    LinkedList mylist;

    mylist.add(9);
    mylist.add(5);
    mylist.add(7);
    mylist.add(3);
    mylist.add(1);
    mylist.display();



    mylist.BubbleSort();
    mylist.display();


    return 0;
}

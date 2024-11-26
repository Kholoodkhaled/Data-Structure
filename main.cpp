#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    int nodeNum;
    LinkedList mylist;

    mylist.add(3);
    mylist.add(5);
    mylist.display();

    /// Insert node after a given node
    mylist.InsertAfter(10, 3);
    mylist.display();

    /// Insert node before a given node
    mylist.InsertBefore(7, 5);
    mylist.display();

    nodeNum = mylist.GetCount();
    cout << "\n Number of nodes: " << nodeNum << endl;

    if (!mylist.search_using_index(3))
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "\n index Found" << endl;
        cout << " Data in node index 3 is: "  <<mylist.getNodeDataByIndex(3)<< endl;;
    }

    return 0;
}

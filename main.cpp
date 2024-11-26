#include <iostream>

using namespace std;

int main()
{   int nodeNum;
    LinkedList mylist;

    mylist.add(3);
    mylist.add(5);
    mylist.display();

    // insert node after given node
      InsertAfter(10, 13);
      mylist.display();
    // insert node before given node
	 InsertBefore( 7, 8);
	 mylist.display();

    nodeNum = mylist.GetCount();


    if(!mylist.search_using_index(10)){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }



    return 0;
}

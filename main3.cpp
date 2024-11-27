#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{ /// Queue objects
  Queue Q1(5, false);  /// shifting mode queue
  Queue Q2(5, true);   /// circular mode queue


    Q1.EnQueue(10);
    Q1.EnQueue(20);
    Q1.EnQueue(30);
    Q1.display();
    cout<<"Front value is "<< Q1.Getfront()<< endl;
    cout<<"rear value is "<< Q1.GetRear() << endl;
    Q1.DeQueue();
    Q1.display();

    Q2.EnQueue(1);
    Q2.EnQueue(2);
    Q2.EnQueue(3);
    Q2.EnQueue(4);
    Q2.display();
    cout<<"Front value is " <<Q2.Getfront()<< endl;
    cout<<"rear value is " << Q2.GetRear() << endl;
    Q2.DeQueue();

    Q2.EnQueue(5);

    Q2.display();

    Q2.EnQueue(6);

    Q2.DeQueue();

    Q2.display();

    return 0;
}

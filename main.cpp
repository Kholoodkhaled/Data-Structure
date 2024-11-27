#include <iostream>
#include "stacklist.h"
using namespace std;

int main()
{
    stacklist stk;
    int topValue;

    /// Pushing elements to stack
    stk.push(10);
    stk.push(20);
    stk.push(15);
    stk.push(5);

    /// display stack elements
    stk.display();
    cout<<endl;

    /// Pop elements from stack
    cout  << stk.pop() << endl;   // 5
    cout << stk.pop() << endl;   // 15


     /// get(display) top element of stack
    if (stk.peek(topValue))
    {
        cout << "Top element is: " << topValue << endl;
    }
    else
    {
        cout << "Stack is empty.\n";
    }

    return 0;
}

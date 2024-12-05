#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{   int treeDepth=0;
    Tree tr;
    tr.add(20);
    tr.add(50);
    tr.add(70);
    tr.add(90);
    tr.add(40);

    treeDepth = tr.getDepth();
    cout << "Tree Depth: " << treeDepth << endl;

    return 0;
}

#include <iostream>
using namespace std;



void linearSearch(int* items, int size, int search)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (items[i] == search) {
            cout << "Element " << search << " found at index: " << i << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Element " << search << " not found in the array." << endl;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 2, 7};

    linearSearch(arr, 6, 2);
    linearSearch(arr, 6, 5;

    return 0;
}

#include <iostream>
#include <algorithm> /// For sort function

using namespace std;

int binarySearch( int *items , int size, int search)
{
   int start=0,end=size-1,mid=0;


   while(start<=end){
        mid=(start+end)/2;
        if(items[mid]==search){
            return mid;

        }
        else if(items[mid]>search){
            end=mid-1;

        }
        else if(items[mid]<search){
            start=mid+1;

        }
   }
   return -1;


}

int main()
{
    int arr[6]={5,9,3,4,8,7};
    sort(arr, arr + 6);

     binarySearch(arr,6,2) ==-1? cout<<"element 2 " <<"Not Found \n ":cout<<"element 2"<<" Found "<<endl;

     binarySearch(arr,6,7 )==-1? cout<<"element 7 " <<" \n Not Found \n":cout<<"element 7 "<<" Found "<<endl;

    return 0;
}

#include<iostream>

using namespace std;

int binarySearch(int* arr,int l,int r, int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            return binarySearch(arr,mid+1,r,x);
        else
            return binarySearch(arr,l,mid-1,x);
    }
    return -1;
}

int main()
{
    int arr[7]={23,32,43,54,65,76,98};
    int x=98;
    int index=binarySearch(arr,0,6,x);
    if(index!=-1)
    {
        cout<<x<<" found at index : "<<index;
    }
    else
        cout<<"not found";
    return 0;
}
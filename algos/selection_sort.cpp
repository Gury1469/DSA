#include<iostream>

using namespace std;

void selectionSort(int* arr, int size)
{
    int minidx;
    for(int i=0;i<size-1;i++)
    {
        minidx=i;
        for(int j=i;j<size;j++)
        {
            if(arr[minidx]>arr[j])
                minidx=j;
        }
        swap(arr[i],arr[minidx]);
    }
}

int main()
{
    int arr[7]={45,487,379,332,48,33,3};
    selectionSort(arr,7);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
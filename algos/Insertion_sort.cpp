#include<iostream>

using namespace std;

void Insertion_sort(int* arr,int size)
{
    int key,j;
    for(int i=0;i<size;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}

int main()
{
    int arr[7]={12,44,33,76,3,5,6};
    Insertion_sort(arr,7);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
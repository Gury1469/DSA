#include<iostream>
#include "../Heap.cpp"

using namespace std;

void HeapSort(int* arr,int size)
{   
    Heap h1(size);
    //Building a Heap from array
    for(int i=0;i<size;i++)
    {
        h1.insert(arr[i]);
    }
    //Adding root of Heap to array and deleting root to sort the array
    for(int i=0;i<size;i++)
    {
        arr[i]=h1.getMax();
        h1.Delete();
    }
}

int main()
{
    int arr[7]={45,487,379,332,48,33,3};
    HeapSort(arr,7);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
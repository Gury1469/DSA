#include<iostream>

using namespace std;

class Heap
{
    int* arr;
    int heapSize;
    int maxSize;

    int LeftChild(int i)
    {
        return (2*i)+1;
    }
    int RightChild(int i)
    {
        return (2*i)+2;
    }
    int Parent(int i)
    {
        return (i-1)/2;
    }

    public:
    //constructor for creating a heap of given size
    Heap(int maxSize)
    {
        this->maxSize=maxSize;
        arr=new int[maxSize];
        heapSize=0;
        
    }
    
    //function which return the root of MaxHeap which means the largest element of array
    int getMax()
    {
        return arr[0];
    }

    //function to move the element down in Heap to its correct position
    void heapifyDown(int i)
    {
        int root=i;
        int left=LeftChild(i);
        int right=RightChild(i);

        if(left<heapSize && arr[left]>arr[root])
        {
            root=left;
        }
        if(right<heapSize && arr[right]>arr[root])
        {
            root=right;
        }

        if(i!=root)
        {
            swap(arr[i],arr[root]);
            heapifyDown(root);
        }
    }

    //function to move the element Up in Heap until it reaches its correct position
    void heapifyUp(int i)
    {
        while(i!=0 && arr[i]>arr[Parent(i)])
        {
            swap(arr[i],arr[Parent(i)]);
            i=Parent(i);
        }
    }

    //function to insert value in a heap
    void insert(int val)
    {
        if(heapSize==maxSize)
        {
            cout<<"Overflow!!!";
            return;
        }

        heapSize++;
        int i=heapSize-1;
        arr[i]=val;

        heapifyUp(i);

    }

    // void Delete()
    // {
    //     arr[0]=INT_MIN;
    //     maxHeapify(0);
    //     heapSize--;
        
    // }

    //function to delete an element from Heap
    void Delete()
    {
        arr[0]=arr[heapSize-1];
        heapSize--;
        heapifyDown(0);
    }

    void print()
    {
        for(int i=0;i<heapSize;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    //destructor to deallocate memory for the dynamic array for preventing memory leaks
    ~Heap()
    {
        delete[] arr;
    }

};

// int main()
// {
//     Heap h1(10);
//     h1.insert(98);
//     h1.insert(8);
//     h1.insert(234);
//     h1.insert(33);
//    // h1.insert(64);
//     h1.insert(56);
//     h1.insert(54);
//     h1.insert(65);
//     h1.insert(444);
//     h1.insert(1);
//     h1.insert(999);

//     h1.print();
    
//     return 0;
// }
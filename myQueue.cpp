#include<iostream>
using namespace std;

template <class T>
class myQueue
{
    T* arr;
    int size;
    int front;
    int rear;

    public:
    
    myQueue(int size)
    {
        this->size=size;
        arr=new T[size];
        front=-1;
        rear=-1;
    }
    myQueue()
    {
        myQueue(100);
    }

    bool isEmpty()
    {
        return Size()<=0;
    }

    bool isFull()
    {
        return rear==size-1;
    }

    void enqueue(T data)
    {
        if(isFull())
        {
            cout<<"Queue is full!!!!!\n";
            return;
        }
        if(isEmpty())
        {
            front=rear=0;
        }
        else
            rear++;

        arr[rear]=data;
    }
    
    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Already empty\n";
            return -1;
        }
        T temp=arr[front];
        front++;
        
        return temp;
    }

    int Size()
    {
        return rear-front+1;
    }

    T Front()
    {
        return arr[front];
    }

    void print()
    {
        for(int i=front;i<rear;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }

};
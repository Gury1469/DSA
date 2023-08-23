#include<iostream>
using namespace std;
template<class T> class Stack
{
    int size;
    T* arr=new T[size];
    int top;

    public:
    //constructor
    Stack()
    {
        size=100;
        top=-1;
    }
    
    //Pushing in Stack
    void push(T element)
    {
        if(top>=size-1)
        {
            cout<<"!!!!!OVERFLOW!!!!!\n";
            return;
        }
        else
        {
            ++top;
            arr[top]=element;
        }
    }

    //Poping out of Stack
    T pop()
    {
        if(top<=-1)
        {
            cout<<"!!!!UNDERFLOW!!!!\n";
            return 0;
        }
        else
        {
            T popped=arr[top];
            top--;
            return popped;
        }
    }

    //getting top element
    T getTop()
    {
        if(isEmpty())
        {
            cout<<"Empty\n";
            return -1;
        }
        else
            return arr[top];
    }

    //checking for empty
    bool isEmpty()
    {
        return top==-1;
    }

    //printing
    void print()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
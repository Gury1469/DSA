#include<iostream>
using namespace std;


template<class T> struct Node
{
    T data;
    Node* next;
    Node(T data)
    {
        this->data=data;
        next=nullptr;
    }
};

template<class T> class linkedList
{
    private:
    static Node<T>* lastNode;
    Node<T>* head;
    public:
    linkedList()
    {
        head=nullptr;
    }
    //this is an insert function with constant time complexity O(1) 
    void insert(T data)
    {
        Node<T>* newNode=new Node(data);
        if(head==nullptr)
        {
           head = newNode;
           lastNode=head;
        }
        else
        {
           lastNode->next=newNode;
           lastNode=newNode;
        }

    }

    /*we can also use normal insert function of linkedlist implementation 
    which will traverse until the end of the list for adding a new item
    having time complexity of O(n)*/
    void print()
    {
        Node<T>* ptr;
        ptr=head;
        while(ptr!=nullptr)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

};

template <class T>
Node<T>* linkedList<T>::lastNode=nullptr;

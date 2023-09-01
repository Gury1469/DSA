#include<iostream>
using namespace std;

template <class T>
struct Node
{
    T data;
    Node* left;
    Node* right;

    Node(T data)
    {
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};

template<class T>
class myTree
{
    Node<T>* root;

    void addNode(Node<T>*& node,T data)
    {
        if(node==nullptr)
        {
            node=new Node(data);
        }
        else if(data<node->data)
            addNode(node->left,data);
        else
            addNode(node->right,data);
    }

    void inOrder(Node<T>* node)
    {
        if(node==nullptr)
            return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }

    void preOrder(Node<T>* node)
    {
        if(node==nullptr)
            return;
        cout<<node->data<<" ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Node<T>* node)
    {
        if(node==nullptr)
            return;
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->data<<" ";
    }

    bool search(Node<T>*& node,T value)
    {
        if(node==nullptr)
            return false;
        if(node->data==value)
        {
            return true;
        }
        else if(value<node->data)
            search(node->left,value);
        else if(value>node->data)
            search(node->right,value);
    }

    public:
    myTree()
    {
        root=nullptr;
    }
    

    void add(T data)
    {
        addNode(root,data);
    }

    void InOrder()
    {
        inOrder(root);
    }

    void PreOrder()
    {
        preOrder(root);
    }

    void PostOrder()
    {
        postOrder(root);
    }
    
    void Search(int value)
    {
       if(search(root,value))
            cout<<"FOUND!!!!!\n";
        else 
            cout<<"NOT FOUND!!!\n";
    }

};
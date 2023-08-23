 #include "myTree.cpp"

int main()
{
    // Stack<int> S1;
    // S1.push(1);
    // S1.push(2);
    // cout<<"top is "<<S1.getTop()<<endl;
    // S1.push(3);
    // cout<<"deleted "<<S1.pop()<<endl;
    // S1.push(4);
    // S1.push(5);
    
    // S1.print();


    // linkedList<int> list;
    // list.insert(1);
    // list.insert(2);
    // list.insert(4);
    // list.insert(5);
    // list.insert(6);
    // list.insert(8);
    // list.insert(9);
    // list.print();

    // myQueue<int> Que1;
    // Que1.enqueue(11);
    // Que1.enqueue(12);
    // Que1.enqueue(13);
    // cout<<"size= "<<Que1.Size()<<endl;
    // Que1.enqueue(14);
    // Que1.enqueue(15);
    // cout<<"front= "<<Que1.Front()<<endl;
    // Que1.enqueue(16);
    // cout<<"Dequed element = "<<Que1.dequeue()<<endl;
    // Que1.print();

    myTree<int> tree;
    tree.add(10);
    tree.add(14);
    tree.add(17);
    tree.add(1);
    tree.add(146);
    tree.add(739);
    tree.add(90);
    cout<<"Inorder traversal: ";
    tree.InOrder();
    cout<<endl;
    cout<<"Preorder traversal: ";
    tree.PreOrder();
    cout<<endl;
    cout<<"Postorder traversal: ";
    tree.PostOrder();
    cout<<endl;
    tree.Search(12);
    tree.Search(14);
    
    return 0;
}
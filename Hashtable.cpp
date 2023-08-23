#include<iostream>
#include<vector>
#include<list>

using namespace std;

//template <class T, class X>
struct Entry
{
    int key;
    int value;
    Entry(int key,int value)
    {
        this->key=key;
        this->value=value;
    }
};

class Hashtable
{
    int capacity;
    vector<list<Entry*>> pair;

    int hashFunction(int k)
    {
        return k%capacity;
    }

    public:
    
    Hashtable(int capacity)
    {
        this->capacity=capacity;
        pair.resize(capacity);
    }

    void Insert(int key, int value)
    {
        int index=hashFunction(key);
        pair[index].push_back(new Entry(key,value));
    }

    int Search(int key)
    {
        int index=hashFunction(key);
        for(auto i=pair[index].begin();i!=pair[index].end();i++)
        {
            if((*i)->key == key)
            {
                return (*i)->value;
            }
                
        }
        return -1;
    }

    void display()
    {
        for(int i=0;i<capacity;i++)
        {
            for(auto it=pair[i].begin();it!=pair[i].end();it++)
            {
                cout<<(*it)->key<<" "<<(*it)->value<<" ";
            }
            cout<<endl;
        }
    }


};

int main()
{
    Hashtable table1(4);
    table1.Insert(13,28);
    table1.Insert(18,98);
    table1.Insert(1,2);
    table1.Insert(34,556);
    table1.Insert(122,2853);
    table1.Insert(132,218);
    table1.Insert(136,282);
    table1.Insert(453,283);
    table1.Insert(123,2448);
    cout<<table1.Search(1)<<endl;
    table1.display();
    return 0;
}
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
class Graph
{
    vector<vector<int>> Adjlist;
    int numOfVertices;

    public:

    Graph(int num)
    {
        numOfVertices=num;
        Adjlist.resize(num);
    }

    void addEdge(int start, int dest)
    {
        Adjlist[start].push_back(dest);
        Adjlist[dest].push_back(start);
    }

    // void print()
    // {   
    //     for(int i=0;i<numOfVertices;i++)
    //     {
    //         cout<<"Vertex "<<i<<": ";
    //         for(auto vertex: Adjlist[i])
    //         {
    //             cout<<vertex<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    void DFS(int vertex, vector<bool>& visited)
    {
        cout<<vertex<<" ";
        visited[vertex]=1;
        for(auto i: Adjlist[vertex])
            if(!visited[i])
                DFS(i,visited);
    }

    void DFS()
    {
        vector<bool> visited(numOfVertices,0);
        DFS(0,visited);
    }

    // void BFS(int vertex,vector<bool>& visited)
    // {   
    //     if(!visited[vertex])
    //     {
    //         cout<<vertex<<" ";
    //         visited[vertex]=1;
    //     }
    //     for(auto i:Adjlist[vertex])
    //     {
    //         if(!visited[i])
    //         {
    //             cout<<i<<" ";
    //             visited[i]=1;
    //         }
    //     }
    //     for(auto i:Adjlist[vertex])
    //     {
    //         BFS(i,visited);
    //     }
        
    // }

    void BFS(int vertex)
    {
        vector<bool> visited(numOfVertices,0);
        queue<int> q1;
        q1.push(vertex);
        visited[vertex]=1;
        
        while(!q1.empty())
        {
            vertex=q1.front();
            q1.pop();
            cout<<vertex<<" ";
            for(auto i:Adjlist[vertex])
            {
                if(!visited[i])
                {
                    visited[i]=1;
                    q1.push(i);
                }
            }
        }

    }

    void BFS()
    {
        //vector<bool> visited(numOfVertices,0);
        BFS(0);
    }



};

int main()
{
    Graph G1(4);
    
    G1.addEdge(0,1);
    G1.addEdge(0,3);
    G1.addEdge(1,3);
    G1.addEdge(1,2);
    G1.addEdge(2,3);
    //G1.addEdge(2,0);

    //G1.print();
    cout<<"DFS ";
    G1.DFS();
    cout<<"\nBFS ";
    G1.BFS();

    return 0;
}
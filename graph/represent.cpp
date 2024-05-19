#include<bits/stdc++.h>
#include<iostream>
#include<list>
#include<vector>
using namespace std;
//adjacency list
class graph{
    public:
    int V;
    vector<vector<int>>adjacency;

    graph(int V){
        this->V=V;
        adjacency.resize(V,vector<int>(V,0));  
    }

    void add_edges(int x,int y){
        adjacency[x][y]=1;
    }
    void print_adjacency(){
            for(int i=0;i<V;i++)
            {
                for(int j=0;j<V;j++) cout<<adjacency[i][j]<<" ";
                cout<<endl;
            }

    }
    
};


int main()
{

        graph gph(4);

        gph.add_edges(1,2);
        gph.add_edges(2,1);
        gph.add_edges(1,4);
        gph.add_edges(3,4);
        gph.print_adjacency();


return 0;
}
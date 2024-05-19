#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

void add_edge(vector<vector<int>>&adj_list,int u,int v){
    adj_list[u].push_back(v);
}

void bfs(vector<vector<int>>&adj_list,vector<bool>visited,int startnode){
   
         queue<int>q;
         visited[startnode]=true;
         q.push(startnode);
        
         while(!q.empty())
         {
            int curr=q.front();
            cout<<curr<<" ";            q.pop();
            for(int neigh:adj_list[curr]){
                    if(!visited[neigh])
                    {
                        visited[neigh]=true;
                        q.push(neigh);
                    }
            }
         }

}




int main()
{
    int vertices = 5;

    // Adjacency list representation of the graph
    vector<vector<int> > adjList(vertices);

    add_edge(adjList,0,1);
    add_edge(adjList,0,2);
    add_edge(adjList,1,3);
    add_edge(adjList,1,4);
    add_edge(adjList,2,4);

    vector<bool>visited(vertices,false);

    bfs(adjList,visited,0);

return 0;
}
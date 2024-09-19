#include<bits/stdc++.h> 
using namespace std;

void dfs(char c,map<char,vector<char>>&adj,map<char,bool>&visited){

        visited[c]=true;
        cout<<c<<" ";

            for(char neighbour:adj[c]){
                if(!visited[neighbour]){
                    dfs(neighbour,adj,visited);
                }
            }

}


int main()
{
        map<char, vector<char>> adj;
        map<char,bool>visited;

    // Adding edges (Directed graph example)
    adj['A'].push_back('B');
    adj['A'].push_back('C');
    adj['B'].push_back('D');
    adj['C'].push_back('D');
    adj['D'].push_back('E');

    dfs('A',adj,visited);
}

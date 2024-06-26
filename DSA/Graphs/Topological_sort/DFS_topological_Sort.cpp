#include<bits/stdc++.h>
using namespace std;


// DFS Approach 

void topological_sort_DFS(int node,vector<int>adjlist[],vector<bool>&visited,stack<int>&s){
    visited[node]=1;
    for(int i=0;i<adjlist[node].size();i++){
        if(!visited[adjlist[node][i]]){
            topological_sort_DFS(adjlist[node][i],adjlist,visited,s);
        }
    }
    s.push(node);
}

// topological sort is available for the Directed Acyclic Graph
// if u -> v then the result consist u in front of v 


int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
    }
    vector<bool>visited(vertices,0);
    stack<int>st;
    for(int i=0;i<vertices;i++){ // always graph is not connectd --> edge case --> graph might availablein pieces;
        if(!visited[i]){
            topological_sort_DFS(i,adjlist,visited,st);

        }
    }
    vector<int>vect;
    while(!st.empty()){
        vect.push_back(st.top());
        st.pop();
    }

    for(int i =0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;



}
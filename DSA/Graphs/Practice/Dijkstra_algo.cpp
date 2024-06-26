#include<bits/stdc++.h>
using namespace std;\

void dijkstra(vector<vector<pair<int,int>>>&adj,vector<int>&visited,vector<int>&path){
   
    path[0]=0;
    int count = adj.size();
    while(count--){
    int node = -1 ;
    int value = INT_MAX;

    for(int i=0;i<adj.size();i++){
        if(!visited[i] && value > path[i]){
            node = i;
            value = path[i];
        }
    }
    
    visited[node]=1; // after getting zero now we need its neighbours  neighbours only you can proceed further 

    for(int i=0;i<adj[node].size();i++){ 
        int neighbour = adj[node][i].first;
        int weight = adj[node][i].second;
        // this is a vector associated with a matrix 
        if(!visited[neighbour] && path[node] + weight < path[neighbour]){
            path[neighbour] = path[node]+weight;
        }
    }
    }

}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<int,int>>>adjlist(vertices);
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjlist[u].push_back({v,weight});
        adjlist[v].push_back({u,weight});
    }

    vector<int>visited(vertices,0);
    vector<int>path(vertices,INT_MAX);

    dijkstra(adjlist,visited,path);

    for(auto ele:path){
        cout<<ele<<" ";
    }
    cout<<endl;
}
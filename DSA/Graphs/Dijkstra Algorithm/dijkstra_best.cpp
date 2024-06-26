#include<bits/stdc++.h>
using namespace std;

void dijkstra_best(int S,vector<vector<pair<int,int>>>&adj,vector<int>&visited,vector<int>&path){
    // initialse a priority_que to store the cost of path and its node (weight,node)
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
    path[S]=0;
    p.push({0,S});
    while(!p.empty()){
        int node = p.top().second;
        p.pop();
        if(visited[node]){
                continue;
            }
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            int neighbour = adj[node][i].first;
            int weight = adj[node][i].second;
            if(!visited[neighbour] && path[node] + weight < path[neighbour]){
                path[neighbour] = path[node] + weight;
                p.push({path[neighbour],neighbour});
            }

            


        }
    }
}


int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<int,int>>>adj(vertices);

    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }

    vector<int>visited(vertices,0);
    vector<int>path(vertices,INT_MAX);
    dijkstra_best(0,adj,visited,path);

    for(auto ele:path){
        cout<<ele<<" ";

    }
    cout<<endl;


}
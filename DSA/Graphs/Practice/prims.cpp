#include<bits/stdc++.h>
using namespace std;

void prims(vector<vector<pair<int,int>>>&adj,vector<int>&parent,vector<bool>&mst,int &cost){
    // priority_queue
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    pq.push({0,{0,-1}}) // 
    while(!pq.empty()){
        int wt = pq.top().first;
        int node = pq.top().second.first;
        int par = pq.top().second.first;

        // try to avoid the cycle if the node is present in the mst
        if(!mst[node]){
            mst[node]=1;
            cost+=wt;
            parent[node]=par;
        }

        // lets see the neigh bours of minimum node in the que

        for(int i=0;i<adj[node].size();i++){
            if(!mst[adj[node][i].])
        }


    }
}
int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<int,int>>>adj(vertices,vector<int>(edges));

    int u,v,w;
    cin>>u>>v>>w;
    for(int i =0;i<edges;i++){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int cost =0;
    vector<int>parent(vertices,0);
    vector<bool>is_mst(vertices,0);
    prims(adj,parent,is_mst,cost);
    cout<<" the cost of MST would be : --> "<<endl;


}
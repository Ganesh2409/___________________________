#include<bits/stdc++.h>
using namespace std;

// 2 pass algorithm 1) relax all the edges  v-1 times 
// 2) check for the loop or -ve cycle 
vector<int> bellman_ford(int src,vector<vector<pair<int,int>>>&adj,vector<int>path){
path[src]=0;
int count = adj.size()-1;

while(count --){

for (int i = 0; i < adj.size(); i++) {
    for (int j = 0; j < adj[i].size(); j++) {
        int u = i; // Current node
        int v = adj[i][j].first; // Neighboring node
        int wt = adj[i][j].second; // Weight of the edge

        // Check if the cost from u + wt is less than the cost of v, if so, update the path
        if (path[u] + wt < path[v]) {
            path[v] = path[u] + wt;
        }
    }
}

}
// lets check it fo rone more time to detect cycle 

for (int i = 0; i < adj.size(); i++) {
    for (int j = 0; j < adj[i].size(); j++) {
        int u = i; // Current node
        int v = adj[i][j].first; // Neighboring node
        int wt = adj[i][j].second; // Weight of the edge

        // Check if the cost from u + wt is less than the cost of v, if so, update the path
        if (path[u] + wt < path[v]) {
            vector<int>ans;
            ans.push_back(-1);
            return ans;
        }
    }
}


return path;



}




int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<pair<int,int>>>adj(v);
    int u,vrt,wt;
    for(int i =0;i<e;i++){
        cin>>u>>vrt>>wt;
        adj[u].push_back({vrt,wt});
    }
    int src;
    cin>>src;
    vector<int>path(v,INT_MAX);

    vector<int>result = bellman_ford(src,adj,path);
    for(auto ele:result){
        cout<<ele<<" ";
    }
    return 0;
    


}
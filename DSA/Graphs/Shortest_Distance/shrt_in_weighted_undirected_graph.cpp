#include<bits/stdc++.h>
using namespace std;

// shrtest path in weighted un durected graph --> dijkstra algorithm
// weighted unna graphs ki manam dijkstra algo vadthama ? --> Yes it is ...! 
// manam prevly undirected un weighted graph ki shrt dist an path kanukunnam (BFS and parent array traversal from back to start)


// first dijkstra algo tho shrt path kanuko bro and then find the shrt path finally 
void dijkstra(vector<vector<pair<int,int>>>&adj,vector<int>&visited,vector<int>&parent,vector<int>&dist){
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>que;
    que.push({0,0});
    
    dist[0]=0;
    while(!que.empty()){
        int node = que.top().second;
        que.pop();
        if(visited[node]){
            continue;
        }
        visited[node]=1;
        for(int i=0;i<adj[node].size();i++){
            int neighbour = adj[node][i].first;
            int weight = adj[node][i].second;

            if(!visited[neighbour] && dist[node] + weight <dist[neighbour]){
                dist[neighbour] = dist[node]+weight;
                parent[neighbour]= node;
                que.push({dist[neighbour],neighbour});
            }
        }
    }
}
void shrt_path(vector<int>&ans,vector<int>&parent,int dest){
    while(dest != -1){
        ans.push_back(dest);
        dest = parent[dest];

    }
    reverse(ans.begin(),ans.end()); // i will always forget this step 

}


int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<pair<int,int>>>adj(v);
    int u,vrt,wt;
    for(int i=0;i<e;i++){
        cin>>u>>vrt>>wt;
        adj[u].push_back({vrt,wt});
        adj[vrt].push_back({u,wt});
    }
    int dest;
    cout<<"enter the destination : ";
    cin>>dest;

    vector<int>parent(v,-1);
    parent[0]=-1;
    vector<int>visited(v,0);
    vector<int>dist(v,INT_MAX);
    vector<int>ans;


    dijkstra(adj,visited,parent,dist);
    shrt_path(ans,parent,dest);

    for(auto ele: ans){
        cout<<ele<<" ";
    }
    cout<<endl;
}
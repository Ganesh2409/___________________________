#include<bits/stdc++.h>
using namespace std;


// undirected weighted graph 

// Every One Hated Approach !

//algorithm 
// search the index with shortest path that to it wont be explored
// here explored means there is no other shortest path other than the explored one 
// and mark the node with shortest distance and then explore its neighbiurs 
// and search for the neighbour with shrt distance ! 
//and repeate until vertices times --> for each time we are getting one vertexed shrt distance 


void Dijkstra(vector<vector<pair<int,int>>>&adj,vector<int>&explored,vector<int>&dist){
    
    dist[0]=0;
    int count = adj.size();

    while(count--){
    
    // getting the minimum node 


    int node =-1,value=INT_MAX;

    for(int i=0;i<adj.size();i++){
        if(!explored[i] && value>dist[i]){
            node=i;
            value = dist[i];
        }
    }
    explored[node]=1;  // 1 st loop lo zero ippudu explored loki ochidhi 


    // exploring the neighbours 

    for(int j=0;j<adj[node].size();j++){
        int neighbour = adj[node][j].first;
        int weight =    adj[node][j].second;

        if(!explored[neighbour] && dist[node]+weight < dist[neighbour]){
        dist[neighbour] = dist[node]+weight;
        }

    }
    }

   
}


int main()
{
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<int,int>>>adj(vertices);

    for(int i=0;i<edges;i++){
        int u,v,weight;
        cin>>u>>v>>weight;
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }
    vector<int>explored(vertices,0);
    vector<int>dist(vertices,INT_MAX);

    Dijkstra(adj,explored,dist);

    for(auto ele:dist){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    return 0;
}
/* 

6 8

0 1 6
0 2 2
1 3 7
1 2 3
2 4 4
3 5 2
3 4 5
4 5 9


0 5 2 11 6 13 

*/
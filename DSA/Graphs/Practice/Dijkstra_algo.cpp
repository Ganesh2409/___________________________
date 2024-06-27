#include<bits/stdc++.h>
using namespace std;

// void dijkstra(vector<vector<pair<int,int>>>&adj,vector<int>&visited,vector<int>&path){
   
//     path[0]=0;
//     int count = adj.size();
//     while(count--){
//     int node = -1 ;
//     int value = INT_MAX;

//     for(int i=0;i<adj.size();i++){
//         if(!visited[i] && value > path[i]){
//             node = i;
//             value = path[i];
//         }
//     }
    
//     visited[node]=1; // after getting zero now we need its neighbours  neighbours only you can proceed further 

//     for(int i=0;i<adj[node].size();i++){ 
//         int neighbour = adj[node][i].first;
//         int weight = adj[node][i].second;
//         // this is a vector associated with a matrix 
//         if(!visited[neighbour] && path[node] + weight < path[neighbour]){
//             path[neighbour] = path[node]+weight;
//         }
//     }
//     }

// }

void dijkstra(vector<vector<pair<int,int>>>&adj,vector<int>&explored,vector<int>&path){
    path[0]=0;
    int count = adj.size();

    while(count--){
        int node = -1,value = INT_MAX;
        for(int i=0;i<path.size();i++){
            if(!explored[i] && path[i] < value){
                value = path[i];
                node = i;
            }

        }

        explored[node]=1;
        if(node == -1) break;
        

        for(int i=0;i<adj[node].size();i++){
            int neighbour = adj[node][i].first;
            int weight = adj[node][i].second;
            if(explored[neighbour]){
                continue;
            }
            if(!explored[neighbour] && path[neighbour] > path[node]+weight){
                path[neighbour] = path[node]+weight; //up dating the path cost of the nodes 
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

    vector<int>explored(vertices,0);
    vector<int>path(vertices,INT_MAX);

    dijkstra(adjlist,explored,path);

    for(auto ele:path){
        cout<<ele<<" ";
    }
    cout<<endl;
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
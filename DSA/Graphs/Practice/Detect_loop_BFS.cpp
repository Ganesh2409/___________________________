#include<bits/stdc++.h>
using namespace std;
// bool loop_in_BFS(vector<int>adjlist[],vector<int>&visited){
//     queue<pair<int,int>>que;
//     que.push(make_pair(-1,0));
//     visited[0]=1;
//     while(!que.empty()){
//         int parent = que.front().first;
//         int node = que.front().second;
//         que.pop();
//         for(int i =0;i<adjlist[node].size();i++){
//             if(adjlist[node][i]== parent){
//                 continue;
//             }
//             if(visited[adjlist[node][i]]){
//                 return 1;
//             }
//             visited[adjlist[node][i]]=1;
//             que.push(make_pair(node,adjlist[node][i]));

//         }
//     }
//     return 0;

// }

bool loop_detect_dfs(int parent,int node,vector<int>adjlist[],vector<bool>&visited){
    visited[node]=1;
    for(int i =0;i<adjlist[node].size();i++){
        if(adjlist[node][i]==parent){
            continue;
        }
        if(visited[adjlist[node][i]]){
            return 1;
        }
        if(loop_detect_dfs(node,adjlist[node][i],adjlist,visited)){
            return 1;
        }
    }
    return 0;

    
}
int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<bool>visited(vertices,0);
    int ans=0;
    for(int i=0;i<vertices;i++){
        if(!visited[i] && loop_detect_dfs(-1,0,adjlist,visited)){
            ans=1;
        }
    }

    if(ans){
        cout<<"loop is detected ....! "<<endl;
    }
    else{
        cout<<"No loop in the graph"<<endl;
    }
    return 0;


}
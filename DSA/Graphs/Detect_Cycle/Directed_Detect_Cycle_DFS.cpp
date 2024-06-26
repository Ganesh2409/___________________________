#include<bits/stdc++.h>
using namespace std;


bool loop_detect_DFS(int node,vector<int>adjlist[],vector<bool>&visited,vector<bool>&path){
    visited[node]=1;
    path[node]=1;
    for(int i=0;i<adjlist[node].size();i++){
        if(path[adjlist[node][i]]){
            return 1;
        }
        if(visited[adjlist[node][i]]){
            continue; // optimisation 
        }
        if(loop_detect_DFS(adjlist[node][i],adjlist,visited,path)){
            return 1;
        }
    }

    path[node]=0; // we are removing the element from the path at the time of back tracking 

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
    }
    vector<bool>visited(vertices,0); // improved efficiency 

    vector<bool>path(vertices,0);

    bool ans;


    for(int i =0;i<vertices;i++){
        if(!visited[i]){
            ans = lop_dfs(i,adjlist,visited,path)
        }
    }


    if(ans){
        cout<<"cycle is Detected"<<endl;
    }
    else{
        cout<<"Cuycle is not Detected "<<endl;
    }
    return 0;



}
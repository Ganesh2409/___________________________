#include<bits/stdc++.h>
using namespace std;


bool loop_dfs(int node,vector<int>adjlist[],vector<bool>&visited,vector<bool>&path){
    path[node]=1;
    visited[node]=1;
    for(int i=0;i<adjlist[node].size();i++){
        if(path[adjlist[node][i]] == 1 ){
            return 1;
        }
        if(visited[adjlist[node][i]]){
            continue;
        }
        if(loop_dfs(adjlist[node][i],adjlist,visited,path)){
            return 1;
        }
    }
    path[node]=0;
    return 0;
}


int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    vector<bool>visited(vertices,0);
    vector<bool>path(vertices,0);
    bool ans ;
    for(int i =0;i<vertices;i++){
        if(!visited[i]){
            ans = loop_dfs(i,adjlist,visited,path)
        }
    }
    if(ans){
        cout<<"Loop is detected"<<endl;
    }
    else{
        cout<<"loop is not there buddy !"<<endl;
    }

}
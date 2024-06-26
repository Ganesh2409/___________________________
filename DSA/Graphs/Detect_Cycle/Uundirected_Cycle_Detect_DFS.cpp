#include<bits/stdc++.h>
using namespace std;
/*
visit chesina node ni malli visit chesthey except its parent node then loop is present >> Loop Detect DFS 
*/

bool loop_detect(int node,int parent,vector<int>adjlist[],vector<bool>&visited){
    visited[node]=1;
    for(int i=0;i<adjlist[node].size();i++){

            if(adjlist[node][i] == parent){
                continue;
            }
            if(visited[adjlist[node][i]]==1){
                return 1;
            }
            if(loop_detect(adjlist[node][i],node,adjlist,visited)){
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


    bool ans=0;


    // some times the graph wont  always needed to be connected ! 
    for(int i =0;i<vertices;i++){
        if(!visited[i]&&loop_detect(i,-1,adjlist,visited)){
            ans=1;
        }

    }
    // visist all un visited nodes !

    if(ans){
        cout<<"Yes the graph consist of loop"<<endl;
    }
    else{
        cout<<"No the graph consist of no loop"<<endl;
    }


    return 0;

}
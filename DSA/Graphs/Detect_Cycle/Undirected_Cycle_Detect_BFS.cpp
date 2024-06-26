#include<bits/stdc++.h>
using namespace std;

bool loop_detect_bfs(vector<bool>&visited,vector<int>adjlist[]){
   
   queue<pair<int,int>>que;
   visited[0]=1;
   que.push(make_pair(0,-1));

    while(!que.empty()){
        int node = que.front().first;
        int parent = que.front().second;

        que.pop();
        for(int i =0;i<adjlist[node].size();i++){
            if(parent == adjlist[node][i]){
                continue;
            }
            if(visited[adjlist[node][i]]){
                return 1;
            }
            visited[adjlist[node][i]]=1;
            que.push(make_pair(adjlist[node][i],node));
            
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
    // what if my graph is un connected ! 
    for(int i =0;i<vertices;i++){
        if(!visited[i] && loop_detect_bfs(visited,adjlist)){
            ans=1;
        }
    }
    if(ans){
        cout<<"The graph consist of loop"<<endl;
    }
    else{
        cout<<"The graph consist of no loop"<<endl;
    }


}
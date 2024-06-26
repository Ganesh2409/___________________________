#include<bits/stdc++.h>
using namespace std;

void shortest_path_BFS(int source,vector<int>adjlist[],vector<bool>&visited,queue<int>&que,vector<int>&ans,vector<int> &parent){
    visited[source]=1;
    que.push(source);
    ans[source]=0; // extra 
    parent[source] = -1;
    while(!que.empty()){
        int node = que.front();
        que.pop();
       for(int i=0;i<adjlist[node].size();i++){
           if(!visited[adjlist[node][i]]){
               que.push(adjlist[node][i]);
               visited[adjlist[node][i]] =1;
               parent[adjlist[node][i]] = node;
               ans[adjlist[node][i]] = ans[node] + 1; // extra 
           }
           // elago already visit chesina node ni nuvu ignire chesthav else lo so try not to handle it sep 
       }
    }
}

vector<int>shortest_path_src_dest(vector<int>adjlist[],int src,int dest,vector<int>&parent){
    vector<int>v;
    
    while(dest != -1){
        v.push_back(dest);
        dest = parent[dest];
    }
    reverse(v.begin(),v.end());
    return v;
}


// print  shortest path from the src to destination 





int main(){
    int vertices;
    cin>>vertices;
    
    vector<int>adjlist[vertices];
    int edges;
    cin>>edges;
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    int src,dest;
    cin>>src>>dest;

    vector<bool>visited(vertices,0);
    queue<int>que;
    vector<int>ans(vertices,-1); // -1 to handle unconnected graph 
    vector<int>parent(vertices,-1);
    shortest_path_BFS(0,adjlist,visited,que,ans,parent);
     vector<int> travels = shortest_path_src_dest(adjlist,src,dest,parent);
    for(int i =0;i<travels.size();i++){
        cout<<travels[i]<<" ";
    }
    cout<<endl;
   return 0;
    
}
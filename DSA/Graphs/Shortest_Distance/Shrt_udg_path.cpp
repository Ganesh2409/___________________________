#include<bits/stdc++.h>
using namespace std;
// shortest path in undirected unweighted graph 

void shortest_distance(int src,vector<int>adjlist[],vector<int>&parent,vector<int>&visited,vector<int>&distance){
    queue<int>que;
    que.push(src);
    visited[src]=1;
    parent[src] = -1;
    distance[src]=0;
    while(!que.empty()){
        int node = que.front();
        que.pop();
        for(int i=0;i<adjlist[node].size();i++){
            if(!visited[adjlist[node][i]]){
                visited[adjlist[node][i]] =1;
                parent[adjlist[node][i]] = node;
                distance[adjlist[node][i]] = distance[node]+1;
                que.push(adjlist[node][i]);
            }
        }
    }
}


void print_path(vector<int>adjlist[],int src,int dest,vector<int>&path_print,vector<int>&parent){

    while(dest != -1){
        path_print.push_back(dest);
        dest = parent[dest];
    }

}


int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u); // undirected graph 
    }
    int source,destination;
    cin>>source>>destination ;
    vector<int>parent(vertices,-1);
    vector<int>visited(vertices,0);
    vector<int>distance(vertices);
    shortest_distance(source,adjlist,parent,visited,distance);
    for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<" ";
    }
    cout<<endl;

    vector<int>path_print;
    print_path(adjlist,source,destination,path_print,parent);
    reverse(path_print.begin(),path_print.end());
    for(int i=0;i<path_print.size();i++){
        cout<<path_print[i]<<" ";
    }
    cout<<endl;



    return 0;



}
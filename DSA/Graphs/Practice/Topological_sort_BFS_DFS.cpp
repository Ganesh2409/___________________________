#include<bits/stdc++.h>
using namespace std;

void topological_sort(vector<int>adjlist[],vector<int>&indegree,vector<int>&ans){
    queue<int>que;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){
            que.push(i);
        }
    }
    while(!que.empty()){
        int node = que.front();
        ans.push_back(node);
        que.pop();
        for(int j=0;j<adjlist[node].size();j++){
            if(indegree[node][j])
        }
    }
}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
    }

    vector<int>indegree(vertices,0);

    for(int i =0;i<vertices;i++){
        for(int j =0;j<adjlist[i].size();j++){
            indegree[adjlist[i][j]]++;
        }
    }



}
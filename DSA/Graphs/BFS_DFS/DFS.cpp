#include<bits/stdc++.h>
using namespace std;
// no need to quque we use two methods 1) recursion 2) stack
void DFS(int node,vector<int>adj[],vector<bool>&freq,vector<int>&ans){
    freq[node]=1;
    ans.push_back(node);
    for(int j =0;j<adj[node].size();j++){
        if(!freq[adj[node][j]]){
            DFS(adj[node][j],adj,freq,ans);
            // back ela osthavv ikkada 
        }

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
        adjlist[v].push_back(u);
    }
    int node =0;

    vector<int>ans;
    vector<bool>freq(vertices,0);
    


    DFS(node,adjlist,freq,ans);


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;


}
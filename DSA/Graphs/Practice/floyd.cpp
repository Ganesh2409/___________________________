#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;

    vector<vector<int>>adj(v,vector<int>(v,INT_MAX));
    int u,vrt,wt;

    for(int i =0;i<e;i++){
        cin>>u>>vrt>>wt;
        adj[u][vrt] = wt;
    }

    for(int i =0;i<v;i++){
        adj[i][i]=0;
    }

    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j =0;j<v;j++){
                if(adj[i][k] == INT_MAX || adj[k][j] == INT_MAX){
                    continue;
                }
                adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
            }
        }
    }
    bool is_cycle =0;

    for(int i=0;i<v;i++){
        if(adj[i][i] < 0){
            is_cycle = 1;
            break;
        }
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(adj[i][j] == INT_MAX){
                cout<<" INF"<<" ";
            }
            else{
                cout<<adj[i][j]<<" ";
            }

        }
        cout<<endl;
        
    }




    


}
#include<bits/stdc++.h>
using namespace std;

void khans_algo(vector<int>adjlist[],vector<int>&visited,vector<int>&ans){
    queue<int>que;
    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            que.push(i); // alert
        }
    }
    while(!que.empty()){
        int node = que.front();
        que.pop();
        ans.push_back(node);
        for(int j =0;j<adjlist[node].size();j++){
            visited[adjlist[node][j]]--;
            if(visited[adjlist[node][j]]==0){
                que.push(adjlist[node][j]);


            }
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
    vector<int>visited(vertices,0);
    vector<int>ans;

    for(int i=0;i<vertices;i++){
        for(int j =0;j<adjlist[i].size();j++){
            visited[adjlist[i][j]]++;

        }
    }

    khans_algo(adjlist,visited,ans);


    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
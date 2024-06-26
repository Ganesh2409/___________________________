#include<bits\stdc++.h>
using namespace std;


void BFS(int v,vector<int>adjlist[],vector<int>&ans,queue<int>&que,vector<bool>freq){
    que.push(0);
    freq[0]=1;
    while(!que.empty()){
        int node = que.front();
        que.pop();
        ans.push_back(node);
        for(int j =0;j<adjlist[node].size();j++){
            if(!freq[adjlist[node][j]]){
                freq[adjlist[node][j]]=1;
                que.push(adjlist[node][j]);
            }


        }

    }
    


}

int main(){
    int vertices;
    cin>>vertices;
    vector<int>ans;
    queue<int>que;
    vector<int>adjlist[vertices];
    int edges;
    cin>>edges;
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<bool>freq(vertices,0);

    BFS(vertices,adjlist,ans,que,freq);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
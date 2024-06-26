#include<bits/stdc++.h>
using namespace std;

// // BFS 

// void BFS(vector<int>adjlist[],vector<int>&ans,vector<int>& freq,vector<int>&que){
//     que.push(0);
//     freq[0]=1;
//     while(!que.empty()){
//         int node  = que.front();
//         que.pop();
//         ans.push_back(node);
//         for(int i =0;i<adjlist[node].size();i++){
//             if(!freq[adjlist[node][j]]){
//                 freq[adjlist[node][j]]=1;
//                 que.push(adjlist[node][j]);
//             }
//         }

//     }
// }


// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<int>adjlist[vertices];
//     int u,v;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v;
//         adjlist[u].push_back(v);
//         adjlist[v].push_back(u);
//     }
//     BFS(adjlist,ans,freq,que);
//     for(int i =0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

// }



// DFS
void DFS(int node,vector<int>adjlist[],vector<int>&ans,vector<bool>&freq){
    freq[node]=1;
    ans.push_back(node);
    for(int i =0;i<adjlist[node].size();i++){
        if(!freq[adjlist[node][i]]){
            DFS(adjlist[node][i],adjlist,ans,freq);

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
    vector<int>ans;
    vector<bool>freq(vertices,0);
    DFS(0,adjlist,ans,freq);

    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
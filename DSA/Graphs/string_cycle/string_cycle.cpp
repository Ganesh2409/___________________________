#include<bits/stdc++.h>
using namespace std;

void DFS(int node ,vector<int>adj[],vector<bool>&visited){
    visited[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(!visited[adj[node][j]]){
            DFS(adj[node][j],adj,visited);
        }
    }


}


bool is_circle(int n,vector<string>&st){
    // creating the adjlist;
    vector<int>adj[26]; // an array of vectors 
    vector<int>indeg(26,0);
    vector<int>outdeg(26,0);

    //creating  the graph 
    for(int i=0;i<n;i++){
        string temp = st[i];
        int u  = temp[0]-'a';
        int v = temp[temp.size()-1]-'a';
        adj[u].push_back(v);
        indeg[v]++;
        outdeg[u]++;
    }

    //checking for the eulerian circuit exists for directed graph 
    for(int i=0;i<26;i++){
        if(indeg[i] != outdeg[i]){
            return 0;
        }
    }
    // check if all the edges are of single component 
    vector<bool>visited(26,false);
    int node = st[0][0]-'a';
    DFS(node,adj,visited);

    for(int i=0;i<26;i++){
        if(indeg[i]>0 && !visited[i]){
            return 0;
        }
    }
    return 1;



}
int main(){
    vector<string>st;
    string s;
    for(int i=0;i<5;i++){
        cin>>s;
        st.push_back(s);
    }
    int n = st.size();
    bool ans = is_circle(n,st);

    if(ans){
        cout<<"the circle string is present";
    }
    else{
        cout<<"the circle string is not present";
    }
    return 0;

}
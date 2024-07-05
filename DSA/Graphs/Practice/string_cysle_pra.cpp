#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited){
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            DFS(adj[node][i],adj,visited);
        }
    }
}

bool is_string_cycle(int n,vector<string>&st){
    // creting the graph and indegree and out degree 
    vector<int>adj[26];
    vector<int>indeg(26,0);
    vector<int>outdeg(26,0);

    for(int i=0;i<n;i++){
        string curr = st[i];
        int u = curr[0]-'a'; // if there is a string like abcd we are making like ad 
        int v = curr[curr.size()-1]-'a';
        // ikkadey manam alphabets ni number loki marchesthunnam  sor manaki DFS lo probelm undahu

        adj[u].push_back(v);
        indeg[v]++;
        outdeg[u]++;
    }
    // check ofr the suler circuit 
    // if there is no euler circuit then the circle of path wont exists 
    for(int i=0;i<26;i++){
    if(indeg[i] != outdeg[i]){
        return 0;
    }
    }

    // apply the dfs and check for the single component of graph 


    vector<bool>visited(26,0);
    int node=st[0][0]-'a'; // mana string lo starting node aa adjlo ekkadunna akkadinundi search start cheyy 
    DFS(node,adj,visited);


    for(int i=0;i<26;i++){
        if(indeg[i] > 0 && !visited[i]){
            return 0;
        }
    }
    return 1;
}


int main(){
    vector<string>st;
    string s;
    int n ;
    cout<<" enter the size of the string :"<<" ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s;
        st.push_back(s);
    }

    bool ans = is_string_cycle(n,st);
    if(ans){
        cout<<" string cycle"<<endl;
    }
    else{
        cout<<" not a string cycle "<<endl;
    }
    return 0;

}
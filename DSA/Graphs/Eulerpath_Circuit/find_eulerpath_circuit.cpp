#include<bits/stdc++.h>
using namespace std;

/*

--> Euler circuit --> 2 

1) if a graph consist of euler circuit then it might consist of euler path 
2)  the graph must contain only even degree edges 
3) all the edges must be connected together in a single component 

--> Euler path --> 1 

1) euler path exists only 0 or 2 nodes contains odd degree and all the edges could be connected together 

--> this is anunweighted graph and in this vertices dont matter only the edges 

--> how can yo get to know u can traverse each edge only once ?

--> not an euler path or circuit --> 0

*/

void DFS(int node,vector<bool>&visited,vector<vector<int>>&adj){
    visited[node]=1;
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            DFS(adj[node][i],visited,adj);
        }
    }
}


int eulercycle_path(vector<vector<int>>&adj,vector<int>&degree,int odd_degree){
    if(odd_degree !=2 &&  odd_degree !=0){
        return 0; // no culer cycle or path
    }

    vector<bool>visited(adj.size(),0);

    //lets perform the DFS so check they all are connected
    int startNode = -1;
    for (int i = 0; i <adj.size(); i++) {
        if (degree[i] > 0) {
            startNode = i;
            break;
        }
    }
    if (startNode == -1) return 0; // No edges in the graph

    DFS(startNode, visited, adj);


    // check for the connected components 

    for(int i=0;i<adj.size();i++){
        if(degree[i] && !visited[i]){ // ekkada edges ni consider chestham ! 
            return 0;
        }

    }

    // check the no od off degrees 

    if(!odd_degree){
        return 2; //euler cycle 

    }
    else{
        return 1; // euler path 
    }
    

}

int main(){
    int vertices;
    int edges;
    cin>>vertices>>edges;
    vector<vector<int>>adj(vertices);
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=0;i<vertices;i++){
    //     cout<<i<<" "<<" --> "<<" ";
    //     int count = adj[i].size();
    //     for(int j=0;j<count;j++){
    //         cout<<adj[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }

    // 0  -->  1 2 3 4
    // 1  -->  0 2
    // 2  -->  1 0
    // 3  -->  0 4 
    // 4  -->  0 3

    // lets find degree (not in or out degree )
    vector<int>degree(vertices,0);
    int odd_degree=0;
    for(int i=0;i<vertices;i++){
        degree[i] = adj[i].size();
        if(degree[i]%2){
            odd_degree++;
        }
    }

    int ans = eulercycle_path(adj,degree,odd_degree);
   if (ans == 2) {
    cout << "Euler circuit present" << endl;
} else if (ans == 1) {
    cout << "Only Euler path present" << endl;
} else {
    cout << "No Euler path or cycle" << endl;
}
return 0;
// if odd_degree != 2 or 0 then euler path wont possible and to be euler cicuit no odd degree should present so
}
/*

5 6
0 1
0 2
1 2
1 4
1 3
3 4


Euler circuit present

*/
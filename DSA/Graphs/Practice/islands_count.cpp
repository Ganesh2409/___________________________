#include <bits/stdc++.h>
using namespace std;
bool is_valid(int i,int j,int rows,int cols){
    return i>=0 && i<rows && j >= 0 && j<cols;
}


void BFS(int i,int j,vector<vector<int>>&adj,int rows,int cols){
    queue<pair<int,int>>que;
    que.push({i,j});
    // visited avasaram ledhu we candirectly convert them in to zero
    while(!que.empty()){ 
    int rows[4]={-1,1,0,0};
    int cols[4]={0,0,-1,1};

    for(int k =0;k<4;k++){// this is the place we can navigate towards four directions 
    if(is_valid(i+row[k],j+col[k],rows,cols) && adj[i+rows[k]][j+cols[k]] == 1){
        que
    }

    }
    }
}



int count(vector<vector<int>>&adj){
    int count =0;
    int rows = adj.size();
    int cols = adj[0].size();


    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(adj[i][j]==1){
                BFS(i,j,adj,rows,cols);
            }
        }
    }
}

int main() {
    // Matrix dimensions 4x5
    vector<vector<int>> adj(5, vector<int>(4, 0));
    int u, v;
    // Read 8 pairs of indices and set the corresponding cells to 1
    for(int i = 0; i < 8; i++) {
        cin>>u>>v;
        adj[u][v] = 1;
    }
    int count =  count_islands(adj);


    return 0;
}

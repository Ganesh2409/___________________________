// it would be used for directed graph 
// shortest path from each node to other node
// dijkstra or bellman is only used for finding the shrt path from src to dest and from src to all nodes 
// but in the case of floyd warshell it would  give srt distance from every node to other node
#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<vector<int>>mat(vertices,vector<int>(vertices,INT_MAX));
    
    int u,v,wt;

    for(int i=0;i<edges;i++){
        cin>>u>>v>>wt;
        mat[u][v]= wt;
    }

    for(int i=0;i<vertices;i++){
        mat[i][i]=0;
    }

    for(int k=0;k<vertices;k++){ // eachb node will be considered as the intermediate node
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){

                if(mat[i][k] == INT_MAX || mat[k][j] == INT_MAX){
                    continue;
                }

                mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);

            }
        }
    }

    bool negative_cycle = false;
    for(int i=0;i<vertices;i++){
        if(mat[i][i] < 0){
            negative_cycle = true;
            break;
        }
    }


    if(negative_cycle){
        cout<<" The graph contains a negative weight cycle "<<endl;
    }
    else{
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                if(mat[i][j] == INT_MAX){
                    cout<<"INF"<< " ";
                }
                else{
                    cout<<mat[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
}
/*

4 7
0 3 4
3 0 6
0 2 2
2 3 1
3 1 4
1 3 10
1 0 3

*/

// TC:--> O(V^3)
// SC :--> O(1)
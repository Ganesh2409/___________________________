// link  https://www.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// there might be  multiple paths so try to fin dthe one with shortest path 
// 1) apply BFS or Dijkstra BUT Dijkstra wont be fessiable why ..? 

/*
Given a 2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).
Note: You can only move left, right, up and down, and only through cells that contain 1.

N=3, M=4
A=[[1,0,0,0], 
   [1,1,0,1],
   [0,1,1,1]]
X=2, Y=3 
Output:
5
Explanation:
The shortest path is as follows:
(0,0)->(1,0)->(1,1)->(2,1)->(2,2)->(2,3).

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertices,edges;
    cin >>vertices>>edges;
    vector<vector<int>>mat(vertices,vector<int>(edges,0));
    int places_count;
    cout<<"enter the no of  places u need to put --> 1";
    cin >> places_count;
    int u,v;

    while(places_count--){
        cin>>u>>v;
        mat[u][v]=1;
    }

    for(int i=0;i<vertices;i++){
        for(int j =0;j<edges;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
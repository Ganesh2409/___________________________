#include<bits/stdc++.h>
using namespace std;

// // directed weighted graph --> adjacency matrix representation 
// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<vector<int> >matrix(vertices,vector<int>(vertices,0));
//     int u,v,weight;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v>>weight;
//         matrix[u][v] = weight;
        

//     }
//     for(int i =0;i<vertices;i++){
//         for(int j =0;j<vertices;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// adjacent list representation 


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

    for(int i =0;i<vertices;i++){
        cout<<i<<"--> ";
        for(int j =0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
}



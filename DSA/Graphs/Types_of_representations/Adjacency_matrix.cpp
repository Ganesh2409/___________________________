// lets represent the basic graph

// undirected-unweighted
// undirected-weighted Graph



// Directed-unweighted graph
// Directed-weighted graph

#include<bits\stdc++.h>
using namespace std;


// // undirected-unweighted
// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<vector<bool> >matrix(vertices,vector<bool>(vertices,0)); // i lack here buddy ! 
//     int u,v;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v;
//         matrix[u][v]=1;
//         matrix[v][u]=1;
//     }
//     // lets print the map;
//     for(int i =0;i<vertices;i++){
//         for(int j =0;j<vertices;j++){
//             cout<<matrix[i][j]<<" ";

//         }
//         cout<<endl;
//     }
// }


// // undirected-weighted
// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<vector<int> >matrix(vertices,vector<int>(vertices,0)); // i lack here buddy ! 
//     int u,v,weight;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v>>weight;
//         matrix[u][v]=weight;
//         matrix[v][u]=weight;
//     }
//     // lets print the map;
//     for(int i =0;i<vertices;i++){
//         for(int j =0;j<vertices;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// // Directed-unweighted
// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<vector<bool> >matrix(vertices,vector<bool>(vertices,0)); // i lack here buddy ! 
//     int u,v;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v;
//         matrix[u][v]=1;
       
//     }
//     // lets print the map;
//     for(int i =0;i<vertices;i++){
//         for(int j =0;j<vertices;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Directed-weighted
int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<vector<int> >matrix(vertices,vector<int>(vertices,0)); // i lack here buddy ! 
    int u,v,weight;
    for(int i =0;i<edges;i++){
        cin>>u>>v>>weight;
        matrix[u][v]=weight;
        
    }
    // lets print the map;
    for(int i =0;i<vertices;i++){
        for(int j =0;j<vertices;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

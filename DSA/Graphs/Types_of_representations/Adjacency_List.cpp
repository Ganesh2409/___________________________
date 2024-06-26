#include<bits/stdc++.h>
using namespace std;


// // undirected-unweighted graph
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

//     for(int i =0;i<vertices;i++){
//         cout<<i<<"-->  ";
//         for(int j =0;j<adjlist[i].size();j++){
//             cout<<adjlist[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// // undirected weighted graph
// main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     int u,v,weight;
//     vector<pair<int,int> >adjlist[vertices];
//     for(int i =0;i<edges;i++){
//         cin>>u>>v>>weight;
//         adjlist[u].push_back(make_pair(v,weight));
//         adjlist[v].push_back(make_pair(u,weight));
//     }
    
//     for(int  i =0;i<vertices;i++){
//         cout<<i<<"--> ";
//         for(int j =0;j<adjlist[i].size();j++){
//             cout<<adjlist[i][j].first<<" "<<adjlist[i][j].second<<" ";
//         }
//         cout<<endl;
//     }



// }



// Directed un-weighted Graph

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
    }

    for(int i =0;i<vertices;i++){
        cout<<i<<" --> ";
        for(int j =0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    } 


}




// // Directed - Weighted Graph

// int main(){
//     int vertices,edges;
//     cin>>vertices>>edges;
//     vector<pair<int,int> >adjlist[vertices];
//     int u,v,weight;
//     for(int i =0;i<edges;i++){
//         cin>>u>>v>>weight;
//         adjlist[u].push_back(make_pair(v,weight));
//     }

//     for(int i=0;i<vertices;i++){
//         cout<<i<<" --> ";
//         for(int j =0;j<adjlist[i].size();j++){
//             cout<<adjlist[i][j].first<<" "<<adjlist[i][j].second<<" ";

//         }
//         cout<<endl;
//     }
//}
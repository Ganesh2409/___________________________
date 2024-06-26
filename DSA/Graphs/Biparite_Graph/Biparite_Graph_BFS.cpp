#include<bits/stdc++.h>
using namespace std;
/*
assume this like assigning the colors two different colors to the each adjacent vertices in the graph buddy !
if  both the adjacent vertices got the same color then there would be a cucle present and length of the cycle would be odd
adjacent colors needed to be different colors 
*/

// bool biparite_graph_BFS(int vertices,vector<int>adjlist[],vector<int>&freq){
//     queue<int>que;
//         freq[0]=0;
//         que.push(0);

//                     while(!que.empty()){
//                         int node = que.front();
//                         que.pop();
//                         for(int i =0;i<adjlist[node].size();i++){
//                             // color not assigned 
//                             if(freq[adjlist[node][i]] == -1){
//                                 freq[adjlist[node][i]] = (freq[node] +1) %2;
//                                 que.push(adjlist[node][i]);
//                             }
//                             else{
                                
//                             // color is assigned 
//                             if(freq[adjlist[node][i]] == freq[node]) return 0;

//                             }
                            

                            
//                         }
//                     }
        
// return 1;
// }

bool biprarate_graph(int vertices,vector<int>adjlist[],vector<int>&visited){
    queue<int>que;
    que.push(0);
    visited[0]=0; // color it as blue 
    while(!que.empty()){
        int node = que.front();
        for(int i=0;i<adjlist[node].size();i++){
            if(visited[adjlist[node][i]] == -1){
                // not visited means not colored 
                /// color the opposite color of its neighbour
                visited[adjlist[node][i]] = (visited[node] + 1) % 2;              // practice -1 
                que.push(adjlist[node][i]);
            }
            else{
                if(visited[adjlist[node][i]]  == visited[node]) return 0;
            }
        }
    }
    return 1;
}



int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<int>freq(vertices,-1);
    

    bool ans = false;
    for(int i=0;i<vertices;i++){
        if(freq[i] == -1){
        ans = biparite_graph_BFS(vertices,adjlist,freq);

        }
    }

    if(ans){
        cout<<"The graph is biparite which menas we can divide the graph into two disjoint sets "<<endl;
    }
    else{
        cout<<"The graph is not biparite"<<endl;
    }

    
}
/*
9 9
0 1
1 2
1 3
3 4
3 8
3 5
5 6
8 7
7 6
*/

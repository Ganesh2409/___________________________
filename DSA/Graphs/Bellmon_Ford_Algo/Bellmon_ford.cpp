#include<bits/stdc++.h>
using namespace std;

/*

Bellman-Ford is typically used on directed graphs
If the graph is undirected, you can still use Bellman-Ford by treating each undirected edge as two directed edges going in opposite directions.
bellman ford will explore the graph on the basis of edges
-> if a graoh consist of -Ve cysle then shrt path wont be possible because it will keep on changing for ever 
-> -ve cycle (sum of weights = -ve )
-> -ve weight undhi kabatti dijkstra algorithm pani cheyadhu 
-> this algo works in two steps 
1) update the weights or optimise the path cost for (v-1) times 

** --> why v-1 times ==> ans because we the dist[src]=0 right then u only need to find for the (v-1) edge so u will try to traverse the adjlist v-1 times


2) try to optimise the path for one more time on adjlist if u find any change in the array then cycle present return false (we wont able to find shrt paths)

*/  



class Solution{
public:


vector<int>bellman_ford(int vertices,int edges,vector<pair<int,int>>adjlist[],int src){
    vector<int>path(vertices,INT_MAX);
    path[src]=0;

    for(int i=0;i<vertices-1;i++){
        for(int u=0;u<vertices;u++){
            int v = adjlist[u].first;
            int wt = adjlist[u].second; 

            // if(path[u]== INT_MAX){
            //     continue;
            // }
            if(path[u]+wt < path[v]){
                path[v] = path[u]+ wt;
            }
        }

    }

    // Detect Cycle buddy 

    for(int i=0;i<vertices-1;i++){
        for(int u=0;u<vertices;u++){
            int v = adjlist[u].first;
            int wt = adjlist[u].second; 
            if(path[u]+wt < path[v]){
                vector<int>ans;
                ans.push_back(-1);
                return ans;
                
            }
        }

    }
    return path;

}
        



       
};
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<pair<int,int>>adjlist[vertices];
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjlist[u].push_back({v,weight}); // weighted directed graph 
    }
    int src;
    cin>>src;






 return 0;
}
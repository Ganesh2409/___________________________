// shrt --> shortest path in weighted DAG 
// oka node ni visit cheyadaniki multiple ways undochu so 
// exploring all possible paths wont be so fesiable so try to get the min path cost for the node
// where two edges comming in so in this way we can explore very efficiently 

// psedo code 
// 1 do the topological sort 
// 2 explore the each node in the sort by adding there corresponding weights 



#include<bits/stdc++.h>
using namespace std;
void topo_sort_DFS(int node ,vector<pair<int,int>>adjlist[],vector<int>&visited,stack<int>&st){
    visited[node]=1; // this is important while we explored the connecting path of a specific node so we need not to explore it again 
    for(int i=0;i<adjlist[node].size();i++){
        if(!visited[adjlist[node][i].first]){
           
            topo_sort_DFS(adjlist[node][i].first,adjlist,visited,st);
        }
        
    }
    st.push(node);
}



int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<pair<int,int>>adjlist[vertices];
    int u,v,weight;
    for(int i =0;i<edges;i++){
        cin>>u>>v>>weight;
        adjlist[u].push_back(make_pair(v,weight)); 
    }
    // int source,destination;
    // cin>>source>>destination ;
    stack<int>st;
    vector<int>visited(vertices,0);
    vector<int>dist(vertices,INT_MAX);
    
    dist[0]=0;

        topo_sort_DFS(0,adjlist,visited,st);
    
    while(!st.empty()){
        int node = st.top();
        st.pop();
       
       // look at the neighbours 
       for(int i=0;i<adjlist[node].size();i++){
           int neighbour = adjlist[node][i].first;
           int weight = adjlist[node][i].second;

           dist[neighbour] = min(dist[neighbour],weight+dist[node]);
       }

    }

    //the nodes i cant reach 

    for(int i=0;i<vertices;i++){
        if(dist[i]== INT_MAX)
        dist[i]=-1;
    }


    for(auto ele:dist){
        cout<<ele<<" ";
    }
    cout<<endl;






    
    
    
    return 0;
}


/*

8 8 
0 1 4
0 2 3
1 3 6
2 4 2
3 6 5
4 5 1
5 3 2
6 7 4


--> 0 4 3 8 5 6 13 17

*/
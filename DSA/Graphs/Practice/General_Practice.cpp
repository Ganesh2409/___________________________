#include<bits/stdc++.h>
using namespace std;


/*
void BFS(vector<int>adjlist[],vector<bool>&visited,queue<int>&que,vector<int>&ans){
    visited[0] = 1;
    que.push(0);
    // ans.push_back(0);
    while(!que.empty()){
        int curr = que.front();
        que.pop();
        ans.push_back(curr);

        for(int i=0;i<adjlist[curr].size();i++){
            if(!visited[adjlist[curr][i]]){
                que.push(adjlist[curr][i]);
                visited[adjlist[curr][i]] = 1;

            }
        }
    }
}
*/


/*
void DFS(int node,vector<int>adjlist[],vector<bool>&visited,vector<int>&ans){
    visited[node]=1;
    ans.push_back(node);
    for(int i=0;i<adjlist[node].size();i++){
        if(!visited[adjlist[node][i]]){
            // visited[adjlist[node][i]] =1; // u made this twicw buddy 
            DFS(adjlist[node][i],adjlist,visited,ans);
        }
    }

}
*/



// DTECTING CYCLE IN GRAPHS 

// UNDIRECTED GRAPHS --> DFS 

// if the same vertex is visited twice other than its parent then loop is present 

/*
bool detect_loop(int node,int parent ,vector<int>adjlist[],vector<bool>&visited){
    visited[node] = 1;
    for(int i=0;i<adjlist[node].size();i++){

        if(adjlist[node][i] == parent){
            continue;
        }
        if(visited[adjlist[node][i]] == 1){ // i missed here buddy 
            return 1;
        }
        if(!visited[adjlist[node][i]]){
            if(detect_loop(adjlist[node][i],node,adjlist,visited)){
                return 1;
            }
        }
    }
    return 0;
}
*/

// UNDIRECTED GRAPHS --> BFS


/*
bool detect_cycle_BFS(vector<int>adjlist[],vector<bool>&visited,queue<pair<int,int>>&que){
    que.push(make_pair(0,-1));
    visited[0]=1;
    while(!que.empty()){
        int node = que.front().first;
        int parent = que.front().second;

        que.pop();// i missed here 

        for(int i=0;i<adjlist[node].size();i++){

            if(adjlist[node][i] == parent){
                continue;
            }
            if(visited[adjlist[node][i]]){
                return 1;
            }
            if(!visited[adjlist[node][i]]){
                visited[adjlist[node][i]] =1;
                que.push(make_pair(adjlist[node][i],node));

            }
        }
    }
}
*/



// DIRECTED GRAPHS --> DFS
/*
bool detect_cycle_dfs(int node,vector<int>adjlist[],vector<bool>&path,vector<bool>&visited){
    visited[node] = 1;
    path[node]=1;
    // If I visit the same element twice in the same path then cycle is present
    //And for the optimization if for a path P1 I have explored some nodes And for other path P-2 I need to explore some nodes that i have explored already so why u need to check once more ! 

    for(int i =0;i<adjlist[node].size();i++){ // it is a Directed graoh so u need not to look for unvisited
        if(path[adjlist[node][i]]){
            return 1;
        }
        if(visited[adjlist[node][i]]){
            continue; // optimisation 
        }
        if(detect_cycle_dfs(adjlist[node][i],adjlist,path,visited)){
            return 1;
        }
    }
    path[node]=0; // i missed here buddy 
    return 0;
}
*/

// DIRECTED GRAPHS --> BFS(Khans Algorithm)
// lets calculate the indegreee of the nodes and then push the nodes into queue 
// whose in degree becomes 0 for each computation


/*
bool detect_cycle_BFS(int vertices,vector<int>adjlist[],vector<bool>&visited,queue<int>&que,vector<int>&ans){
    vector<int>indegree(vertices,0);
    for(int i =0;i<vertices;i++){
        for(int j=0;j<adjlist[i].size();j++){
            indegree[adjlist[i][j]]++;
            
        }
    }
    for(int i =0;i<indegree.size();i++){
        if(indegree[i] == 0){
            que.push(i);
        }
    }

    while(!que.empty()){
        int curr_node = que.front();
        que.pop();
        ans.push_back(curr_node);
        for(int i=0;i<adjlist[curr_node].size();i++){
                indegree[adjlist[curr_node][i]]--;
                if(!indegree[adjlist[curr_node][i]]) {
                    que.push(adjlist[curr_node][i]);
                }
        }
    }

    if(ans.size() == vertices){
        return true;
    }
    else{
        return false;
    }

}
*/
// Topological sort DFS
/*
void topological_sort_DFS(int node ,vector<int>adjlist[],vector<bool>&visited,stack<int>&st){
visited[node]=1;

for(int i=0;i<adjlist[node].size();i++){
    if(!visited[adjlist[node][i]]){
        topological_sort_DFS(adjlist[node][i],adjlist,visited,st);
    }
}
st.push(node);

}
*/


void topological_sort_BFS(vector<int>adjlist[],vector<int>&indegree,vector<int>&ans,queue<int>&que){
    // khans algorithm 

    for(int i=0;i<indegree.size();i++){
        if(indegree[i] == 0){
            que.push(i);
        }
    }
    while(!que.empty()){
        int node = que.front();
        ans.push_back(node);
        que.pop();

        for(int j=0;j<adjlist[node].size();j++){
            indegree[adjlist[node][j]]--;
            if(indegree[adjlist[node][j]] == 0){
                que.push(adjlist[node][j]);
            }
        }
    }



}

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist[vertices];
    int u,v;
    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
    }
    //vector<bool>visited(vertices,0);
    queue<int>que;
    vector<int>ans;
    stack<int>st;
    vector<int>result;
    // indegree 

    vector<int>indegree(vertices,0);
    for(int i=0;i<vertices;i++){
        for(int j=0;j<adjlist[i].size();j++){
            indegree[adjlist[i][j]]++;
        }
    }



    topological_sort_BFS(adjlist,indegree,ans,que);


    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;

/*
    // while(!st.empty()){
    //     result.push_back(st.top());
    //     st.pop();

    // }


    // for(int i=0;i<result.size();i++){
    //     cout<<result[i]<<" ";
    // }
    detect loop in directed   DFS graph  
    */
    // return 0;
}


/* 

5 6
0 1
0 2
1 2
1 3
2 4
3 4
*/
#include <bits/stdc++.h>
using namespace std;

/*
Graph is always needed to be connected 
Algo 
--> initialize a min heap that holds the weight, node, and parent 
--> check the adjacent nodes that we get out of min heap and verify if it is present in the MST; if so, ignore it (loop might occur)
--> parent array to draw the MST
*/

void prims_algo(vector<vector<pair<int, int>>>& adj, vector<int>& parent, vector<bool>& is_mst, int& cost) {
    // min heap declaration
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    pq.push({0, {0, -1}});
    while (!pq.empty()) {
        int wt = pq.top().first;
        int node = pq.top().second.first;
        int par = pq.top().second.second;
        pq.pop();
        
        // check whether the node is present in the MST to avoid looping
        if (!is_mst[node]) {
            is_mst[node] = true;
            cost += wt; // update the total cost
            parent[node] = par;

            // check the neighbors
            for (int j = 0; j < adj[node].size(); j++) {
                if (!is_mst[adj[node][j].first]) {
                    pq.push({adj[node][j].second, {adj[node][j].first, node}});
                }
            }
        }
    }
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    vector<vector<pair<int, int>>> adj(vertices);
    int u, v, w;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // undirected graph
        adj[v].push_back({u, w});
    }
    
    int cost = 0;
    vector<int> parent(vertices, -1);
    vector<bool> is_mst(vertices, false);

    prims_algo(adj, parent, is_mst, cost);

    cout << "The cost for the Minimum Spanning Tree is: " << cost << endl;
    cout << "The edges in the Minimum Spanning Tree are: " << endl;
    for (int i = 1; i < vertices; i++) {
        if (parent[i] != -1) {
            cout << parent[i] << " - " << i << endl;
        }
    }

    return 0;
}
/*


9 13
0 1 4
0 7 8
1 7 11
1 2 8
7 6 1
7 8 7
2 8 2
8 6 6
2 3 7
6 5 2
3 5 14
3 4 9
5 4 10
The cost for the Minimum Spanning Tree is: 39
The edges in the Minimum Spanning Tree are:
0 - 1
1 - 2
2 - 3
3 - 4
6 - 5
8 - 6
6 - 7
2 - 8

*/
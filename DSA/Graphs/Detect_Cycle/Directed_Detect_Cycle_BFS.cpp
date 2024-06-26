#include<bits/stdc++.h>
using namespace std;

int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>adjlist(vertices);
    int u,v;

    for(int i =0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
    }

    vector<bool>visited(vertices,0);


}

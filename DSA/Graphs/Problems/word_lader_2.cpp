#include<bits/stdc++.h>
using namespace std;


int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<int>arr[vertices];
    for(int i=0;i<edges;i++){

        int u,v;
        cin>>u>>v;
        arr[u]=v;

    }

    for(int i=0;i<edges;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// word lader -2  here we need to prin the path


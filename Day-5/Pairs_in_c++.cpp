#include <bits/stdc++.h>
using namespace std;

int main() {
int n ;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
        cin>>arr[i];
}

vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    v.push_back({arr[i],i});
}
for(auto ele:v){
    cout<<ele.first<<"-->"<<ele.second<<endl;
}
    return 0;
}
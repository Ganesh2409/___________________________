#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n =4;
    int arr[n]={4,1,3,2};
    sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    vector<int> v={3,1,2,4,5};
    sort(v.begin(),v.end(),comp);
    for(auto ele: v){
        cout<<ele<<" ";
    }
 return 0;
}
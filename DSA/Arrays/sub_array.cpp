// there are n*(n+1) /2 no of sub arrays and the size the might be vary from 0-- n;
// there are n-k+1 sub arrays of k sized 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<count++<<" -----> "<<" ";
            for(int k=i;k<=j;k++){ // it always starts from zero 
                cout<<arr[k]<<" ";

            }
            cout<<endl;
        }
    }
}
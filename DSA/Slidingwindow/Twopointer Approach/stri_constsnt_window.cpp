#include<bits/stdc++.h>
using namespace std;

void sum_of_all_windows(int arr[],int n,int k){
    int l =0,r=k-1;
    while(r < n){
        int sum =0;
        for(int i =l;i<=r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        l++;r++;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    sum_of_all_windows(arr,n,k);
    return 0;
    
}
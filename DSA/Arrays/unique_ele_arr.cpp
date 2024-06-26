#include<bits\stdc++.h>
using namespace std;

int unique(int arr[],int n){
    int unique =0;
    for(int i=0;i<n;i++){
        unique = unique ^ arr[i];
    }
    return unique;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int unique_ele = unique(arr,n);
    cout<<"The unique element in the clummsy element are : "<<unique_ele;
}
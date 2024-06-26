#include<bits/stdc++.h>
using namespace std;

vector<int> sum_of_all_windows(int arr[],int n,int k){
    vector<int>ans;
    int sum =0;
     int max_sum =INT_MIN;
    int l =0,r=k-1;
    while(r < n){
        int sum =0;
        for(int i =l;i<=r;i++){
            sum+=arr[i];
        }
        l++;r++;
        ans.push_back(sum);
    }

    return ans;
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

    vector<int> ans = sum_of_all_windows(arr,n,k);
    for(auto ele:ans){
        cout<<ele<<" ";

    }
    cout<<endl;
}
#include<bits\stdc++.h>
using namespace std;
void pair_sum(int arr[],int n,int sum){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                v.push_back({arr[i],arr[j]});
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<"Hello welcome home";
    for(int i=0;i<v.size();i++){
        cout << "(" << v[i].first << "," << v[i].second << ") ";
    }
    cout<<endl;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    pair_sum(arr,n,sum);
}
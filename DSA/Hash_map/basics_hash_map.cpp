#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void hash_map(vector<int>&arr){
    map<int,int>mp;
    for(auto ele:arr){
        mp[ele]++;
    }
    for(auto ele:arr){
    cout<<mp[ele]<<" ";
    }
    cout<<endl;
    
    for(auto ele:mp){
        cout<<ele.first<< " "<<ele.second<<endl;

    }
    }

       
};
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    Solution s;
    s.hash_map(arr);
 return 0;
}
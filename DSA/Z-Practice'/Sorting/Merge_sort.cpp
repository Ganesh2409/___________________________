// buddy abh suru hoga recursion 
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int> merge_2_sorted_arr(vector<int>&a,vector<int>&b){
    vector<int>ans ;
    int i =0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i] <= b[j]){
            ans.push_back(a[i++]);
        }
        else{
            ans.push_back(b[j++]);
        }
    }

    while(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }
    while(j<a.size()){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

vector<int> partition(vector<int>&v){
    int n = v.size();
    if(n <= 1){
        return v;
    }
    vector<int>left(v.begin(),v.begin()+v.size()/2);
    vector<int> right(v.begin()+v.size()/2,v.end());
    left = partition(left);
    right = partition(right);
    return merge_2_sorted_arr(left,right);
}
       
};
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    Solution s;
    vector<int> ans = s.partition(v);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"sucessfull"<<endl;

return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
          
void Selection_sort(vector<int>&v){
    for(int  i = 0;i<v.size();i++){
        for(int j =i+1;j<v.size();j++){
            if(v[i] >v[j]) swap(v[i],v[j]);
        }
    }
          
}
       
};
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    Solution s;
    s.Selection_sort(v);
    for(auto ele :v){
        cout<<ele<<" ";
    }
 return 0;
}
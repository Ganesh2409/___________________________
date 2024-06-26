#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
          
void bubble_sort(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        for(int j =0;j+1<v.size();j++){
            if(v[j] > v[j+1]) swap(v[j],v[j+1]);

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
    s.bubble_sort(v);
    for(auto ele :v){
        cout<<ele<<" ";
    }
 return 0;
}
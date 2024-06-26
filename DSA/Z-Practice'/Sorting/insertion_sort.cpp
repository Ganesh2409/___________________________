#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
          
void insertion_sort(vector<int>&v){
    for(int i =1;i<v.size();i++){
        int current = v[i];
        int j = i-1;

        while(j>=0 && v[j] >current){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = current;
    }
}
       
};
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int  i =0;i<n;i++){
        cin>>v[i];
    }
    Solution s;
    s.insertion_sort(v);
    for(auto ele :v){
        cout<<ele <<" ";
    }
 return 0;
}
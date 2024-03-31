#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
  // Lets Use the two pointer approach buddy 
  
                // >> Ran into TLE << 
                
                //   map<int,int>mp;
                //   for(int i =0;i<n;i++){
                //       mp[a[i]]++; // TC:- O(n * longn)
                //   }
                //   for(int i=0;i<m;i++){
                //       mp[b[i]]++;  // TC:- )(m * logn)
                //   }
                //   int ans =0;
                  
                //   for(auto ele:mp){
                //       if(ele.second >0){ 
                //           ans++; // Tc:- O(n+m)
                //       }
                //   }
                //   return ans; // >> Total TC :-O((n+m)logn)
                
        set<int>s;
                
        for(int i =0;i<n;i++){
            s.insert(a[i]);
        }
        for(int j =0;j<m;j++){
            s.insert(b[j]);
        }
        vector<int>ans(s.begin(),s.end());
        return s.size();
      
  }
};
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j =0;j<m;j++){
        cin>>b[j];
    }
    Solution s;
    int ans = s.doUnion(a,n,b,m);
    cout<<" No of elements in the union of two arrays "<<ans<<endl;
    return 0;
}
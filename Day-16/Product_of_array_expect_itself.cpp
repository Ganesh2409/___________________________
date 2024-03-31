#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
          vector<int>  prefix_arr(vector<int>&arr){
              int n = arr.size();

              vector<int>prefix_ans;

              prefix_ans.push_back(arr[0]);
            

              for(int i =1;i<n;i++){
                  int product = arr[i] * prefix_ans[i-1];
                  prefix_ans.push_back(product);
              }
              
            return prefix_ans;
          }




          vector<int>suffix_arr(vector<int>&arr){
              int n = arr.size();
              vector<int>suffix_ans(n);
              suffix_ans[n-1] = arr[n-1];
              for(int i =n-2;i>=0;i--){
                  suffix_ans[i] = arr[i]*suffix_ans[i+1];
              }
            return suffix_ans;
          }
       
};
int main()
{
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    vector<int>prefix_ans =  s.prefix_arr(arr);
    vector<int>suffix_ans = s.suffix_arr(arr);

    vector<int>product_array(n);
    product_array[0] = suffix_ans[1];
    product_array[n-1] = prefix_ans[n-1];
    for(int i =1;i<n-1;i++){
        product_array[i] = prefix_ans[i-1] *suffix_ans[i+1];
    }


    cout<<"The prefix_array should be :";
    for(auto ele:prefix_ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    cout<<"The suffix_array should be :";
    for(auto ele:suffix_ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"The product_array should be :";
    for(auto ele:product_array){
        cout<<ele<<" ";
    }


 return 0;
}
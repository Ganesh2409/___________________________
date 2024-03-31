#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // approach -1  TC :- )(N^2) lets optimise it 
        // vector<int>ans;

        // for(int i =0;i<nums.size();i++){
        //     for(int j =i+1;j<nums.size();j++){
        //         if(nums[i] + nums[j] == target){
        //            ans.push_back(i);
        //            ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;


        // Apporach -2  Tc:- O(N)
        map<int,int>mp;
        int i =0;
        vector<int>ans;

        for(auto ele:nums){
            mp[ele] = i++;
        } // in the map the eles are stored like (ele1:0,ele2:1,ele3:2......elen:n-1)
          // if elements are ={2,3,4,5,6} --> [2->0,3->1,4->2,5->3,6->4]
        for(int i =0;i<nums.size();i++){
            if(mp.find(target - nums[i])!=mp.end() && mp[target-nums[i]]!=i){
                    ans.push_back(i);
                    ans.push_back(mp[target-nums[i]]);
                    break;
            }
        }
        return ans;
        
    }
};

 int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }
     int target;
     cin>>target;

     Solution s;
     vector<int>ans = s.twoSum(arr,target);

     for(auto ele:ans){
         cout<<ele<<" "; 
     }
     cout<<endl;


 }
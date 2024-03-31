// https://leetcode.com/problems/binary-search/description/

// class Solution { // --> without recursion buddy !
// public:
//     int search(vector<int>& nums, int target) {
//         int n= nums.size();
//         int start = 0;
//         int end = n -1;
//         while(start <= end){ // if start == end means there is only one element buddy u need to handle this case seperately 
//             int mid = (start +end) /2;// here u missing to update the mid value every time so focus on it buddy 
//             if(nums[mid] == target) {
//                 return  mid;
//             } 
//             else if(nums[mid] > target){
//                 end = mid-1;
//                 return 
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return -1;
        
//     }
// };

// __________________________________ RECURSIVE BS  _________________________________________
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
int recursion_BS(vector<int>&arr,int left,int right,int target){
    int ans;
    if(left > right) return -1;
    int mid = left + (right - left)/2;
    if(arr[mid] == target) return mid; // we definatley reach to the each and every ele in arr wih this process of shifing the mid 
    if(arr[mid] > target){
        right = mid-1;
        return recursion_BS(arr,left,right,target);
    }
    else{
        left = mid+1;
        return recursion_BS(arr,left,right,target);
    }
          
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
    int target ;
    cin>>target;
    int left =0;
    int right = n-1;
    
    Solution recur_BS;

    int recursive_bs = recur_BS.recursion_BS(arr,left,right,target);
    cout<<"yeah i found the element at index :"<<recursive_bs<<endl;
 return 0;
}
class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int n= nums.size();
        int assumed_res = nums[n-1] - nums[0];

        int left = nums[0] + k;
        int right = nums[n-1] - k;

        for(int i=0;i<n-1;i++){

            int maxi = max(nums[i] + k ,right);

            int mini = min(nums[i+1] - k ,left);

            assumed_res = min(assumed_res,maxi - mini);
            
        }
        return assumed_res;
        
    }
};

// Lin :- https://leetcode.com/problems/smallest-range-ii/
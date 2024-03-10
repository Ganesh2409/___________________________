//link :- https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =0;
        int min =nums[0];
        int max = nums[nums.size()-1];
        for(int i =1;i<nums.size()-1;i++){
            if(nums[i]>min && nums[i]<max) count++;
        }
        return count;
    }
};


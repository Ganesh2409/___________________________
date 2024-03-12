class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>smaller;
        for(int i=0;i<nums.size();i++){
            int smaller_count=0;
            for(int j =0;j<nums.size();j++){
                if(j!=i && nums[i] > nums[j]){
                    smaller_count++;
                }

            }
            smaller.push_back(smaller_count);
        }
        return smaller;
    }
};

// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
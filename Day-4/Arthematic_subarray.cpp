// link :- https://leetcode.com/problems/arithmetic-subarrays/


class Solution{
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l,
                                          vector<int>& r) {
        vector<bool> ans;
        int i = 0, j = 0;
        for (int i = 0; i < l.size(); i++) {
            int start = l[i];
            int end = r[i];
            vector<int> subarray(nums.begin() + start, nums.begin() + end + 1); // we adding nums.begin()which is zero index to the end so it will exclude the traget elemnet to get it we will include +1 
            sort(subarray.begin(),subarray.end());
            int diff = subarray[1] - subarray[0];
            bool isArithmetic = true;

            // Check if all differences are the same
            for (int j = 2; j < subarray.size(); ++j) {
                if (subarray[j] - subarray[j - 1] != diff) {
                    isArithmetic = false;
                    break;
                }
            }

            ans.push_back(isArithmetic);
        }

        return ans;
    }
};
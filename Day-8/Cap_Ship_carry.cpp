// link :- https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:
    int req_days(int cap, vector<int>& weights) {
        int curr_day = 1;
        int current_load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] <= cap - current_load) {
                current_load += weights[i];
            } else {
                curr_day++;
                current_load = 0;
                current_load += weights[i];
            }
        }
        return curr_day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int min_cap = *max_element(weights.begin(), weights.end());
        int max_cap = 0;
        for (int i = 0; i < weights.size(); i++) {
            max_cap += weights[i];
        }
        int ans=-1;
        while (min_cap <= max_cap) {
            int mid_cap = min_cap+(max_cap - min_cap) / 2;
            int required_days = req_days(mid_cap, weights);
            if (required_days <= days) {
                ans = mid_cap; // Here i have used the BS buddy 
                max_cap = mid_cap - 1;
            } else {
                min_cap = mid_cap + 1;
            }
        }
        return ans;
        //         for(int i=min_cap;i<=max_cap;i++){
        //             int required_days = req_days(i,weights);
        //             if(required_days <= days) return i;
        // // i think we are using the linear search right we know there is some
        // monotonicity in the range so try to use BS
        //         }
        //         return -1;
    }
};

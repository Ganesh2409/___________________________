#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        int start = 0;
        int end = nums.size() - 1;
        
        while (start <= end && nums[start] == sorted[start]) {
            start++;
        }
        
        while (start <= end && nums[end] == sorted[end]) {
            end--;
        }
        
        return end - start + 1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution s;
    int ans = s.findUnsortedSubarray(arr);
    cout << ans << endl;

    return 0;
}
/*

link :- https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

implementation :-2 --> 

        for(int i=0;i<n;i++){
            if(checking[i]!=nums[i]){
                if(start == -1){
                    start = i;
                }
                else end =i;   
            }
        }

*/
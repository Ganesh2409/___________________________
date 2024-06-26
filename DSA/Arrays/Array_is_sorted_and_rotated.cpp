class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
};

// if the array is rotated ra then the second if fails and the count  becomes 1 
// if the array is not rotated and its sorted then the count becomes 1 
// u havd the privilage to rotate some array elements then thye might be sorted ?
// [2,1,3,4] for this example the count becomes 2 so it should retun false buddy ! 
// pina unna array ni ele rotate chesina adhi sorted order loki radhu ra ! 

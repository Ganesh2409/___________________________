#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[start] <= nums[mid]) { 
                if (nums[start] <= target && target <=nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }

            else{
                if(nums[mid] < target && target <= nums[end]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the variable to search :"<<endl;
    int target=0;
    Solution solution;

    int index = solution.search(arr,target);
    cout<<index<<endl;
    return 0;
}
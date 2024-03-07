// https://leetcode.com/problems/binary-search/description/

class Solution { // --> without recursion buddy !
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int start = 0;
        int end = n -1;
        while(start <= end){ // if start == end means there is only one element buddy u need to handle this case seperately 
            int mid = (start +end) /2;// here u missing to update the mid value every time so focus on it buddy 
            if(nums[mid] == target) {
                return  mid;

            } 
            else if(nums[mid] > target){
                end = mid-1;
                return 
            }
            else{
                start = mid+1;
            }
        }
        return -1;
        
    }
};

class Solution { // --> with recursion buddy ! 
public:
    int search_helper(vector<int> nums,int left ,int right,int target){
        if(left > right){ // we searched the entire array still we dont find it 
            return -1;
        }
        else{
            int mid = (left + right )/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                right = mid-1;
                return search_helper(nums,left,right,target);
            }
            else{
                left = mid +1;
                return search_helper(nums,left,right,target);
            }
         }


    }
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int start = 0;
        int end = n -1;
        return search_helper(nums,start,end,target);
    }
};
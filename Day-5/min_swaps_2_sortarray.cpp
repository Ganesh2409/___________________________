//https://www.geeksforgeeks.org/problems/minimum-swaps/1

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums){
	    // used a pair and its a reverse approach buddy 
	    vector<pair<int,int>>v;
	    int n = nums.size();
	    for(int i=0;i<n;i++){
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    int ans =0;
	    
	    for(int i=0;i<n;i++){
	        if(i == v[i].second){
	            continue;
	        }
	        else{
	            ans++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return ans;
	}
};
/*

ex:- 1 2 5 3 7 6

v[1-0,2-1,5-2,3-3,7-4,6-5]--> 1(element)  -  0(index)

we arrange v in such a way such that we get the initial unsorted array (1 2 5 3 7 6)


*/
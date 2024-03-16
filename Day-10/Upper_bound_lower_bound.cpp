#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    int upper_bound(vector<int>&arr,int target){
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int ans;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] > target){ // only strictly  the 1st occurance grater than target 
                ans = mid; // keep an eye on how the saving and searching the fesiable ans works 
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }




        int lower_bound(vector<int>&arr,int target){
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int ans;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid] >= target){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }


};

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    Solution find_bounds;
    int lower_target = find_bounds.lower_bound(arr,target);
    int upper_target = find_bounds.upper_bound(arr,target);

    cout<<"The first occurance(index) of ele which is greater than or equal to target is :"<<lower_target<<endl;

    cout<<"The first occurance(index) of ele which is greater than or  target is :"<<upper_target<<endl;

 return 0;
}
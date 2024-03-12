#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

    int kadens_algo(int arr[],int n){
        int max_sum=INT_MIN;
        int bag_sum =0;
        for(int i=0;i<n;i++){
            bag_sum+=arr[i];
            max_sum = max(max_sum,bag_sum);
            if(bag_sum <0){
                bag_sum =0;
            }
        }
        return max_sum;

    }
};
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    int maxxi_sum_of_subarray = obj.kadens_algo(arr,n);
    cout<<maxxi_sum_of_subarray<<endl;


 return 0;
}
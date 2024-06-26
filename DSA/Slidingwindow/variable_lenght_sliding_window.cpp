#include<bits/stdc++.h>
using namespace std;
int main() // lets explore this problem Using maximum consicutive ones III proble in leetcode 
//---> we need to find the maximum window tht consist maximum k zeros 
// increment the window by adding elements in to the window and if the window is invalid (zero_count>k) then try to shrink the winodw 
// while shrinking the window keep an eye on which element is going out of the window if the leftinng element would be 0 then zero_count -- 
// this process continue until the window becomes valid again 
{
    int n;
    cin>>n;
    int zero_count=0;
    int max_window_ones=INT_MIN; 
    int k; // maximum zeros 
    cin>>k;
    int left =0;
    int arr[n];
    for(int i=0;i<n;i++){ // just pass 1 's and 0's
        cin>>arr[i];
    }
    for(int right=0;right<n;right++){
        if(arr[right]==0){
            zero_count++;
        } // if our window is invalid then try to make it valid again 
        while(zero_count > k){
            if(arr[left] == 0){
                zero_count--;
            }
            left++;
        }
        max_window_ones = max(max_window_ones,right-left+1);
       
    }
    cout<<max_window_ones<<endl;

 return 0;
}
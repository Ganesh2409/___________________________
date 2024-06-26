#include<bits/stdc++.h>
using namespace std;


// Apporach -1
// vector<int>rotate_array(vector<int>&arr){
//     int left = arr[0];
//     for(int i =1;i<arr.size();i++){
//         arr[i-1] = arr[i];
//     }
//     arr[arr.size()-1] = left;
//     return arr;
// }

// Approach -3 function 
void reverse(vector<int>&arr,int start ,int end){
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }

}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    // for(int i =1;i<=k;i++){
    //     rotate_array(arr);
    // }
    // return arr;


    // APPROACH -2 :

    // for(int i =0;i<k;i++){
    //     arr.push_back(arr[i]);
    // }
    // arr.erase(arr.begin(),arr.begin()+k);
    // return arr;

    // Approach -3 :


    reverse(arr,0,k-1);
    reverse(arr,k,arr.size()-1);
    reverse(arr,0,arr.size()-1);
    return arr;
}



/*

// Love Babbar's Solution --> Approach -4:

// here we are using the extra space !

vector<int> ans(n);
for(int i =0;i<n;i++){
    ans[(i+k)%n] = nums[i];
}
nums = ans;

return nums;

*/
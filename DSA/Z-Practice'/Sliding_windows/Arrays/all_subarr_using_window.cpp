#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
void sub_arr_sliding(vector<int>&arr){
    for(int windows =1;windows <= arr.size();windows++){ // n sized windows 
    for(int start = 0;start <arr.size()-windows;start++){
        for(int i =start;i<start + windows;i++){
            cout<<arr[i]<<" "
        }
        cout<<endl;
    }

    }
}
       
};
int main()
{
    int n ;
    cin>>n;
    
 return 0;
}
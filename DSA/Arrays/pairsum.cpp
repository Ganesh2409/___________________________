//approach 1 
#include<bits\stdc++.h>
using namespace std;
pair<int,int> pair_sum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                return {arr[i],arr[j]};
            }
        }
    }
    return {-1,-1};

}
// here only one indices is returned 
int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;
   auto indices=  pair_sum(arr,n,sum);
    cout<<indices.first<<" "<<indices.second<<endl;

}
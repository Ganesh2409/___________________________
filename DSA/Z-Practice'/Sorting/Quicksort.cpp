#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void quicksort(vector<int>&arr,int left,int right){
        if(left>=right) return;
        int partition_index = partition(arr,left,right);

        quicksort(arr,left,partition_index-1);
        quicksort(arr,partition_index+1,right);
    }
    public:

    int partition(vector<int>&arr,int left,int right){
        int pivot_ele = arr[right];

        vector<int>smaller,bigger;
        for(int i =left;i<right;i++){
            if(arr[i] < pivot_ele){
                smaller.push_back(arr[i]);

            }
            else{
                bigger.push_back(arr[i]);
            }
        }
        int index = left; 
        
        for(int i =0;i<smaller.size();i++){
            arr[index++] = smaller[i];
        }
        int pivot_index_returned = index; 

        arr[index++] = pivot_ele;

        for(int i = 0;i<bigger.size();i++){
            arr[index++] = bigger[i];

        }
        return pivot_index_returned;

    }
       
};
int main()
{

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    int left =0;
    int right =n-1;


    Solution s;
    s.quicksort(v,left ,right);
    for(auto ele:v){
        cout<<ele<<" ";
    }

    

 return 0;
}

/* if u choose the pivot value randomly the TC would be vraies but how ?

*/
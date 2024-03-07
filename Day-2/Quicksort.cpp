//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
class Solution
{   // Bduudy this alogorithm is very fuzzy and it wount uses an extra space and it only uses the recursive stack spce 
// in the best and avg case the T.C should be --> O(N long N ) 
// inworst case it would be O(N^2) 
// So try to use the pivot as any random value in the array 

    public:
    //Function to sort an array using quick sort algorithm.
    
    void quickSort(int arr[], int l, int r)
    {
        if(l >= r) return; // this states that the arrayy should be of size 1 or empty 
        // this is the base case to ur sorting the left and right pivot elements 
        
        int pivot_id = partition(arr,l,r);
        
        quickSort(arr,l,pivot_id-1);
        quickSort(arr,pivot_id+1,r);
        // code here
    }
    
    
    public:
    int partition (int arr[], int l, int r)
    {
        // it will select a random alue as a pivot and arranges the left and right eles of pivot such that pivot comes to it right place 
        int pivotId = rng() % (r - l + 1) + l;
	    swap(arr[r], arr[pivotId]);
	    
	    int pivot_ele = arr[r]; // we swapped the right value with the some random value in the code 
	    
	    // lets create a smaller and larger arrays to store the values grater and smaller to pivot buddy 
	    vector<int> smaller,bigger;
	    for(int i=l;i<r;i++){ // we are stating from the left and right 
	        if(arr[i] >= pivot_ele){
	            bigger.push_back(arr[i]);
	        }
	        else{
	            smaller.push_back(arr[i]);
	        }
	    }
	    
	     // now just putting back the element sback into the arr 
	     int index =l;
	     
	     for(int i =0;i<smaller.size();i++){ //places elements smaller than pivot elememnst buddy 
	         arr[index++] = smaller[i];
	         
	     }
	     
	     int pivot_index_returned = index; //places pivot element 
	     arr[index++] = pivot_ele;
	     
	     for(int i =0;i<bigger.size();i++){ //places elements smaller than pivot elememnst buddy 
	         arr[index++] = bigger[i];
	         
	     }	     
	     return pivot_index_returned;
        
       // Your code here
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
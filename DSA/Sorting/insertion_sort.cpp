//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n){
            for(int i =1;i<n;i++){ // because first index element is already sortd check for the rest 
            int current_num = arr[i];
            // now we are traversing in the sorted array from the backwards 
            int j =i-1;
            
            // left shift / create some space for the element to be inserted in it scorrect position 
            while(j>=0 && arr[j]>current_num){
                arr[j+1] = arr[j]; // shifting the elements such that space is created for the element we need toput
                j--;
            }
            // what if we encounter the array value  is less than the current_num value  
            //or the j valu is went out of bound like the value that need to be inserted is negative such that the ele imn sorted array is all +Ve 
            arr[j+1]=current_num;
            
        }
        //code here
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
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
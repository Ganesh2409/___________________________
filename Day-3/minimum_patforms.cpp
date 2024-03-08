    // link :- https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1 


class Solution{
    public:
    
    int findPlatform(int arr[], int dep[], int n)
    {
        
        sort(arr,arr+n);
        sort(dep,dep+n);
        int j =0;
        int station =1;
        for(int i=1;i<n;i++){ // here we are iterating through the arrival times of train from index 1 or the next train
        // if the arrival time is greater than dep time of train having in the platform then this train levase before the train comes
        // so we reuse the platform for cumming train 
        // 
            if(arr[i]>dep[j]){
                j++;
            }
            else{
                station++;
            }
        }
        return station;
        
    	// Your code here
    }
};
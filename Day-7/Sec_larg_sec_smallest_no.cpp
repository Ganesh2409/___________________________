 int find_2nd_largest(vector<int>&arr,int n){
    
    int largest=arr[0];
    int second_largest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            
            second_largest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
    }



 int find_2nd_smallest(vector<int>&arr,int n){
    
    int smallest=arr[0];
    int second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
        
        second_smallest =smallest;
        smallest = arr[i];
        }
        else if(smallest < arr[i] && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
    }




vector<int> getSecondOrderElements(int n, vector<int> a) {
    int second_smallest = find_2nd_smallest(a,n);
    int second_largest = find_2nd_largest(a, n);

    return {second_largest,second_smallest};   
}



/*

link :- https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?leftPanelTabValue=PROBLEM

*/
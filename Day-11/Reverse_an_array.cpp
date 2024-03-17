class Solution
{
   public:
    int findSum(int A[], int N)
    {
       int min_ele = INT_MAX;
       int max_ele = INT_MIN;
       for(int i =0;i<N;i++){
           min_ele = min(min_ele,A[i]);
           max_ele = max(max_ele,A[i]);
       }
       int sol = min_ele + max_ele;
        return sol;
    }
    

};

// Approach -2 

class Solution
{
   public:
    int findSum(int A[], int N)
    {
       int min_ele = INT_MAX;
       int max_ele = INT_MIN;
       for(int i =0;i<N;i++){
           min_ele = min(min_ele,A[i]);
           max_ele = max(max_ele,A[i]);
       }
       int sol = min_ele + max_ele;
        return sol;
    }
    

};

// Approach -3 



class Solution
{
   public:
    int findSum(int A[], int N)
    {
        vector<int>v(N);
        for(int i=0;i<N;i++){
            v[i] = A[i];
        }
        
        int max = *max_element(v.begin(),v.end());
        int min = *min_element(v.begin(),v.end());
        
        int sol = min + max;
        return sol;
    }
    

};
#include<bits/stdc++.h>
using namespace std;

/* let the given function would be f(x) = x+ x/10 + x/100 + x/1000
// the function is monotonically increasing how do u know then ? simple f(x) < f(x+1) right 
1+ x + (x+1)/10 + (x+1)/100 --> in the beginig we always have +1 and (x+1) /10 we can also write it as x/10 + 1/10 
so we had an extra 1/10 so finally when we compare f(x) ,f(x+1) we conclude that f(x+1) is greater in the same way f(x+2) is greater than f(x+1)
so in this way i conclude BS is applicable buddy 

*/

int func(int x)
{
    int ans =0;
    while(x>0){
    ans+= x;
    x=x/10;
    }
    return ans;
    
}


int main()
{
    int n;
    cin>>n;
    // BINARY SEARCH BUDDY 
    /*
    TC:- O(logn)^2
    */
    int ans =-1;
int start = 0;
int end = n;
while(start<=end){
    int mid = start + (end-start)/2;
    int f_mid = func(mid);
    if(f_mid==n){
        ans = mid;
        break;
    }
    else if(f_mid>n){
        end=mid-1;
    }
    else{
        start = mid+1;
    }
}
cout<<ans;

    // LINEAR SEARCH
    // for(int i=0;i<10000000;i++){ // here we might applied the linear search buddy its look amazing 
    // // TC : --> O(n*logn) where log n is the tc of the inner function in the for loop func(i) 
    // // we know that the function is monotonic in nature right then why dont we use binary search buddy  
    //     if(func(i) == n){
    //         cout<<i<<endl;
        
    //     }
    // }

    
 return 0;
}

/*
You know how to get the result of n + n/10 + n/100 right like 1234 --> 1234 + 123 + 12+ 1 yes i do 


*/
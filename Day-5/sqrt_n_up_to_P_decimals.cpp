#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
double mySqrt(int x,int p) {
        if(x==1) return 1;
        double s=0,e=x;
        double precision = pow(10,-p);
        double ans =0.0;
       while(e-s >=precision){
           double mid = s + (e-s)/2; 
           if(mid * mid < x){ 
               ans = mid;
               s=mid;
           }
           else{
               e = mid;
           }
       }
       return ans;
        
    }
};

int main(){
    int n, p;
    cin >> n >> p;
    Solution sol;
    double ans = sol.mySqrt(n, p);
    // We go the answer which is correct till 2 decimal places
    // We need to get rid of remaining decimal places
    cout<<fixed<<setprecision(p)<<ans<<endl; // --> fixed and setprecision are very important buddy 

}
/*

lets try to understand the TC :- we are keep on dividiing the number so the series hoes like this 

n ,n/2,n/4,n/8 ...... 1 ....(10 ^ -p) for the precision 
---------------------- --> till here we know the Tc:- would be long n;
from 1 to 10^-p it might be 3.3p refer notes for better understanding 
so overall Tc should be O(log n + p)
*/
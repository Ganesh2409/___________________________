
// frog Jump problem  Greddy Approach works 

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

       
};
int main()
{
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i =0;i<n;i++){
        cin>>d[i];
    }
    int k ;
    cin>>k;

    int curr_stand =0,min_jumps=0;
    while(curr_stand < n){
        int next_stand = curr_stand,curr_distance=0; // because it is standing in the starting position 
        // this wile loop is trying to search for the possible inxdex values such that hey will add up to the value less than its capacity to jump 
        // it only breaks when it encounters the distance it never cross with it sjumping ability 
        // collect the best possible indexices such that it will cover all of them in a single hop 
        // after the hop the distance tends to zero and it will start collecting best possible indices form the position it had reached till now 
        while(next_stand+1<=n && curr_distance + d[next_stand]  <= k){
            curr_distance+=d[next_stand];
            next_stand++;
        }
        if(next_stand == curr_stand){
            cout<<-1<<endl;
            return 0;
        }
        curr_stand = next_stand;
        min_jumps++;
    }

    cout<<min_jumps;
 return 0;
}
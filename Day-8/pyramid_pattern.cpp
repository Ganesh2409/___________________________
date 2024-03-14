#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {

for(int i=0;i<n;i++){
    for(int j = 0;j<n-i-1;j++){
        cout<<" ";
        
    }
    for(int k =0;k<2*i+1;k++){
        cout<<"*";
    }
    for(int l = 0;l<n-i-1;l++){
        cout<<" ";
    }
    cout<<endl;
}

}


int main(){
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;



}
/* THE LOGIC GOES lIKE this buddy 

--> first spaces and then stars and then spaces 
--> in this pattern the left stars and right stars are equal 
--> for printing stars the formula is like 2*i-1;
--> for spaces it goes like this >> n - i -1 just think about it buddy !
*/

// how the change in capacity in vector while  the input is increasing 
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    for(int i=0;i<=40;i++){
        cout<<v.size() << " --> " <<v.capacity()<<endl;
        v.push_back(i);
    }
    
    return 0;
}
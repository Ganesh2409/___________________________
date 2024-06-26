#include<bits/stdc++.h>
using namespace std;

int main() {
    int siz;
    cin>>siz;
    int arr[siz]={0};
    int krr[siz];
    for(int i=0;i<siz;i++){
        cin>>krr[i];
    }

    for(int i=0;i<siz;i++){
    arr[krr[i]-1]++;
        }
    
    for(auto kle:arr){
        cout<<kle<<" ";
    }
    
    return 0;
}
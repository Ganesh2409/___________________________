// if u give me the row and column index  i will give u the row and  column elements
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i =0;i<m;i++){
    for(int j =0;j<n;j++){
    cin>>arr[i][j];
    }
    }
    int j =2; // column 
    for(int i =0;i<m;i++){
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;


    int i =2; // row 
    for(int j =0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

    return 0;
}
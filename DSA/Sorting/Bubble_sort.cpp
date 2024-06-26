#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n-1;i++){
    int k =0;
    for(int j=0;j<n-i-1;j++){
        k++;
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        cout<<k<<endl;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}

 return 0;
}
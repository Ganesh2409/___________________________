#include<bits\stdc++.h>
using namespace std;
// hey buddy to find the duplicate ele in the element which is repeating only once then u will create a mask and then perform the xor operation to the main array 
// [1,2,3,4,5,2]
// what if if we have 2 duplicate values buddy 

int duplicate(int arr[],int n){
    int duplicate = 0;
    for(int i=0;i<n;i++){
        duplicate = duplicate ^ arr[i];
        cout<<"Duplicate:"<<duplicate<<endl;
    }
    cout<<"Loop outside duplicate value"<<duplicate;
    for(int j =1;j<n;j++){
        duplicate = duplicate ^ j ;
        cout<<""<< arr[j]<<endl;
        cout<<"Duplicate:"<<duplicate<<endl;
    }
    cout<<"final valu of the duplicate"<< duplicate <<endl;
    return duplicate;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dup_ele = duplicate(arr,n);
    cout<<dup_ele<<endl;
    return 0;
}
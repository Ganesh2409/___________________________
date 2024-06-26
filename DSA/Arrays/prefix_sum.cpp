#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prefix;
    vector<int> sufix;
    int j;
    int k;
    for(int i=0;i<n;i++){
        cin>>j;
        prefix.push_back(j);
    }
    
    // suffix vector buddy 
    for(int i=0;i<n;i++){
        cin>>k;
        sufix.push_back(k);
    }
    
    for(int i=1;i<prefix.size();i++){
        prefix[i] = prefix[i-1] + prefix[i]; // this is used to create the prefix_sum buddy 
    }

    for(int i=sufix.size()-2;i>=1;i--){
        sufix[i] = sufix[i+1] + sufix[i];  // starting from the last element and mving in untill the first ele in mean while thelast to second  is added with its beside to right 
        // which means last_2 second + last_1
    }
    cout<<"The prefix sum  should be(from begining buddy )"<<endl;

    for(auto ele:prefix){
        cout<<ele<<" ";
    }
    cout<<endl;
cout<<"The suffix  elements should be( from last to begining )"<<endl;
    for(auto ele:sufix){
        cout<<ele<<" ";
    }
    cout<<endl;

    



}
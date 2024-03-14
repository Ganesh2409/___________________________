#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }


    cout << "The elements in the vector using iterator : ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";                             // Here it is an iterator which iterates in the range of v.begin(),v.end()
cout<<endl;


    cout<<" The elements of the vector : ";
    for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"size of the vector "<<v.size()<<endl; 
    cout<<"capacity of the vector "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"The final capacity of the vector "<<v.capacity()<<endl;
    cout<<"Front element of vector "<<v.front()<<endl;
    cout<<"Back ele of vector "<<v.back()<<endl;
    cout<<"2 nd way to get back ele of vector  "<<v[v.size()-1]<<endl;
    
    cout << "Inserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
                for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;


    cout<<" Deleting an elements at the begining "<<endl;
    v.erase(v.begin());
            for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Erasing the last element in the vector"<<endl;
    // cout<<"alternative way of erasing the ele"<<v.erase(v.back()); --> U cat do like this due to because u need to pass an iterator not a value 
    v.erase(v.end()-1);
        for(auto ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    if(v.empty()){
        cout<<"Yes the vector is empty "<<endl;
    }
    else{
        cout<<" NO the vetcor is not empty "<<endl;
    }




 return 0;
}

/* 

In the context of vector the size and capacity are two different things to deal with 
like if the capacity is full then the vector will create a new one with twice its previous capacity and copies the old one into new one 
like-->
c-2 s-2 the vector is full and u try to add  a new ele in the vector v 
c-4 s-3 new vector of twice the capacity of the previous one is created 
*/
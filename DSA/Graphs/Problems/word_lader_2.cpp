#include<bits/stdc++.h>
using namespace std;
// here we just needed to print the path buddy ! 

vector<vector<string>> word_ladder_2(string startword,string endword,vector<string>&ladder,vector<vector<sring>>&ans){
    // store the elements in unordered_set so finf=dingit would be easy 
    unordered_set<string>st(ladder.begin().ladder.end());

    if(st.find(endword) == st.end()) return {}; // if end word is not prenent in the list

    queue<vector<string>>q;
    q.push({startword});

    vector<string>usedonlevel;
    usedonlevel.push_back(startword);
    int level =0;

    while(!q.empty()){
        vector<string>vec = q.front();
        q.pop();

        if(vec.size()>level){
            level++;
            
        }
    }

}


int main(){
    int size;
    cin>>size;
    vector<string>ladder(size);
    string words;

    for(int i=0;i<size;i++){
        cin>>words;
        ladder.push_back(words);
    }
    vector<vector<string>>ans; // prints the final shrtest path



}


#include<bits/stdc++.h>
using namespace std;


int alter_sequence(vector<string>&wordlist,string startword,string endword){
    queue<pair<string,int>>que;
    que.push({startword,1});


    unordered_set<string>st(wordlist.begin(),wordlist.end());
    st.erase(startword);

    while(!que.empty()){
        string word = que.front().first;
        int steps = que.front().second;

        que.pop();

        if(word == endword) return steps;

        for(int i=0;i<word.size();i++){
            char original_char = word[i];

            for(char ch ='a';ch<='z';ch++){
                word[i]=ch;
                if(st.find(word)!=st.end()){
                    st.erase(word);
                    que.push({word,steps+1});
                }
            }
            word[i]=original_char;
        }


    }
    return 0;




}


int main(){
    string startword,endword;
    cin>>startword>>endword;
    int len_wordlist;
    cout<<"enter the size of wordlsit: ";
    cin>>len_wordlist;
    vector<string>wordlist;
    for(int i=0;i<len_wordlist;i++){
       string k;
       cin>>k;
       wordlist.push_back(k);
    }
      int ans = alter_sequence(wordlist,startword,endword);

      cout<<ans<<" ";

      cout<<endl;
      return 0;


    

}
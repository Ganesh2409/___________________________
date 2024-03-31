#include<bits/stdc++.h>
using namespace std;
          
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        
        for(int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
        }
        
        for(int j = 0; j < t.size(); j++) {
            mp2[t[j]]++;
        }

        if(mp1.size() != mp2.size()) {
            return false;
        }

        for(int i = 0; i < s.size(); i++) {
            if(mp1[s[i]] != mp2[s[i]]) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    Solution sol;
    bool ans = sol.isAnagram(s,t);
    cout<<"The given two strings are valid anagrams(Yes /No)"<<ans<<endl;
     return 0;
}
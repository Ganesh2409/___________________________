#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
bool is_matching(string a,string b){
    if((a=="(" && b == ")")||(a=="[" && b=="]") || (a=="{" && b =="}")){
        return true;
    }
    else{
        return false;
    }
}
bool is_valid(vector<string>paren){
    stack<string>s;
    for(int i =0;i<paren.size();i++){
        if(paren[i]=="("||paren[i]=="{"||paren[i]=="["){
            s.push(paren[i]);
        }
        else{
            if(s.empty()) return false;
            if(is_matching(s.top(),paren[i])){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();

}
       
};
int main() {
    vector<string> paren = {"(","{", "[","]", "}", ")"};
    Solution s;
    bool result = s.is_valid(paren);
    if(result) {
    cout << "Yes, it's valid";
} else {
    cout << "No, it's not valid";
}

return 0;

}
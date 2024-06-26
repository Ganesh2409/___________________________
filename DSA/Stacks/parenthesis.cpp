#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
// bool is_valid_1(vector<string>paren){
//     stack<string>s;
//     // >> 
//     if(paren.size()==0) return false; 
//     for(int i=0;i<paren.size();i++){
//         if(paren[i]=="("){
//             s.push(paren[i]);
//         }
//         else{
//              if(s.empty()||s.top() !="("){
//             return false;
//             }
        
//             s.pop();
//         }
//     }
//     if(s.empty()) return true;
//     else{
//         return false;
//     }
// }      


bool is_valid_2(vector<string>paren){
    int close_count =0;
    int open_count = 0;
    for(int i =0;i<paren.size();i++){
        if(paren[i]=="(") open_count++;
        else close_count++;
        if(close_count>open_count) return false;
    }
    return true;
}
};





int main() {
    vector<string> paren = {"(",")", "(",")", "(", ")"};
    Solution s;
    bool result = s.is_valid_2(paren);
    if(result) {
    cout << "Yes, it's valid";
} else {
    cout << "No, it's not valid";
}

return 0;

}

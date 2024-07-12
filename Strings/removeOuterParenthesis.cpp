#include<bits/stdc++.h>
using namespace std;

string removeOuterParenthesis(string s){
    int i = 0, depth = 0;
    string res;
    while (i < s.length())
    {
        if(s[i] == '('){
            if (depth > 0)
            {
                res.push_back(s[i]);
            }
            depth++;
        }
        else{
            depth--;
            if(depth > 0)
                res.push_back(s[i]);
        }
        i++;
    }
    return res;
    
} 

int main(){
    string s = "(()())(())(()(()))";
    cout << removeOuterParenthesis(s);
    return 0;
}
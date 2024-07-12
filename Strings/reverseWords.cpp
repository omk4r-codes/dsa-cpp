#include<bits/stdc++.h>
using namespace std;

string removeSpaces(string s){
    int i = 0, j = 0;
    while(i < s.length())
    {
        if(s[i] == ' ' && (i == 0 || s[i - 1] == ' ')){
            i++;
        }
        else{
            s[j] = s[i];
            j++;
            i++;
        }
    }
    s.resize(j);
    if(!s.empty() && s.back() == ' ')
        s.pop_back();
    
    return s;
}

void reverseWordsInStr(string s){
    s = removeSpaces(s);
    reverse(s.begin(), s.end());
    int i =0, j = 0;
    for (j = 0; j <= s.length(); j++)
    {
        if(s[j] == ' ' || j == s.length()){
            reverse(s.begin()+i, s.begin()+j);
            i = j + 1;
        }
    }
    
    cout << s;
}

int main(){
    string s = "       Hi I    am       Omkar                                 ";
    reverseWordsInStr(s);
    return 0;
}
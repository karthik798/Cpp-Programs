#include <bits/stdc++.h>

using namespace std;

char max_occ_char (string s){
    map <char,int>mp;
    for (auto ch : s){
        mp[ch]++;
    }
    char maxchar = s[0];
    int maxcount = maxchar;
    for (auto ans : mp){
        if (ans.second > maxcount){
            maxchar = ans.first;
            maxcount = ans.second;
        }
    }
    return maxchar;
}


int main () {
    string s = "abaaabc";
    char result = max_occ_char(s);
    cout << result;
}
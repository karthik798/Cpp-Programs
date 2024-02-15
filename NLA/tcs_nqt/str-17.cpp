#include <bits/stdc++.h>

using namespace std;

void print_dupli (string s){
    set<char>stand;
    set<char>dupli;
    for (auto ch : s){
        if (stand.find(ch) == stand.end()){
            stand.insert(ch);
        }
        else {
            dupli.insert(ch);
        }
    }
    for (auto pri : dupli){
        cout << pri << " " ;
    }
}


int main (){
    string s = "abcdabc";
    print_dupli(s);
}
#include <bits/stdc++.h>

using namespace std;

int main (){
    // log n
    // 
    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    auto it = s.find("abc");
    if ( it != s.end()){
        s.erase(it);
    }
    s.erase("bcd");
    // o (1) hashmap
    unordered_set<int>as;
    // multiset - priority queue
    multiset<string>cd;
    cd.find("abc"); // first occurence
    cd.erase("abc"); // all occurences will be deleted 
    auto it = cd.find("abc");
    if ( it != cd.end()){
        cd.erase(it);   // only 1 occurenc will be deleted 1st one 
    }
}
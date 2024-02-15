#include <bits/stdc++.h>

using namespace std;

bool is_palindrome (string str){
    int start = 0;
    int end = str.length() - 1;
    while (start < end){
        if ( str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


int main() {
   string str = "arorm";
   cout << boolalpha <<  is_palindrome(str) <<  endl;
}
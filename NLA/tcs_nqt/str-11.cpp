#include<bits/stdc++.h>


using namespace std;

void count_characters(string str){
    map<char,int> mp;
    for (char ch : str ){
        mp[ch]++;
    }
    for (auto entry : mp){
        cout << "Character : " << entry.first << ", frequency : " << entry.second << endl;
    }
}


int main(){
    string str = " abcweqavb";
    count_characters(str);
}
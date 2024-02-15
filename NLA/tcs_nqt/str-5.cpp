#include <bits/stdc++.h>


using namespace std;


void remove_whitespaces(string &str){
    for (int i = 0 ; i < str.length() ; i++)
    {
        if (str[i] == ' ')
        {
        str.erase(i,1);
        i--;
        }
    }
}

int main () {
    string str = "hello world";
    remove_whitespaces(str);
    cout << "Result : " << str << endl;
}
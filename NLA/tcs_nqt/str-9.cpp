#include <bits/stdc++.h>

using namespace std;


string remove_paranthesis (string str){
    string ans;
    for (int i = 0 ; i < str.length() ; i++){
        if (str[i] != '(' && str[i] != ')')
        {
            ans.push_back(str[i]);
        }
    }
return ans;
}


int main () {
    string str = "a+b+(c+d)";
    string result = remove_paranthesis(str);
    cout << "The Final String is : " << result << endl; 

}
#include <bits/stdc++.h>

using namespace std;

void sum_of_numbers (string str){
    int sum = 0;
    for (int i  = 0 ; i < str.length() ; i++){
        if (isdigit(str[i])){
            sum += str[i] - '0';
        }
    }
    cout << "Sum of numbers in the string : " << sum << endl;
}


int main (){
string str = "123abc";
sum_of_numbers(str);
return 0;


}
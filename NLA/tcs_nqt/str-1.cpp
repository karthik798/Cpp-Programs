#include <iostream>

using namespace std;

void solve (string str,int length){
int vowels = 0 , consonants = 0 , whitespaces = 0 ;
for ( int i = 0 ; i < length ; i++){
    str[i] = tolower(str[i]);
}
for ( int i = 0 ; i < length ; i++){
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        vowels++;
    else if (str[i] >= 'a' && str[i] <= 'z')
        consonants++;
    else if (str[i] == ' ')
        whitespaces++;    
}
cout <<  "Vowels : "  << vowels  <<  endl;
cout <<  "Consonants : "  << consonants  <<  endl;
cout <<  "whitespaces : "  << whitespaces  <<  endl;
}

int main () {
    string str = "Hi How are you";
    int length = str.length();
    solve(str,length);
    return 0;
}
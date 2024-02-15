#include <bits/stdc++.h>

using namespace std;

string str_to_bin(string str){
    string b;
    for (int i = 0 ; i < str.length() ; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            b.push_back('0');
        else
            b.push_back('1');    
    }
    return b;
}

int bin_to_dec(string bin) {
    int decimal = 0;
    int base = 1; // 2^0
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') 
            decimal += base;
        base *= 2;
    }
    return decimal;
}


int main ()
{
string str = "aebcdsaws";

string binaryString = str_to_bin(str);
    
cout << "Binary String: " << binaryString << endl;
    
int decimalValue = bin_to_dec(binaryString);
    
cout << "Decimal Value: " << decimalValue << endl;

}
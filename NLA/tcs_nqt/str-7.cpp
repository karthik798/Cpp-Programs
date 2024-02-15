#include <iostream>
#include <string>


using namespace std;


void reverse (string str){
    int start = 0;
    int end  = str.length() - 1;
    while (start < end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout << "The Reverse of the String is : " << str << endl;
}

int main () {
    string str  = "rter";
    reverse(str);
    // cout << "The Reverse String is : " << str << endl;    
}
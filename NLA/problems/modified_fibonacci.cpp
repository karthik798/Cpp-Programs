#include <iostream>
#include <string>

using namespace std;

string modi_fibo(const string& s) {
    string result;
    int a = 0, b = 1,c,sum = 0;
    for (char ch : s) {
        result += ch;
        result += to_string(b);
        sum += b;
        c = a + b;
        a = b;
        b = c;
    }
    result = to_string(sum) + result;
    return result;
}

int main() {
    string input = "beautiful";
    string output = modi_fibo(input);
    cout << output << endl;  
    return 0;
}

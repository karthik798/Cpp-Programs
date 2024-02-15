#include<bits/stdc++.h>

using namespace std;

void remove_characters(string &str) {
    for (int i = 0; i < str.length();) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            i++;
        } else {
            str.erase(i, 1);
        }
    }
}

int main() {
    string str = "striver@!  213eqw13w12ab";
    remove_characters(str);
    cout << "Result: " << str << endl;
}

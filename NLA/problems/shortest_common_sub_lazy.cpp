#include <bits/stdc++.h>

using namespace std;

string s1, s2, s3;

int fun(int i, int j, int k, string s) {
    if (i == s1.length() || j == s2.length()) {
        if (s3.length() == s.length())
            s3 = min(s, s3);
        else if (s3.length() < s.length())
            s3 = s;
        return k;
    }
    if (s1[i] == s2[j])
        return fun(i + 1, j + 1, k + 1, s + s1[i]);
    return max(fun(i + 1, j, k, s), fun(i, j + 1, k, s));
}

int main() {
    cin >> s1 >> s2;

    fun(0, 0, 0, "");

    cout << s3;
    return 0;
}

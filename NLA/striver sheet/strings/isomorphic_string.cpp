#include <iostream>
#include <unordered_map>

bool isIsomorphic(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) {
        return false; // Strings must be of the same length to be isomorphic.
    }

    std::unordered_map<char, char> sToT, tToS;

    for (int i = 0; i < s.length(); ++i) {
        char charS = s[i];
        char charT = t[i];

        // Check the mapping from s to t.
        if (sToT.find(charS) != sToT.end() && sToT[charS] != charT) {
            return false;
        }

        // Check the mapping from t to s.
        if (tToS.find(charT) != tToS.end() && tToS[charT] != charS) {
            return false;
        }

        // Create the mappings.
        sToT[charS] = charT;
        tToS[charT] = charS;
    }

    return true;
}

int main() {
    std::string s = "egg";
    std::string t = "add";

    if (isIsomorphic(s, t)) {
        std::cout << "The strings are isomorphic.\n";
    } else {
        std::cout << "The strings are not isomorphic.\n";
    }

    return 0;
}

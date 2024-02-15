#include <iostream>
#include <unordered_set>

std::string removeDuplicates(const std::string& input_str) {
    std::unordered_set<char> char_seen;
    std::string result;

    for (char ch : input_str) {
        if (char_seen.find(ch) == char_seen.end()) {
            char_seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    std::string input_string = "Hello There";
    std::string output_string = removeDuplicates(input_string);

    std::cout << "Original String: " << input_string << std::endl;
    std::cout << "String with Duplicates Removed: " << output_string << std::endl;

    return 0;
}

#include <iostream>
#include <string>

bool canBecomeGoal(const std::string& s, const std::string& goal) {
    if (s.length() != goal.length()) {
        return false;
    }

    std::string concatenated = s + s;

    return concatenated.find(goal) != std::string::npos;
}

int main() {
    std::string s = "abcde";
    std::string goal = "cdeab";

    if (canBecomeGoal(s, goal)) {
        std::cout << "Yes, " << s << " can become " << goal << " after some shifts.\n";
    } else {
        std::cout << "No, " << s << " cannot become " << goal << " after some shifts.\n";
    }

    return 0;
}

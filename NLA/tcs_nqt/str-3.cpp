#include <iostream>

using namespace std;

void remove_vowels(string str, int length) {
  string result;
  for (int i = 0; i < length; i++) {
    str[i] = tolower(str[i]);
  }
  for (int i = 0; i < length; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
      result += str[i];
    }
  }
  cout << "The Result is " << result << endl;
}

int main() {
  string str = "abcde";
  int length = str.length();
  remove_vowels(str, length);
  return 0;
}

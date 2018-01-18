#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include "simpletests.h"

std::string reverse_string(std::string s) {
  std::string reverse(s.begin(), s.end());
  return s;
}

bool is_Palindrome(std::string s) {
  std::string temp = s;
  reverse_string(temp);
  if (temp == s) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  test_eq(is_Palindrome("lagerregal"),true);
  simpletests::test_result();

  std::string filename = "words.txt";

  std::ifstream input(filename);

  if(!input) {
    std::cerr << "404 File not found";
    return 1;
  }
  else {
    std::string line;

    while(std::getline(input, line)) {
      test_eq(is_Palindrome(line), true);
    }
  }

  return 0;

}

#include <iostream>
#include <algorithm>
#include <string>
#include "simpletests.h"

std::string reverse_string(std::string s) {
  std::string reverse(s.start(), s.end());
  return s;
}

bool is_Palindrome(std::string s) {
  std::string temp = s;
  std::string reverse(temp.start(), temp.end());
  if (temp = s) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  
}

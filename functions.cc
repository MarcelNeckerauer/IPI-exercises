#include "functions.h"
#include <iostream>

std::string reverse_string(std::string s) {
  int n = s.length();

  for (int i = 0; i < n / 2; i++) {
    std::swap(s[i], s[n - i -1]);
  }
  return s;
}

bool is_Palindrome(std::string s) {
  std::string temp = reverse_string(s);
  return s == temp;
}

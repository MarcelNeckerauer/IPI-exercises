#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include "simpletests.h"
#include "functions.h"

int main() {
  test_eq(is_Palindrome("lagerregal"),true);
  test_eq(is_Palindrome("marcel"), true);
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

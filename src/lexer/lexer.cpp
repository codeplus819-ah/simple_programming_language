#include "lexer.h"
#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> tokenize(std::string content){
  std::vector<std::string> tokens {};
  std::string currentToken {};
  char specialCahr {};
  for (size_t i = 0; i < content.length(); i++) {
    char currentChar = content[i];
    if (currentChar == ' ' || currentChar == '\n') {
      if (currentToken != "") {
        tokens.push_back(currentToken);
        currentToken = "";
      }
      continue;
    }
    currentToken.push_back(currentChar);
    if (i == content.length()-1) {
      tokens.push_back(currentToken);
    }
  }
  for (size_t i = 0; i < tokens.size(); i++) {
    std::cout << tokens[i] << '\n';
  }
  
  return tokens;
};

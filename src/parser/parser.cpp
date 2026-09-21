#include <vector>
#include <string>
#include <any>
#include "../syntax/syntax.h"
#include "./parser.h"

std::vector<std::any> parse(std::vector<std::string> tokens){
  std::vector<std::any> commands{};
  bool started_comand = false;
  for (size_t i = 0; i < tokens.size(); i++) {
    std::string token = tokens[i];
    if (!started_comand) {
      if (token == "let") {
        variables_syntax<std::string> var = {true, tokens[i + 1], tokens[i + 3]};
        commands.push_back(var);
        i += 4;
      }
      if (token == "const") {
        variables_syntax<std::string> var = {true, tokens[i + 1], tokens[i + 3]};
        commands.push_back(var);
        i += 4;
      }
    }
  }
  return commands;
}
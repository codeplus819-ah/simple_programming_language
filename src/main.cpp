#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include "./lexer/lexer.h"

namespace fs = std::filesystem;

int main(int argc, char* const argv[]) {
  if (argc >= 2) {
    const std::string command = argv[1];
    if (command == "-help") {
      std::cout << "use this commands:\n-help: for help menu\n-v,--version: for version\n<filename>: run the code\n";
    } else if (command == "-v" || command == "-version") {
      std::cout << "version: 1.0.0\n";
    } else {
      if (fs::exists(command)) {
        std::ifstream file(command, std::ios::in);
        std::string content{};
        std::getline(file, content, '\0');
        tokenize(content);
      } else {
        std::cout << "there is not this file\n";
      }
    }
  } else {
    std::cout << "use this commands:\n-help: for help menu\n-v,--version: for version\n<filename>: run the code\n";
  }
  
  return 0;
}

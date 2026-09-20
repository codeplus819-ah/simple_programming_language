#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char* const argv[]) {
  std::string filename {};
  if (argc >= 2) {
    const std::string command = argv[1];
    if (command == "-help") {
      std::cout << "use this commands:\n-help: for help menu\n-v,--version: for version\n<filename>: run the code\n";
    } else if (command == "-v" || command == "-version") {
      std::cout << "version: 1.0.0\n";
    } else {
      filename = command;
      if (fs::exists(filename)) {
        
      } else {
        std::cout << "there is not this file\n";
      }
      
    }
  } else {
    std::cout << "use this commands:\n-help: for help menu\n-v,--version: for version\n<filename>: run the code\n";
  }
  
  return 0;
}

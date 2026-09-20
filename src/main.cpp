#include <iostream>
#include <string>

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
    }
  } else {
    std::cout << "use this commands:\n-help: for help menu\n-v,--version: for version\n<filename>: run the code\n";
  }
  
  return 0;
}

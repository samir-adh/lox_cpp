#include "lox.hpp"
#include <fstream>
#include <ios>
#include <iostream>
#include <iterator>

int main(int argc, char **argv) {
  if (argc > 2) {
    std::cout << "Usage : lox_cpp [script]\n";
  } else if (argc == 2) {
    runFile(argv[1]);
  } else {
    runPrompt();
  }
  return 0;
}
void runFile(const char *fileName) {
  std::cout << "Running : " << fileName << std::endl;
  std::ifstream infile{fileName, std::ios_base::binary};
  std::string content{std::istreambuf_iterator<char>{infile},
                      std::istreambuf_iterator<char>{}};
  run(content);
}

void runPrompt() { std::cout << "Not implemented yet, stay tuned...\n"; }

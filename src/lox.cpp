#include <iostream>
#include "lox.h"

void runFile(const char *fileName) {
  std::cout << "Running : " << fileName << std::endl;
}

void runPrompt() { std::cout << "Not implemented yet, stay tuned...\n"; }

int main(int argc, char **argv) {
  if (argc > 2) {
    std::cout << "Usage : lox_cpp [srcipt]\n";
  } else if (argc == 2) {
    runFile(argv[1]);
  } else {
    runPrompt();
  }
  return 0;
}

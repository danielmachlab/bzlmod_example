#include <ctime>
#include <iostream>
#include "zlib.h"

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

void check_zlib_version() {
    // ZLIB_VERSION is defined in zlib.h
    std::cout << ZLIB_VERSION << std::endl;
}

int main(int argc, char** argv) {
  std::cout << "Hello World!" << std::endl;
  print_localtime();
  check_zlib_version();
  return 0;
}
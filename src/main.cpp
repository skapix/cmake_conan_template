#include <CLI/CLI.hpp>

#include <iostream>
#include "util.h"

int main(int argc, const char *argv[]) {
  CLI::App app;

  std::string name;
  app.add_option("-n,--name", name, "Name to greet")->required();

  CLI11_PARSE(app, argc, argv);

  std::cout << "Hello " << name << "!!!" << std::endl;
  std::cout << "Factorial(10) = " << Factorial(10) << std::endl;
}
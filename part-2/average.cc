// Steve Choi
// soondae@csu.fullerton.edu
// @steeevechoi
// Partners: @evanp19

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  double total{0.0};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  for (std::string const& argument : arguments) {
    if (argument == arguments.at(0)) {
      continue;
    }
    double value = std::stod(argument);
    total += value;
  }
  double average{};
  average = total / (static_cast<int>(arguments.size() - 1));
  std::cout << "Average"
            << " = " << average << "\n";
  return 0;
}
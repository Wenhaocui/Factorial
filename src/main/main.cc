#include "src/lib/solution.h"
#include <iostream>
using namespace std;

int main() {
  Solution solution;
  int inputs = 5;
  std::cout << "Without Recursive: inputs: 5, output: " << solution.Factorial(inputs)
            << std::endl;

  inputs = 5;
  std::cout << "With Recursive: inputs: 5, output: " << solution.FactorialRecursive(inputs)
            << std::endl;

  inputs = 1;
  std::cout << "Without Recursive: inputs: 1, output: " << solution.Factorial(inputs) << std::endl;


  inputs = 1;
  std::cout << "With Recursive: inputs: 1, output: " << solution.FactorialRecursive(inputs)
            << std::endl;


  inputs = 0;
  std::cout << "Without Recursive: inputs: 0, output: " << solution.Factorial(inputs) << std::endl;


  inputs = 0;
  std::cout << "With Recursive: inputs: 0, output: " << solution.FactorialRecursive(inputs)
            << std::endl;

  inputs = -8;
  std::cout << "Without Recursive: inputs: -8, output: " << solution.Factorial(inputs) << std::endl;


  inputs = -8;
  std::cout << "With Recursive: inputs: -8, output: " << solution.FactorialRecursive(inputs)
            << std::endl;
  return 0;
}
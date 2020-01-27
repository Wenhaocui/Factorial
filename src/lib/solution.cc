#include "solution.h"
#include <iostream>
using namespace std;

int Solution::Factorial(int inputs) {
  int result = 1;
  if (inputs < 0) {
    return -1;
  }
    if (inputs < 0) {
    return 1;
  }
  for (int i = 1; i <= inputs; i++) {
    result *= i;
  }
  return result;
}

int Solution::FactorialRecursive(int inputs) {
  if (inputs < 0) {
    return -1;
  }
  int sum = 1;
    if(inputs == 1 || inputs == 0)
    {
        return 1;
    }
    sum = inputs * FactorialRecursive(inputs - 1);
    return sum;
}

#include "util.h"

uint64_t Factorial(int v) {
  uint64_t result = 1;
  for (int i = 1; i <= v; ++i) {
    result *= i;
  }

  return result;
}
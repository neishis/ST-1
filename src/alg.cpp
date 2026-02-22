// Copyright 2025 UNN-CS
#include "alg.h"
#include <cstdint>
#include <stdexcept>


bool checkPrime(uint64_t value) {
  if (value <= 1) return false;
  if (value <= 3) return true;
  for (uint64_t i = 2; i < value; i++) {
    if (value % i == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 1) throw std::invalid_argument("Аргумент не должен быть меньше 1");
  uint64_t count = 0;
  uint64_t var = 1;

  while (count < n) {
        var++;
        if (checkPrime(var)) {
            count++;
        }
    }
  return var;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t var = value + 1;
  while (!(checkPrime(var))) {
    var++;
  }
  return var;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i)) sum += i;
  }
  return sum;
}

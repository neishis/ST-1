// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"
#include <stdexcept>


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(16);
  uint64_t expected = 41;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(6);
  uint64_t expected = 10;
  EXPECT_EQ(expected, res);
}
TEST(st1, checkPrime1) {
  bool res = checkPrime(10);
  EXPECT_EQ(false, res);
}
TEST(st1, checkPrime2) {
  bool res = checkPrime(17);
  EXPECT_EQ(true, res);
}
TEST(st1, checkPrime3) {
  bool res = checkPrime(1);
  EXPECT_EQ(false, res);
}
TEST(st1, checkPrime4) {
  bool res = checkPrime(-16);
  EXPECT_EQ(false, res);
}
TEST(st1, nPrime1) {
  EXPECT_THROW(nPrime(0), std::invalid_argument);
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(6);
  uint64_t expected = 13;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(10);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(37);
  uint64_t expected = 41;
  EXPECT_EQ(expected, res);
}

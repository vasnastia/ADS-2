// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  for (uint16_t k = 0; k < n; k++) {
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  uint16_t res = 0;
  if (n == 0) {
    return 1;
  } else {
    res = n * fact(n - 1);
  }
  return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n)/ fact(n);
}

double expn(double x, uint16_t count) {
  double res = 1;
  for (uint16_t k = 1; k <= count; k++) {
    res += calcItem(x, k);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t k = 1; k <= count; k++) {
      res += pown(-1, i-1) * calcItem(x, (k * 2) - 1);
    }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 0;
  for (uint16_t k = 1; k <= count; k++) {
      res += pown(-1, i-1) * calcItem(x, (k * 2) - 2);
    } 
  return res;
}

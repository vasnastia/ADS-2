// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  for (int k = 0; k < n; k++){
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  int res = 0;
  if (n == 0) {
    return 1;
  } else {
    return res = n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
  double res = 0;
  res = pown(x, n)/ fact(n);
  return res;
}

double expn(double x, uint16_t count) {
  double res = 1;
  for (int k = 1; k <= count; k++){
    res += calcItem(x, k);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = x;
  for (int k = 2; k <= count; k++) {
    if (pown(-1, k - 1) == 1){
      res += calcItem(x, (k * 2) - 1);
    } else {
      res -= calcItem(x, (k * 2) - 1);
    }
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 1;
  for (int k = 2; k <= count; k++) {
    if (pown(-1, k - 1) == 1){
      res += calcItem(x, (k * 2) - 2);
    } else {
      res -= calcItem(x, (k * 2) - 2);
    }
  }
  return res;
}

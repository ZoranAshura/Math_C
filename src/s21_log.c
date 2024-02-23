#include "s21_math.h"

long double s21_log(double x) {
  int count = 0;
  long double sum = 0;
  long double prev = 0;

  if (x != x) {
    sum = x;
  } else if (x == S21_INFINITY) {
    sum = S21_INFINITY;
  } else if (x == -S21_INFINITY) {
    sum = S21_NAN;
  } else {
    if (x < 0) {
      sum = S21_NAN;
    } else if (x != 0) {
      for (; x >= S21_E; x /= S21_E, count++) continue;

      for (int i = 0; i < 100; i++) {
        prev = sum;
        sum = prev + 2 * (x - s21_exp(prev)) / (x + s21_exp(prev));
      }
    } else {
      sum = -S21_INFINITY;
    }
  }
  return (sum + count);
}
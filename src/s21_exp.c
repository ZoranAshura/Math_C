#include "s21_math.h"

long double s21_exp(double x) {
  long double add_value = 1;
  long double result = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (s21_fabs(add_value) > S21_EPS) {
    add_value *= x / i;
    i += 1;
    result += add_value;
    if (result > DBL_MAX) {
      result = S21_INFINITY;
      break;
    }
  }
  if (flag == 1) {
    if (result > DBL_MAX)
      result = 0;
    else
      result = 1 / result;
  }

  return result;
}
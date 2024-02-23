#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double ret = 0;
  if (s21_isinf(x) || s21_isnan(x) || s21_isnan(y) || y == 0)
    ret = S21_NAN;
  else if (s21_isinf(y))
    ret = x;
  else {
    long div = x / y;
    ret = x - div * y;
  }
  return ret;
}
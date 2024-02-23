#include "s21_math.h"

long double s21_sqrt(double x) {
  long double ret = 0;
  if (x < 0 || s21_isnan(x)) {
    ret = S21_NAN;
  } else if (s21_isinf(x) || x == S21_NEGZERO) {
    ret = x;
  } else {
    ret = s21_pow(x, 0.5);
  }
  return ret;
}
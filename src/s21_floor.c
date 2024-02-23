#include "s21_math.h"

long double s21_floor(double x) {
  long double ret = (long)x;
  if (s21_isinf(x) || x == 0 || x == S21_NEGZERO || s21_isnan(x) ||
      x == DBL_MAX) {
    ret = x;
  } else {
    if (x < 0 && x != ret) {
      ret -= 1;
    }
  }
  return ret;
}

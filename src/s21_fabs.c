#include "s21_math.h"

long double s21_fabs(double x) {
  long double ret = 0;
  if (s21_isnan(x)) {
    ret = S21_NAN;
  } else if (x == S21_NEGZERO) {
    ret = 0.0;
  } else if (x == S21_INFINITY || x == -S21_INFINITY) {
    ret = S21_INFINITY;
  } else {
    ret = (x < 0) ? -x : x;
  }
  return ret;
}

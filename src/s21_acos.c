#include "s21_math.h"

long double s21_acos(double x) {
  long double acos = 0;
  if (x == 0) {
    acos = S21_PI / 2;
  } else if (x == 1) {
    acos = 0;
  } else if (0 < x && x < 1) {
    acos = s21_atan(s21_sqrt(1 - x * x) / x);
  } else {
    acos = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  }
  return acos;
}
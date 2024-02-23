#include "s21_math.h"

long double s21_pow(double x, double y) {
  long double result = 0.;
  long double copy_x = x;
  if (y == 0) {
    result = 1;
  } else if (x == 1) {
    result = 1;
  } else if (x == -1 && (y == S21_INFINITY || y == -S21_INFINITY)) {
    result = 1;
  } else if ((x == S21_INFINITY && y == S21_NAN) ||
             (x == -S21_INFINITY && s21_fmod(y, 2) == 0 && y > 0)) {
    result = S21_INFINITY;
  } else if (x < 0 && (long long int)y != y) {
    result = S21_NAN;
  } else if (copy_x < 0) {
    copy_x = -copy_x;
    result = s21_exp(y * s21_log(copy_x));
    if (s21_fmod(y, 2) != 0) {
      result = -result;
    }
  } else {
    result = s21_exp(y * s21_log(x));
  }
  return result;
}

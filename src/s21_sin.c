#include "s21_math.h"

long double s21_factorial(long long int x) {
  if (x == 1 || x == 0) return 1;
  if (x < 0) return S21_INFINITY;
  long double res = x * s21_factorial(x - 1);
  return res;
}

long double s21_sin(double x) {
  long double res = 0, upper = 0, lower = 0;
  x = s21_fmod(x, 2 * S21_PI);
  for (int i = 0; i < 15; i++) {
    upper = s21_pow(-1, i) * s21_pow(x, 2 * i + 1);
    lower = s21_factorial(2 * i + 1);
    res += upper / lower;
  }
  return res;
}

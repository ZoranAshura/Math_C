#include "s21_math.h"

long double s21_atan(double x) {
  long double atan = 0;
  if (x == 1) {
    atan = S21_PI / 4;
  } else if (x == -1) {
    atan = -S21_PI / 4;
  } else if (x == S21_INFINITY) {
    atan = S21_PI / 2;
  } else if (x == -S21_INFINITY) {
    atan = -S21_PI / 2;
  } else if (-1 < x && x < 1) {
    for (int i = 0; i < 5000; i++) {
      atan = atan + s21_pow(-1, i) * s21_pow(x, 1 + (2 * i)) / (1 + (2 * i));
    }
  } else {
    for (int i = 0; i < 5000; i++) {
      atan = atan + s21_pow(-1, i) * s21_pow(x, -1 - (2 * i)) / (1 + (2 * i));
    }
    atan = S21_PI * s21_sqrt(x * x) / (2 * x) - atan;
  }
  return atan;
}

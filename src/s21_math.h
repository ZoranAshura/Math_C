#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>

#define S21_INFINITY __builtin_inf()
#define S21_NAN __builtin_nan("")
#define S21_PI 3.141592653589793
#define S21_NEGZERO -0.0
#define S21_EPS 1e-8
#define S21_ASIN_EPS 1e-16l;
#define S21_E 2.718281828459045

#define s21_isinf(x) __builtin_isinf((double)(x))
#define s21_isnan(x) __builtin_isnan((double)(x))

int s21_abs(int i);
long double s21_ceil(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_sqrt(double x);

long double s21_atan(double x);
long double s21_acos(double x);

long double s21_asin(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);

long double s21_exp(double x);
long double s21_log(double x);
long double s21_pow(double base, double exp);

#endif  // SRC_S21_MATH_H_

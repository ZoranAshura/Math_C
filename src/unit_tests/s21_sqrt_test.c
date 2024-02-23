#include "s21_math_test.h"

START_TEST(sqrt_test1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test2) {
  double x = 0.123456;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test3) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test4) {
  double x = S21_NEGZERO;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test5) {
  double x = 987565.9874641213656;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test6) {
  double x = -1.234567;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(sqrt_test7) {
  double x = 64;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test8) {
  double x = 123456789;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test9) {
  double x = 4.163435e-34;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
}
END_TEST

START_TEST(sqrt_test10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(sqrt_test11) {
  double x = S21_INFINITY;
  ck_assert_ldouble_eq(sqrt(x), s21_sqrt(x));
}
END_TEST

START_TEST(sqrt_test12) {
  double x = -S21_INFINITY;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

Suite *suite_sqrt(void) {
  Suite *s = suite_create("suite_sqrt");
  TCase *tc = tcase_create("sqrt_tc");

  tcase_add_test(tc, sqrt_test1);
  tcase_add_test(tc, sqrt_test2);
  tcase_add_test(tc, sqrt_test3);
  tcase_add_test(tc, sqrt_test4);
  tcase_add_test(tc, sqrt_test5);
  tcase_add_test(tc, sqrt_test6);
  tcase_add_test(tc, sqrt_test7);
  tcase_add_test(tc, sqrt_test8);
  tcase_add_test(tc, sqrt_test9);
  tcase_add_test(tc, sqrt_test10);
  tcase_add_test(tc, sqrt_test11);
  tcase_add_test(tc, sqrt_test12);
  suite_add_tcase(s, tc);
  return s;
}

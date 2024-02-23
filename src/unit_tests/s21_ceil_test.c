#include "s21_math_test.h"

START_TEST(ceil_test1) {
  double x = 1.0;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test2) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test3) {
  double x = S21_NEGZERO;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test4) {
  double x = S21_INFINITY;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_test5) {
  double x = -S21_INFINITY;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(ceil_test6) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_ceil(x));
}
END_TEST

START_TEST(ceil_test7) {
  double x = 4.7;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test8) {
  double x = 4.7323234567890765;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test9) {
  double x = 4732323456789076.5;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test10) {
  double x = -4.7323234567890765;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test11) {
  double x = -4732323456789076.5;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 1e-6);
}
END_TEST

START_TEST(ceil_test12) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

Suite *suite_ceil(void) {
  Suite *s = suite_create("suite_ceil");
  TCase *tc = tcase_create("ceil_tc");

  tcase_add_test(tc, ceil_test1);
  tcase_add_test(tc, ceil_test2);
  tcase_add_test(tc, ceil_test3);
  tcase_add_test(tc, ceil_test4);
  tcase_add_test(tc, ceil_test5);
  tcase_add_test(tc, ceil_test6);
  tcase_add_test(tc, ceil_test7);
  tcase_add_test(tc, ceil_test8);
  tcase_add_test(tc, ceil_test9);
  tcase_add_test(tc, ceil_test10);
  tcase_add_test(tc, ceil_test11);
  tcase_add_test(tc, ceil_test12);
  suite_add_tcase(s, tc);
  return s;
}

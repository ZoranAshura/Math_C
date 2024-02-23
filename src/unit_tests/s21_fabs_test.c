#include "s21_math_test.h"

START_TEST(fabs_test1) { ck_assert_ldouble_eq(s21_fabs(4.0), fabs(4.0)); }
END_TEST

START_TEST(fabs_test2) {
  ck_assert_ldouble_eq(s21_fabs(-4.000005), fabs(-4.000005));
}
END_TEST

START_TEST(fabs_test3) { ck_assert_ldouble_eq(s21_fabs(0.0), fabs(0.0)); }
END_TEST

START_TEST(fabs_test4) { ck_assert_ldouble_eq(s21_fabs(-0.0), fabs(-0.0)); }
END_TEST

START_TEST(fabs_test5) {
  ck_assert_ldouble_eq(s21_fabs(S21_INFINITY), fabs(S21_INFINITY));
}
END_TEST

START_TEST(fabs_test6) {
  ck_assert_ldouble_eq(s21_fabs(-S21_INFINITY), fabs(-S21_INFINITY));
}
END_TEST

START_TEST(fabs_test7) { ck_assert_ldouble_nan(s21_fabs(S21_NAN)); }
END_TEST

START_TEST(fabs_test8) {
  ck_assert_ldouble_eq(s21_fabs(4000.044), fabs(4000.044));
}
END_TEST

START_TEST(fabs_test9) {
  ck_assert_ldouble_eq(s21_fabs(-4000.044), fabs(-4000.044));
}
END_TEST

START_TEST(fabs_test10) {
  ck_assert_ldouble_eq(s21_fabs(987633.465), fabs(987633.465));
}
END_TEST

START_TEST(fabs_test11) {
  ck_assert_ldouble_eq(s21_fabs(S21_NEGZERO), fabs(S21_NEGZERO));
}
END_TEST

Suite *suite_fabs(void) {
  Suite *s = suite_create("suite_fabs");
  TCase *tc = tcase_create("fabs_tc");

  tcase_add_test(tc, fabs_test1);
  tcase_add_test(tc, fabs_test2);
  tcase_add_test(tc, fabs_test3);
  tcase_add_test(tc, fabs_test4);
  tcase_add_test(tc, fabs_test5);
  tcase_add_test(tc, fabs_test6);
  tcase_add_test(tc, fabs_test7);
  tcase_add_test(tc, fabs_test8);
  tcase_add_test(tc, fabs_test9);
  tcase_add_test(tc, fabs_test10);
  tcase_add_test(tc, fabs_test11);
  suite_add_tcase(s, tc);
  return s;
}

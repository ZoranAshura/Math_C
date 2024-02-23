#include "s21_math_test.h"

START_TEST(abs_test1) { ck_assert_int_eq(s21_abs(-4), abs(-4)); }
END_TEST

START_TEST(abs_test2) { ck_assert_int_eq(s21_abs(4), abs(4)); }
END_TEST

START_TEST(abs_test3) {
  ck_assert_int_eq(s21_abs(-1147483647), abs(-1147483647));
}
END_TEST

START_TEST(abs_test4) { ck_assert_int_eq(s21_abs(15), abs(15)); }
END_TEST

START_TEST(abs_test5) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_test6) {
  ck_assert_int_eq(s21_abs(1147483647), abs(1147483647));
}
END_TEST

START_TEST(abs_test7) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

Suite *suite_abs(void) {
  Suite *s = suite_create("suite_abs");
  TCase *tc = tcase_create("abs_tc");

  tcase_add_test(tc, abs_test1);
  tcase_add_test(tc, abs_test2);
  tcase_add_test(tc, abs_test3);
  tcase_add_test(tc, abs_test4);
  tcase_add_test(tc, abs_test5);
  tcase_add_test(tc, abs_test6);
  tcase_add_test(tc, abs_test7);

  suite_add_tcase(s, tc);
  return s;
}
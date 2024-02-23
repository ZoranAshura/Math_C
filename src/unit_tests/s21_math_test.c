#include "s21_math_test.h"

void run_tests(void) {
  Suite *list_cases[] = {
      suite_abs(),   suite_fabs(), suite_fmod(), suite_ceil(),
      suite_floor(), suite_sqrt(), suite_acos(), suite_atan(),
      suite_tan(),   suite_asin(), suite_cos(),  suite_sin(),
      suite_exp(),   suite_log(),  suite_pow(),  NULL};
  for (Suite **current_testcase = list_cases; *current_testcase != NULL;
       current_testcase++) {
    run_testcase(*current_testcase);
  }
}

void run_testcase(Suite *testcase) {
  static int counter_testcase = 1;
  printf("\n%s%d\n", "CURRENT TEST: ", counter_testcase);
  counter_testcase++;

  SRunner *sr = srunner_create(testcase);

  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main(void) {
  run_tests();
  return 0;
}

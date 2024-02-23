#include "s21_math.h"

int s21_abs(int i) {
  int ret = (i < 0) ? -i : i;
  return ret;
}
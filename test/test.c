#include "../tamago.h"
#include <stdio.h>

void test_max() {
  if (max(1, 2) != 2)
    printf("test_max failed: max(1, 2) != 2\n");
  else
    printf("test_max passed: max(1, 2) == 2\n");

  if (max(-1, -2) != -1)
    printf("test_max failed: max(-1, -2) != -1\n");
  else
    printf("test_max passed: max(-1, -2) == -1\n");
}

void test_feed() {
  Tamagoc petto = {.hungew = 5};
  feed(&petto);
  if (petto.hungew != 4)
    printf("test_feed failed: hungew != 4 after feeding\n");
  else
    printf("test_feed passed: hungew == 4 after feeding\n");
}

void test_pway() {
  Tamagoc petto = {.bowedom = 5};
  pway(&petto);
  if (petto.bowedom != 4)
    printf("test_pway failed: bowedom != 4 after pwaying\n");
  else
    printf("test_pway passed: bowedom == 4 after pwaying\n");
}

int main() {
  test_max();
  test_feed();
  test_pway();
  return 0;
}

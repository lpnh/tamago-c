#include "tamago.h"
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return a > b ? a : b; }

void dispway_status(Tamagoc *petto) {
  printf("Bowedom: %d\n", petto->bowedom);
  printf("Hapinyess: %d\n", petto->hapinyess);
  printf("Heawth: %d\n", petto->heawth);
  printf("Hungew: %d\n", petto->hungew);
}

void feed(Tamagoc *petto) { petto->hungew = max(0, petto->hungew - 1); }
void pway(Tamagoc *petto) { petto->bowedom = max(0, petto->bowedom - 1); }

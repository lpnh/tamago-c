#include "tamago.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  Tamagoc petto_chan;

  printf("Hewwo, fwiend!!11\n");
  printf("Wewcome?!! ;;w;;\n");
  printf("Entew youw petto's nyame: ");
  scanf("%s", petto_chan.name);

  petto_chan.age = 0;
  petto_chan.bowedom = 5;
  petto_chan.hapinyess = 10;
  petto_chan.heawth = 10;
  petto_chan.hungew = 8;

  // Main game loop
  while (1) {
    dispway_status(&petto_chan);

    printf("\nWhat w-wouwd you wike t-to do!!11\n");
    printf("1. Feed\n2. Pway\n3. Do nyothing\n0. Exit\n");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      feed(&petto_chan);
      break;
    case 2:
      pway(&petto_chan);
      break;
    case 0:
      printf("Goodbye?!!\n");
      exit(0);
    }
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return a > b ? a : b; }

typedef struct {
  char name[20];
  int age;
  int bowedom;
  int hapinyess;
  int heawth;
  int hungew;
} Tamagoc;

void dispway_status(Tamagoc *petto) {
  printf("Bowedom: %d\n", petto->bowedom);
  printf("Hapinyess: %d\n", petto->hapinyess);
  printf("Heawth: %d\n", petto->heawth);
  printf("Hungew: %d\n", petto->hungew);
}

void feed(Tamagoc *petto) { petto->hungew = max(0, petto->hungew - 1); }
void pway(Tamagoc *petto) { petto->bowedom = max(0, petto->bowedom - 1); }

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

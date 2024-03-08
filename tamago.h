#ifndef TAMAGO_H
#define TAMAGO_H

typedef struct {
  char name[20];
  int age;
  int bowedom;
  int hapinyess;
  int heawth;
  int hungew;
} Tamagoc;

int max(int a, int b);
void dispway_status(Tamagoc *petto);
void feed(Tamagoc *petto);
void pway(Tamagoc *petto);

#endif // TAMAGO_H

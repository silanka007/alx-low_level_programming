#include <stdio.h>

int main(void)
{
  int var = 10;
  int *pt;
  int **ptt;

  pt = &var;
  ptt = &pt;

  printf("value: %d\n", var);
  printf("pointer: %p\n", pt);
  printf("pointer value: %d\n", *pt);
  printf("pointer of pointer: %p\n", ptt);
  printf("pointer of pointer: %p\n", &pt);
  printf("pointer of pointer value: %d\n", **ptt);

  return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *sentence = "Best School";
  char *cp = malloc(sizeof("Best School") + 1);

  printf("copied: %s, source: %s\n", cp, sentence);
  printf("length: %lu\n", strlen(sentence));
  return (0);
}

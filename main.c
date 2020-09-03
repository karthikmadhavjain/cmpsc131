#include <stdio.h>

int main(void) {
  char name [40];
  printf("\nEnter your name: ");
  scanf("%s",name);
  printf("\nHello, %s",name);
  printf("!\n");
}
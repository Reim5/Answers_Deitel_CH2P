/*
 *(Multiples) Write a program that reads two integers and determines and dis-
plays whether the first is a multiple of the second. Use the remainder operator.
 */

#include <stdio.h>

int main(void) {
  int inp1;
  int inp2;

  printf("Enter integer 1: ");
  scanf("%d", &inp1);
  printf("Enter integer 2: ");
  scanf("%d", &inp2);

  if (!(inp1 % inp2)) {
    printf("Integer 1 is a multiple of Integer 2\n");
  } else {
    printf("Integer 1 is not a multiple of Integer 2\n");
  }
  return 0;
}

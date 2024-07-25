/*
 *
 * 2.22 (Odd or Even) Write a program that reads an integer and determines and dis-
plays whether it’s odd or even. Use the remainder operator. An even number is a mul-
tiple of two. Any multiple of two leaves a remainder of zero when divided by two.
 */

#include <stdio.h>

int isOdd(int N) {
  /*
   * 1010 <-- even
   * 1001 <-- odd
   *   1011 <-- 11
   * & 0001 
   * ------
   *   0001
   */
  if (N & 1) {
    return 1;
  }
  return 0;
}

int main(void) {
  int inp1;
  printf("Enter an integer: ");
  scanf("%d", &inp1);
  if (isOdd(inp1)) {
    printf("The integer %d is Odd.\n", inp1);
  } else {
    printf("The integer %d is Even.\n", inp1);
  }


  return 0;
}

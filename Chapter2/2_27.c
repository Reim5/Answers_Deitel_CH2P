/*
 *2.27 (Summing the Digits of an Integer) Write a program that inputs one 4-digit
number, sums each of the individual digits, and displays the result. [Hint: Use division
and remainder operation]. For example, if the input is 3581, the output should be 17.
(Explanation: 3 + 5 + 8 + 1 = 17).
 */
#include <stdio.h>

int main(void) {
  int uinp;
  int digit;
  int tens;
  int hundreds;
  int thousands;

  printf("Enter integer: ");
  scanf("%d", &uinp);

  digit = uinp % 10;
  tens = (uinp % 100) / 10;
  hundreds = (uinp % 1000) / 100;
  thousands = uinp / 1000;
  printf("Input: %d, Output : %d\n", uinp, (digit + tens + hundreds + thousands));
  return 0;
}

#include <stdio.h>

int main(void) {
  size_t counter = 0;
  size_t number = 0;
  size_t largest = 0;
  size_t largest_2 = 0;

  while (counter < 10) {
    printf("Enter any nonnegative number (%ld out of 10): ", counter+1);
    scanf("%lu", &number);
    if (largest <= number) {
      largest_2 = largest;
      largest = number;
    }
    counter++;
  }
  printf("The largest number is %ld\n", largest);
  printf("The second largest number is %ld\n", largest_2);

	return 0;
}

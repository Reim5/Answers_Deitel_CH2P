#include <stdio.h>

int is_prime(int N) {
  int d;
  for (d = 2; (d*d) <= N; d++) {
    if ((N % d) == 0) {
      return 0;
    }
  }
  return N >= 2;
}

int main(void) {
  unsigned int input_integer;
  printf("Enter number: ");
  scanf("%u", &input_integer);
  if (is_prime(input_integer)) {
    printf("%d is a prime number.\n", input_integer);
  } else {
    printf("%d is NOT a prime number.\n", input_integer);
  }
	return 0;
}

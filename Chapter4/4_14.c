#include <stdio.h>

int factorial(int N) {
  if (N == 1) {
    return N;
  }
  return N * factorial(N-1);
}

int main(void) {
  printf("%d! = %d\n", 1, factorial(1));
  printf("%d! = %d\n", 2, factorial(2));
  printf("%d! = %d\n", 3, factorial(3));
  printf("%d! = %d\n", 4, factorial(4));
  printf("%d! = %d\n", 5, factorial(5));
	return 0;
}

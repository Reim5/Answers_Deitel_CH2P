#include <stdio.h>

long raised(int base, int exp) {
  int res = base;
  while (exp-1) {
    res *= base;
    exp--;
  }
  return res;
}

int main(void) {
  long N = 1;
  printf("N\tN2\tN3\tN4\n");
  for (N = 1; N < 11;N++) {
    printf("%ld\t%ld\t%ld\t%ld\n", N, raised(N, 2), raised(N, 3), raised(N, 4));
  }
	return 0;
}

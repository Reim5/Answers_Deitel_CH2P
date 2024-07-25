#include <stdio.h>

int main(void) {
  int N =0;
  printf("%s", "N\tN+3\tN+6\tN+9\n");
  for (N=7;N<=35; N+=7) {
    printf("%d\t%d\t%d\t%d\t\n", N, N+3,N+6,N+9);
  }

	return 0;
}

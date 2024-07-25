#include <stdio.h>
int is_prime(int N) {
	int d;
	for (d = 2; (d * d) <= N; d++) {
    if ((N % d) == 0) {
      return 0;
    }
	}
  return N >= 2;
}

int main(void) {
  int i;
  while (i < 100) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
    i++;
  }
  puts("");
	return 0;
}

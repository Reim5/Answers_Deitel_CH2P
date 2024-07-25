#include <stdio.h>

int main(void) {
  int i = 0;
  int sum = 0;
  for (i = 0; i < 100; i++) {
    if ((i % 7) == 0) {
      printf("%d ", i);
      sum += i;
    }
  }
  puts("");
  printf("Sum of multiple of 7s: %d\n", sum);

	return 0;
}

#include <stdio.h>

int main(void) {
  int a = 1;
  int b = 1;
  printf("base, a: %d, b: %d\n", a, b);
  /* The second printf will evaluate the values in both a and b. */
  printf("pre-increment, a: %d, post-increment, b: %d\n", ++a, b++);
  if (b > 1) {
    printf("B is incremented: %d\n", b);
  }
	return 0;
}

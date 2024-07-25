#include <stdio.h>
#include <math.h>

int get_place(int N, int place) {
  return (N / place) % 10;
}

int is_armstrong(int N) {
  int digit = get_place(N, 1);
  int tens = get_place(N, 10);
  int hundreds = get_place(N, 100);
  int sum = pow(digit, 3) + pow(tens, 3) + pow(hundreds, 3);
  return (N == sum) ? 1 : 0;
}

int main(void) {
  int N = 100;
  for (N = 100; N < 1000; N++) {
    if (is_armstrong(N)) {
      printf("%d\n", N);
    }
  }
	return 0;
}

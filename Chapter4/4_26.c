#include <stdio.h>

long double compute_pi(int terms) {
  int i = 0;
  double pi = 0.;
  double denom = 1.;
  for (i = 0; i <= terms;i++) {
    if (i % 2) {
      pi -= 4/denom;
    } else {
      pi += 4/denom;
    }
    denom+=2.;
  }
  return pi;
}

int main(void) {
  int N = 0;
  long int term = 1e6;
  for (N = 0; N < term; N+=1.e4) {
    printf("PI at %d terms: %Lf\n", N, compute_pi(N));
  }
	return 0;
}

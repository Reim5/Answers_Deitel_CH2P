#include <stdio.h>
#include <math.h>

int factorial(int N) {
	if (N == 1) {
		return N;
	}
	return (N * factorial(N - 1));
}

double econ(int N, double numerator, int inc) {
  double res = 1.0;
  int i = 1;
  while (i < (N+1)) {
    if (inc == 0) {
      res += (numerator/(double) factorial(i));
    } else {
      res += (pow(numerator, i)/(double) factorial(i));
    }
    i++;
  }
  return res;
}

int main(void) {
	double user_input;
  double constant_e;
	printf("Enter a nonnegative integer: ");
	scanf("%lf", &user_input);
	printf("Factorial of %f: %d\n", user_input, factorial(user_input));
  constant_e = econ(user_input, 1.0, 0);
  printf("Constant e: %f\n", constant_e);
  printf("e^x: %f\n", econ(user_input, user_input, 1));
  printf("Alternate e^x: %f\n", pow(constant_e, user_input));
	return 0;
}

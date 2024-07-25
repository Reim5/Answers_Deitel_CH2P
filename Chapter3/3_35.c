#include <stdio.h>
#include <math.h>

int int2bin(int N) {
	int res = 0;
	int i = 0;

	while (N) {
		res += (N % 2) * pow(10, i);
		N /= 2;
		i++;
	}

	return res;
}

int main(void) {
	size_t user_input = 0;
	printf("Enter nonnegative integer: ");
	scanf("%lu", &user_input);
  printf("The binary equivalent of the input integer is: %d\n", int2bin(user_input));
	return 0;
}

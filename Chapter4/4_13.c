#include <stdio.h>
#include <math.h>

int main(void) {
  int i = 0;
  int user_input;
  int sum = 0, squares = 0, cubes = 0;
  printf("Enter nonnegative integer: ");
  scanf("%d", &user_input);
  while (i < (user_input+1)) {
    sum += i;
    squares += pow(i, 2);
    cubes += pow(i, 3);
    i++;
  }
  printf("Sum: %d\nSquares: %d\nCubes: %d\n", sum, squares, cubes);
	return 0;
}

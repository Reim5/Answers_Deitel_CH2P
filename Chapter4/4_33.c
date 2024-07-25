#include <stdio.h>
char *dec2rome(int N);

int main(void) {
	int N = 0;
	int i = 1;
	printf("%s", "Decimal\tRoman Numeral\n");

	for (i = 1 ; i <= 100; i++) {
		printf("%d\t%s\n", i, dec2rome(i));
	}
  return 0;
}

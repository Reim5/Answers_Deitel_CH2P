#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	for (i = 0; i < 8; i++) {
    if (i % 2) {
      printf("%s", " ");
    }
		for (j = 0; j < 8; j++) {
      printf("%s", "* ");
		}
    puts("");
	}

	return 0;
}

#include <stdio.h>

int main(void) {
	int N = 0;
	int i = 0;
	int j = 0;
	int counter = 1;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < (i + 1); j++) {
			printf("%d", counter++);
		}

		puts("");
	}

	return 0;
}

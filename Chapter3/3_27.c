#include <stdio.h>
/* // function main begins program execution */
int main(void) {
	/* // initialize variables in definitions */
	int passes = 0;
	int failures = 0;
	int student = 1;

	/* // process 10 students using counter-controlled loop */
	while (student <= 10) {
		int result = 0;
		/* // prompt user for input and obtain value from user */
		printf("%s", "Enter result (1=pass,2=fail): ");
		scanf("%d", &result);

		if (result < 1 || result > 2) {
			printf("Please enter valid input (1=pass or 2=fail)\n");
			continue;
		}

		/* // if result 1, increment passes */
		if (result == 1) {
			passes = passes + 1;

		} else {
			failures = failures + 1;
		}

		student = student + 1;
	}

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	if (passes > 8) {
		puts("Bonus to instructor!");
	}
  return 0;
}

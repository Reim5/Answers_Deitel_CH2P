#include <stdio.h>

void char_print(char c, int len) {
	while (len) {
		putchar(c);
		len--;
	}
}

void row_print(char a, char b, int lena, int lenb) {
	char_print(a, lena);
	char_print(b, lenb);
	char_print(a, lena);
	puts("");
}

int main(void) {
	char st = '*';
	char sp = ' ';
	int i = 0;
	int c_st = 1;
	int c_sp;
	int user_input;
	printf("Enter the number of diamonds: ");
	scanf("%d", &user_input);
	c_sp = user_input / 2;

	for (i = 0; i < user_input; i++) {
		row_print(sp, st, c_sp, c_st);

		if (i < (user_input / 2)) {
			c_sp -= 1;
			c_st += 2;

		} else {
			c_sp += 1;
			c_st -= 2;
		}
	}

	return 0;
}

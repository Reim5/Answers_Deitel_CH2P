CC = cc
CFLAGS = -Wall -Wpedantic -ansi -Wextra -lm
# only use the line below to debug
# CFLAGS = -Wall -Wpedantic -ansi -Wextra -g3 -fsanitize=address -lm
fname = temp

# Creates a template file.
temp:
	echo "#include <stdio.h>\n\nint main(void) {\n\treturn 0;\n}" > $(fname).c

out: test.c
	$(CC) $(CFLAGS) test.c -o out

s4_9: 4_9.c
	$(CC) $(CFLAGS) 4_9.c -o s4_9

s4_10: 4_10.c
	$(CC) $(CFLAGS) 4_10.c -o s4_10

s4_11: 4_11.c
	$(CC) $(CFLAGS) 4_11.c -o s4_11

s4_12: 4_12.c
	$(CC) $(CFLAGS) 4_12.c -o s4_12

s4_13: 4_13.c
	$(CC) $(CFLAGS) 4_13.c -o s4_13

s4_14: 4_14.c
	$(CC) $(CFLAGS) 4_14.c -o s4_14

s4_16: 4_16.c
	$(CC) $(CFLAGS) 4_16.c -o s4_16

s4_18: 4_18.c
	$(CC) $(CFLAGS) 4_18.c -o s4_18

s4_25: 4_25.c
	$(CC) $(CFLAGS) 4_25.c -o s4_25

s4_26: 4_26.c
	$(CC) $(CFLAGS) 4_26.c -o s4_26

s4_31: 4_31.c
	$(CC) $(CFLAGS) 4_31.c -o s4_31

s4_32: 4_32.c
	$(CC) $(CFLAGS) 4_32.c -o s4_32

s4_33: 4_33.c
	$(CC) $(CFLAGS) 4_33.c -o s4_33

clean:
	rm -f s4_9 s4_10 s4_11 s4_12 s4_13 s4_14 s4_16 s4_18 s4_25 s4_26 s4_31 s4_32 s4_33

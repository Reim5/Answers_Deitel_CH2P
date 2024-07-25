CC = cc
CFLAGS = -Wall -Wpedantic -ansi -Wextra -lm
# only use the line below to debug
# CFLAGS = -Wall -Wpedantic -ansi -Wextra -g3 -fsanitize=address -lm
fn = temp

# Creates a template file.
ct:
	echo "#include <stdio.h>\n\nint main(void) {\n\treturn 0;\n}" > $(fn).c
	echo "s$(fn): $(fn).c\n\t$(CC) $(CFLAGS) $(fn).c -o s$(fn)" >> Makefile
	sed -i '17s/out/& s$(fn)/' Makefile

out: test.c
	$(CC) $(CFLAGS) test.c -o out

clean:
	rm -f out s5_9
s5_9: 5_9.c
	cc -Wall -Wpedantic -ansi -Wextra -lm 5_9.c -o s5_9

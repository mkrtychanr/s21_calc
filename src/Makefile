CC = gcc
CFLAGS = -Wall -Werror -Wextra

all:
	$(CC) $(CFLAGS) graph.c stack.c double_stack.c parse.c calculate.c draw.c -o ../build/graph

clean:
	rm -rf ../build/graph ../build/*.txt

rebuild: clean all
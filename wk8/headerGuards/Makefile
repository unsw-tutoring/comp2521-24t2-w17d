CC=clang
CFLAGS=-Wall -Werror -fsanitize=address,undefined

output: headerGuards.c adt1.h adt2.h
	$(CC) $(CFLAGS) -o headerGuards headerGuards.c

.PHONY: clean
clean:
	rm -f $(ALL)

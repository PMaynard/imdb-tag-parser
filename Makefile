CC=gcc
CFLAGS=-I -Werror.
DEPS = datatypes.h 
OBJ = main.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

imdb-tags: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean: 
	rm imdb-tags

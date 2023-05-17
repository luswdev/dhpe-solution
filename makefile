CC=gcc

CFLAGS= -Wall -O2

OBJS=$(patsubst %.c, %.o, $(wildcard ./*/*.c))

all: $(OBJS)

%/%.o: %/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	-rm -rf ./**/*.o
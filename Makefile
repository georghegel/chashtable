CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = hash.c hashtable.c iterators.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)

#test: $(SRCS)
#	@$(CC) -o $@ $(FLAGS) $(SRCS)
#	@./test

hashtable.a:
	@$(CC) -c $(SRCS)
	@ar rcs hashtable.a $(OBJS)

.PHONY: clean hashtable.a
clean:
	@rm -rf hashtable.a $(OBJS)



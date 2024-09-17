# !!! DO NOT MODIFY THIS FILE !!!

CC = clang
CFLAGS = -Wall -Wvla -Werror -g

########################################################################

nosan: all
asan: CFLAGS += -fsanitize=address,leak, undefined
asan: all

msan: CFLAGS += -fsanitize=memory,undefined -fsanitize-memory-track-origins
msan: all


########################################################################

all: q1 q2

q1: q1.c
	$(CC) $(CFLAGS) -o q1 q1.c

q2: q2.c
	$(CC) $(CFLAGS) -o q2 q2.c

########################################################################

clean:
	rm -f q1 q2


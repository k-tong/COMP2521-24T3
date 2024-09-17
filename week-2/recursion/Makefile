# !!! DO NOT MODIFY THIS FILE !!!

CC = clang
CFLAGS = -Wall -Wvla -Werror -g

########################################################################

nosan: all
# no leak flag
asan: CFLAGS += -fsanitize=address,undefined
asan: all

msan: CFLAGS += -fsanitize=memory,undefined -fsanitize-memory-track-origins
msan: all


########################################################################

all: q1 q2 q3 q4 q6

q1: q1.c linkedList.o
	$(CC) $(CFLAGS) -o q1 q1.c linkedList.o

q2: q2.o linkedList.o
	$(CC) $(CFLAGS) -o q2 q2.o linkedList.o

q3: q3.c linkedList.o
	$(CC) $(CFLAGS) -o q3 q3.c linkedList.o

q4: q4.c linkedList.o
	$(CC) $(CFLAGS) -o q4 q4.c linkedList.o

q6: q6.c
	$(CC) $(CFLAGS) -o q6 q6.c

linkedList.o : linkedList.c linkedList.h



########################################################################

clean:
	rm -f *.o q1 q2 q3 q4 q6


CC = gcc
CFLAGS = -g -Wall -lncurses
LIBS = -lncurses
SRCS = twinkle.c annoy.c colortest.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses
.c.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	$(RM) *.o *~
depend:	$(SRCS)
	makedepend $^

CC = gcc
CFLAGS = -g -Wall -lncurses
LIBS = -lncurses
SRCS = goodbye.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 1
.c.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	$(RM) *.o *~
depend:	$(SRCS)
	makedepend $^

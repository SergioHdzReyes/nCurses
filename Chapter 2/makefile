CC = gcc
CFLAGS = -g -Wall -lncurses
LIBS = -lncurses
SRCS = add1.c add2.c add3.c cls.c string1.c string2.c sushi.c typewritter.c yoda.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 2
.c.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	$(RM) *.o *~
depend:	$(SRCS)
	makedepend $^

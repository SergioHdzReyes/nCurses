CC = gcc
CFLAGS = -lncurses -ltinfo
SRCS = hamlet1.c hamlet2.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 5
.c.o:
	$(CC) -o $@ $(CFLAGS) $<
clean:
	$(RM) -r *.o *~ *.o.dSYM
depend:	$(SRCS)
	makedepend $^

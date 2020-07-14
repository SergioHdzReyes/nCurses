CC = gcc
CFLAGS = -lncurses -ltinfo
SRCS = screensize.c stdscrsize.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 4
.c.o:
	$(CC) -o $@ $(CFLAGS) $<
clean:
	$(RM) -r *.o *~ *.o.dSYM
depend:	$(SRCS)
	makedepend $^

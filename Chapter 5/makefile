CC = gcc
CFLAGS = -lncurses -ltinfo
SRCS = hamlet1.c hamlet2.c hamlet3.c marquee1.c marquee2.c hamlet4.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 5
.c.o:
	$(CC) -o $@ $(CFLAGS) $<
clean:
	$(RM) -r *.o *~ *.o.dSYM
depend:	$(SRCS)
	makedepend $^

CC = gcc
CFLAGS = -lncurses -ltinfo
SRCS = twinkle.c annoy.c colortest.c colorme.c color_me.c bgcolor1.c bgcolor2.c notice.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 3
.c.o:
	$(CC) -o $@ $(CFLAGS) $<
clean:
	$(RM) -r *.o *~ *.o.dSYM
depend:	$(SRCS)
	makedepend $^

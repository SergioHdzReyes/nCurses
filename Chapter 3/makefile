CC = gcc
CFLAGS = -g -Wall -lncurses
LIBS = -lncurses
SRCS = twinkle.c annoy.c colortest.c colorme.c color_me.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS)
	@echo Programas simples de ejemplos para nCurses. Capitulo 3
.c.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	$(RM) -r *.o *~ *.o.dSYM
depend:	$(SRCS)
	makedepend $^

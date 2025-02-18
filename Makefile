CC=cc
CCFLAGS=-Wall -Wextra -pedantic -std=c99 -Os
LDFLAGS=-lraylib
OUT=bitboardcalc
all:
	${CC} ${CCFLAGS} -o ${OUT} bitboardcalc.c ${LDFLAGS}

clean:
	rm -f ${OUT}

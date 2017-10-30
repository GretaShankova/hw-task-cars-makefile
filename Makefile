CC:=gcc
SOURCES:= main.c common.c
LDFLAGS:=
CFLAGS:=-O -Wall
PROG:=carHomework
OBJECTS:=$(SOURCES:.c=.o)

all:$(SOURCES) $(PROG)

$(PROG):$(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -f *.o core *.core $(PROG)

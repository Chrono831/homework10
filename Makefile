#Dylan Hall
#dylanphall

CC=gcc
CFLAGS=-g -W -Wall -std=c99
LDFLAGS=-lm
MODULES := $^
SOURCES := $(MODULES).c 
SOURCES += Int_Bit_Manip.c
OBJECTS = $(patsubst %.c, %.o, %(SOURCES))

all: 

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(MODULES): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(MODULES)


.PHONY: clean
clean:
	rm -f *.o *.out *.dat 

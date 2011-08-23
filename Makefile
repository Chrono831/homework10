#Dylan Hall
#dylanphall

CC=gcc
CFLAGS=-W -Wall -std=c99
LDFLAGS=-lm
MODULES := $^
SOURCES := $(MODULES).c 
OBJECTS = $(patsubst %.c, %.o, %(SOURCES))

ifeq ($(DEBUG),true)
	CFLAGS+=DDEBUG -g
endif

all: 

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(MODULES): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(MODULES)


.PHONY: clean
clean:
	rm -f *.o *.out *.dat 

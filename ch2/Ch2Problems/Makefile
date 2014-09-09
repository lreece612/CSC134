# Generic Makefile, adopted from 
# www.puxan.com/web/blog/HowTo-Write-Generic-Makefiles
#
# written by Walter B. Vaughan for CSC 134

CC=g++
CC_FLAGS=-Wall -pedantic

SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

all: $(OBJECTS)

# this defines each outfile as a product of its source
%.o: %.cpp
	$(CC) $(CC_FLAGS) $< -o $@

clean:
	rm -vf $(OBJECTS)

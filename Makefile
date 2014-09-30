# Generic Makefile, adopted from 
# www.puxan.com/web/blog/HowTo-Write-Generic-Makefiles
#
# written by Walter B. Vaughan for CSC 134

CC=g++
CC_FLAGS=-Wall -pedantic

SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

# these are lists of tex-related files
TEXES=$(wildcard *.tex)
DOCS=$(TEXES:.tex=.pdf)
LOGS=$(TEXES:.tex=.log)
AUXS=$(TEXES:.tex=.aux)

all: $(OBJECTS) docs

# this defines each outfile as a product of its source
%.o: %.cpp
	$(CC) $(CC_FLAGS) $< -o $@

docs: $(DOCS)

%.pdf: %.tex
	pdflatex $<
	rm -vf $(LOGS) $(AUXS)

clean: cleandocs
	rm -vf $(OBJECTS)
	
cleandocs:
	rm -vf $(DOCS) $(LOGS) $(AUXS) 

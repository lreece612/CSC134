# Generic Makefile, adopted from 
# www.puxan.com/web/blog/HowTo-Write-Generic-Makefiles
#
# written by Walter B. Vaughan for CSC 134

CC=g++
CC_FLAGS=-Wall -pedantic

# these are lists of c++ files
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.elf)

# these are lists of tex-related files
TEXES=$(wildcard *.tex)
DOCS=$(TEXES:.tex=.pdf)
LOGS=$(TEXES:.tex=.log)
AUXS=$(TEXES:.tex=.aux)

all: programs docs

docs: $(DOCS)

programs: $(OBJECTS)

# this defines each program as a product of its source code
%.elf: %.cpp
	$(CC) $(CC_FLAGS) $< -o $@

# this defines each pdf as a product of its tex source file
%.pdf: %.tex
	pdflatex $<
	rm -vf $(LOGS) $(AUXS)

cleanprograms:
	rm -vf $(OBJECTS)
	
cleandocs:
	rm -vf $(DOCS) $(LOGS) $(AUXS) 

clean: cleanprograms cleandocs

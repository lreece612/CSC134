CSC134
======

This repo stores all the source code for my various assignments and experiments involving my Introduction to C++ class. For licensing reasons, I'm not including all of the problems themselves nor the Lab Manuals which I am following to produce my lab writeups and code. 

I understand that this repo has poor context and is mostly useless to most people looking at it. However, it functions effectively just serving as a spot to host my homework and as means to help me learn to use git (and put myself on GitHub).


## Organization 
Homework is organized into folders by chapter, ex. [ch1](https://github.com/wbv/CSC134/tree/master/ch1), [ch2](https://github.com/wbv/CSC134/tree/master/ch2), with a file called `assignment.md` that describes the problems, labs, or challenges I've been assigned.

The folder called [experiments](https://github.com/wbv/CSC134/tree/master/experiments) holds miscellaneous programs which may or may not contain any degree of usefulness.

Each folder containing source code has a link to a generic [Makefile](https://github.com/wbv/CSC134/blob/master/Makefile) which simply compiles all of the source files in a directory into their own individual programs, or allows for individual files to be compiled. It compiles `*.cpp` files into `*.o` binary files (I can't think of a more appropraite extension to use, even though that extension usually refers to object files) and converts `*.tex` files into `*.pdf`s using pdfLaTeX. Previously, the `Makefile` only compiled C++ programs, and that original version is kept as `Makefile_OLD`.

## About the class
All the work that I'm doing is in the context of a course offered at Catawba Valley Community College, namely CSC 134. The book being used for this course is:

*Starting Out with C++: From Control Structures through Objects*, 7th Brief Edition, by Tony Gaddis



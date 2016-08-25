# Makefile to build introgl example 
#
# Andrew J. Pounds, Ph.D.
# Departments of Chemistry and Computer Science
# Mercer University
# Fall 2016 
#

CC = gcc 
CFLAGS = 
COPTFLAGS = -O3 
LIBFLAGS = -lglut -lGLU -lGL

# Independent Targets - first is executable, second is object

allInOne : allInOne.o  
	$(CC) allInOne.o -o allInOne $(LIBFLAGS) 	

allInOne.o : allInOne.c
	$(CC) $(CFLAGS) $(COPTFLAGS) -c allInOne.c


# Default Targets for Cleaning up the Environment

clean :
	rm *.o

pristine :
	rm *.o
	touch *.c  

ctags :
	ctags *.c


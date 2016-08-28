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
HEADERS = headers.h prototypes.h
OBJS = init.o lineSegment.o main.o

# Independent Targets - first is executable, second is object

allInOne : $(OBJS) $(HEADERS) 
	$(CC) -o allInOne $(OBJS)  $(LIBFLAGS) 	

main.o : main.c $(HEADERS)
	$(CC) $(CFLAGS) $(COPTFLAGS) -c main.c

init.o : init.c $(HEADERS)
	$(CC) $(CFLAGS) $(COPTFLAGS) -c init.c

lineSegment.o : lineSegment.c $(HEADERS)
	$(CC) $(CFLAGS) $(COPTFLAGS) -c lineSegment.c


# Default Targets for Cleaning up the Environment

clean :
	rm *.o

pristine :
	rm *.o
	touch *.c  

ctags :
	ctags *.c


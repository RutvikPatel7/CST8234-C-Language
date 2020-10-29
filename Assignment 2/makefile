
files = main.o Node.o


edit : main.o Node.o
		gcc -g -o main  $(files) -ansi -pedantic -Wall -w

main.o : main.c Node.h 
		gcc -g -c main.c -ansi -pedantic -Wall -w

Node.o : Node.c Node.h
		gcc -g -c commands.c -ansi -pedantic -Wall -w

clean:
		 rm edit $(files) 
CC = gcc

OPTIONS = -Werror -Wall -std=c99 -g

all: 
	$(CC) $(OPTIONS) -o huffman main.c

clean: 
	rm -f *.o *.out *.txt

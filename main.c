#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "huffman.h"
#include "huffman.c"
#include "huffman_tree.c"


int main(int argc, char **argv) {
	if(argc != 2 || argv == NULL)
		return -1;
	
	printf("got here\n");
    printf("%d\n", argc);

	FILE* fd;

	int i = 0;
	while(i < argc){
        printf("i = %d\n", i);
		if (!strcmp(argv[i], C)) {
			fd = fopen(argv[i + 1], "r+");
		} else if (!strcmp(argv[i], D)) {
			fd = fopen(argv[i + 1], "r+");
		}
		i++;
	}

    printf("got out of the loop\n");
	frequenciesCount(fd); 	//iterates the file to get frequencies count
	
    printf("got past frequencies count");

    i = 0; 
	while (i < numLetters) {
		printf("letter: %c	count: %d\n", letters[i].letter, letters[i].count);
		
		i++; 
	}
	
	sortLetters();
	initRoot(); 
	
	i = 0; 
	while (i < numLetters) {
		createRootArray(i, letters[i].count, letters[i].letter);
		i++; 
	}
	
	i = 0; 
	while (i < nNodes) {
		printf("letter: %c	frequency: %d", root[i].letter, root[i].frequency);
		i++;
	}

}

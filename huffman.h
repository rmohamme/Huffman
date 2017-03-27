    #ifndef HUFFMAN_H
#define HUFFMAN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


/**
* Functions/Variables for frequencies of characters
**/

typedef struct Word {
	int count; 
	char letter; 
} Word; 

Word *letters; 
int numLetters;
int lettersLength;

const char *C = "-c";
const char *D = "-d";

void createWord(); 
int ReadFile(FILE* fd);
void frequenciesCount(FILE* fd);


/**
* Functions for Bin tree. 
**/

typedef struct treeNode {
	int frequency; 
	char *code; 
	char letter;
	struct treeNode *left; 
	struct treeNode *right;
} treeNode; 
 
treeNode *root; 
int nNodes; 
 
void sortLetters();
void initRoot(); 
void createRootArray(int loc, int count, char letter);
Word createWordNode(char ch, int num);
treeNode createTreeNode(int smaller, int greater); 


#endif
#include <stdio.h>
#include "huffman.h"

/**
* NOT SURE THIS IS NEEDED YET
**/
Word createWordNode(char ch, int num) {
	Word temp; 
	temp.letter = ch;
	temp.count = num; 
	
	return temp;	
}

/**
* NOT SURE YET
**/
/*
treeNode createTreeNode(int smaller, int greater) {
	treeNode temp;
	
	
	return temp; 	
}
*/

/**
* initializes the global array root to size of global variable numLetters 
**/
void initRoot() {
	//TODO: initialize root array; 
	
	root = (treeNode*)malloc(sizeof(treeNode) * numLetters); 
	nNodes = numLetters; 
}

//adds all the information in the letters array into the root array; 
/**
* create a node of treeNode and fills in count and letter at location loc
* Method is used to add sorted letters array into an array of type treeNode
* int loc: location to add node in root
* int count: the frequency count of the letter
* char letter: the letter that the value represents 
**/
void createRootArray (int loc, int count, char letter) {
	//malloc all the pointers
	root[loc].code = (char*)malloc(sizeof(char)*1);  
	
	
	//store letter and frequency
	root[loc].letter = letter; 
	root[loc].frequency = count; 
	
	root[loc].code = NULL; 
	root[loc].left = NULL;
	root[loc].right = NULL;
}

//order the array letters from decending order. 

/**
* sorts the array letters from descending to ascending order 
**/
void sortLetters() {
	//letters is the global variable
	
	int i, j;
	
	for (i = 0; i < numLetters - 1; i++) {
		for (j = 0; j < numLetters - i - 1; j++) {
			if (letters[j].count > letters[j + 1].count) {
				Word node = createWordNode(letters[j].letter, letters[j].count);
				letters[j] = letters[j + 1];
				letters[j + 1] = node; 
			}			
		}
	}
	
	printf("sorted start here\n\n\n\n");
	
	for (i = 0; i < numLetters; i++) {
		printf("letter: %c	count: %d\n", letters[i].letter, letters[i].count);
	}	
}
/*
treeNode *buildTree(treeNode *tree, int nNodes) {
	if (nNodes == 0) return NULL;
	if (nNodes == 1) {
		return tree; 
	}

	//works recursively
	//{1, 1, 3}
	
	treeNode temp;
	temp = createTreeNode (letters[1].count , letters[2].count);	
}
*/


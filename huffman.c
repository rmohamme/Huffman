/*
program will read a file and compress or decompress it according to the moments necessity. 

Input file of words. Then sort through the file and get each letter and keep a count of how many times the letters and words show up

format of input; <-c|-d> <sourcefile>


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "huffman.h"

void createWord() {
    letters = (Word *) malloc(sizeof(Word) * 10);
    lettersLength = 10;
    numLetters = 0;
}

int ReadFile(FILE *fd) {
    return getc(fd);
}

void frequenciesCount(FILE *fd) {

    createWord();

    printf("frequenciesCount: got past creating Word\n");
    //char str;



    //TODO: count and add the words to array 

    int i = 0;
    //char *str = nextWordInFile(fd);
    char str = ReadFile(fd);

    printf("reading file: %c", str);
    if (str == EOF) {
        //break;
    } else {
        while (i < numLetters) {
            //if (strcmp(letters[i].letter, str)== 0) {
            if (letters[i].letter == str) {
                letters[i].count++;
                //j++;
            }

            printf("i: %d", i);
            i++;
        }

        if (j == 0) {
            if (numLetters == lettersLength) {
                int n = lettersLength * 2;
                letters = (Word *) realloc(letters, n * sizeof(Word));
                lettersLength = n;
            }
            letters[numLetters].letter = str;
            letters[numLetters].count = 1;
            numLetters++;
        }
        i = 0;
        j = 0;
        

}

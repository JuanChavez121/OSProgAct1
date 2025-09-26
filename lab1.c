#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 * 
 * fileName is c-string representing the file to read.
 * 
 */
char* readString(char* fileName){
    FILE* file = fopen(fileName,"r");
    char* text = malloc(MAX_LINE_LEN);
    fgets(text,MAX_LINE_LEN,file);
    size_t length = strlen(text);
    text[length - 1] = '\0';
    fclose(file);
    return text;
}

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 * 
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 * 
 */
char* mysteryExplode(const char* str){
    int length = strlen(str);
    int totalSize = 0;
    for(int i = 1; i<= length;i++){
        totalSize = totalSize + i;
    }
    char* text = malloc(totalSize+1);
    int index = 0;

    for(int i = 1;i<=length;i++){
        for(int j = 0;j<=i-1;j++){
            text[index] = str[j];
            index = index +1;
        }
    }
    text[index] = '\0';
    return text;

}
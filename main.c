/*
 * Ex 2-4: write an alternate version of squeeze(s1,s2) that deletes each 
 * character s1 that matches any character in the string s2.
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 7:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

// the squeeze is from the book
// squeeze: delete all c from s
void squeeze(char s[], int c) {
    int i, j;
    
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

// my function
// meant for use with short strings, not an efficient algorithm for long strings O(n^2)
void squeeze2(char s1[], char s2[]){
    int i, j, found;
    int k = 0;
    
    for (i = 0; s1[i] != '\0'; i++){
        found = 0;
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                found = 1;
                break; // saves some time if s2 is long and repeats characters
            }   
        }
        if(!found) 
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main(int argc, char** argv) {
    //test my function
    char s1[] = {'a', 'n', 't', 'o', 'n', '\0' };
    char s2[] = {'n', 'o', '\0' };
    squeeze2(s1, s2);
    for(int i = 0; s1[i] != '\0'; i++){
        putchar(s1[i]);
    }

    return (EXIT_SUCCESS);
}


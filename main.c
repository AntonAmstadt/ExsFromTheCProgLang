/*
 * Ex 2-5 Write the function any(s1,s2), which returns the first location in the 
 * string s1 where any character from the string s2 occurs, or -1 if s1 contains 
 * no characters from s2. (the standard library function strpbrk does the same
 * job but returns a pointer to the location
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 7:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

int any(char s1[], char s2[]){
    int i, j;
    for(i = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}
int main(int argc, char** argv) {
    char s1[] = {'a', 'n', 't', 'o', 'n', '\0' };
    char s2[] = {'t', 'o', '\0' };
    printf("%d", any(s1, s2));

    return (EXIT_SUCCESS);
}


/*
 * ex 2-10: Rewrite the function lower, which converts upper case letters to lower
 * case, with a conditional expression instead of if-else
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 10:39 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lower(char s[]){
    for(int i = 0; s[i] != '\0'; i++){
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 'a' : s[i];
    }
}
int main(int argc, char** argv) {
    char s[] = { 'A', 'b', 'C', '\0' };
    lower(s);
    for(int i = 0; s[i] != '\0'; i++){
        putchar(s[i]);
    }

    return (EXIT_SUCCESS);
}


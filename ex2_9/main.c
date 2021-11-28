/*
 * ex) 2-9: In a two's complement number system, x &= (x-1) deletes the rightmost
 * 1-bit in x. Explain why. Use this to write a faster version of bitcount.
 * answer: x - 1 will make the rightmost 1-bit in x turn to a 0. All the 0's to 
 * the right of the rightmost 1-bit will become 1.  x & (x-1) will result
 * in all of the least significant bits becoming 0, starting with the previous rightmost 1
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

//bitcount: count the total of 1-bits in x
int bitcount(unsigned x){
    int i;
    for(i = 0; x != 0; x &= (x - 1)){
        i++;
    }
    return i;
}
int main(int argc, char** argv) {

    unsigned a = 0xf;
    printf("%d", bitcount(a));
    return (EXIT_SUCCESS);
}


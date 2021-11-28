/* 
 * Ex 2-6
 * Write a function setbits(x,p,n,y) that returns x with the n bits that begin
 * at position p set to the rightmost n bits of y, leaving the other bits unchanged
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 8:35 PM
 */

#include <stdio.h>
#include <stdlib.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned t = ~(~0 << (p-n+1)) & x; // t is the last p - n + 1 bits of x
    x = x >> (p-n+1);
    x = (~0 << n) & x; // set the rightmost n bits of x to 0
    y = y & ~(~0 << n); // keep only the n rightmost bits of y
    x = x | y; // set the rightmost n bits of x to the rightmost n bits of y
    x << (p-n+1);
    x = x | t; // restore the values initially in x
    return x;
}
int main(int argc, char** argv) {
    // test here
    unsigned a = 0xF;
    unsigned b = 0;
    printf("%u", setbits(a, 2, 2, b));
    return (EXIT_SUCCESS);
}


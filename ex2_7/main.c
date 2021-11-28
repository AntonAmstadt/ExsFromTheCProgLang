/*
 * ex 2-7: Write a function invert(x,p,n) that returns x with the n bits that begin
 * at position p inverted, leaving the others unchanged
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 9:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

unsigned invert(unsigned x, int p, int n){
    unsigned t = ~(~0 << (p-n+1)) & x;
    x = x >> (p-n+1);
    unsigned j = ~(~0 << n) & x;
    j = j ^ ~(~0 << n); //flip the last n bits of j
    x = x >> n;
    x = x << n;
    x = x | j;
    x = x << (p-n+1);
    x = x | t;
    return x;
}

int main() {
    unsigned a = 0xF;
    printf("%u", invert(a, 2, 1));

    return (EXIT_SUCCESS);
}


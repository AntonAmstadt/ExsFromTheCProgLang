/*
 * ex 2-8: Write a function rightrot(x,n) that returns the value of the integer x
 * rotated to the right by n bit positions. 
 */

/* 
 * File:   main.c
 * Author: Anton
 *
 * Created on November 27, 2021, 9:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

unsigned rightrot(unsigned x, int n) {
    unsigned t = ~(~0 << n) & x; // rightmost n bits of x
    t = t << (sizeof(unsigned)*8 - n);
    x = x >> n;
    x = x | t;
    return x;
}
int main(int argc, char** argv) {
    unsigned a = 0xF0F0F0F0; // = 4042322160 in decimal
    printf("size of unsigned: %u\n", sizeof(unsigned)); // 4 on my machine
    printf("%u", rightrot(a, 4)); // will output 252645135

    return (EXIT_SUCCESS);
}


/*
 * Exercise 2-3: Write the function htoi(s), which converts a string of hexadecimal
 * digits (including an optional  0x or 0X) into its equivalent integer value.
 * The allowable digits are 0-9, a-f, and A-F.
 */
// I also made the function return -1 if the string is not a valid hexadecimal number
#include <math.h>
#include <string.h>
#include <stdio.h>

int htoi(char s[]){
    int valid = 1;
    int total = 0;
    int expon = 0;
    int start = 0;
    if (s[0] == '0' && s[1] == 'x'){
        start = 2;
    }
    else if (s[0] == '0' && s[1] == 'X'){
        start = 2;
    }
    for(int i = strlen(s) - 1; i >= start; i--){
        if (s[i] >= '0' && s[i] <= '9'){
            total += (int)pow(16, expon) * (s[i] - '0');
        }
        else if (s[i] >= 'a' && s[i] <= 'f'){
            total += (int)pow(16, expon) * (s[i] - 'a' + 10);
        }
        else if (s[i] >= 'A' && s[i] <= 'F'){
            total += (int)pow(16, expon) * (s[i] - 'A' + 10);
        }
        else {
            valid = 0;
        }
        expon++;
    }
    if (valid)
        return total;
    else
        return -1;
}

int main() {
    char s[] = { '0', 'x', '1', 'B', '\0'};
    printf("htoi value: %d", htoi(s));
    return 0;
}

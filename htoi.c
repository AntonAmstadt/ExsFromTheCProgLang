/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <math.h>
#include <string.h>

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

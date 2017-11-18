#include <stdlib.h>
#include <stdio.h>
#include "fizz_buzz.h"
#include <ctype.h>
/* Add function signatures here */



int main(int argc, char **argv) {
    int n;
    printf("Please, enter value of n: "); 
    scanf("%d", &n);
     if ((isdigit(n)) != 0){
         printf("Got an integer\n");
    }
     else if (isalpha(n)){
         printf("Got a char\n"); 
     } 
    int * size = (int *) malloc(sizeof(int));
    char ** result = Fizzbuzz(n, size);
    int i = 0;
    for (i = 0; i < *size; i++) {
        printf("%s\n", result[i]);
    }
    
    return 0;
}


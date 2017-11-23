#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "fibonacci.h"
/*
 *On this program we want to takes an integer n and returns the nnth Fibonacci ↴ number.
 *Fort this, first we check if index is negative, then print the same number.
 *Then we buildthe fibonacci serie from bottom up, and track the previous 2 numbers at each step.
 *We initialize the current value and then we iterate too get the result.
 *The logic is user the n-1 iterations to get the nth fibonacci.
*/

int fib(int n)
{
    int prevPrev, prev, current;
    size_t i;
    //printf("hello\n");
    // edge cases:
    assert(n >= 0);  
    if (n == 0 || n == 1) {
        printf("%d",n);
    }
   
    prevPrev = 0;  
    prev = 1;      
    current = 0;   

    for (i = 1; i < n; i++) {

        
        current = prev + prevPrev;
        prevPrev = prev;
        prev = current;
        //printf("%d\n",current);
    }

    printf("%d\n",current);
    return current;
}
/*
int main()
{
    fib(3);
    return 0;
}
*/

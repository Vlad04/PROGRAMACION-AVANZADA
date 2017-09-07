#include <stdlib.h>
#include <stdio.h>
#include "project.h"

/* This function returns median of array_1[] and array_2[].
   Both are sorted arrays, and n is number of elements
   on each array.
*/

int main()
{
		
    int array_1[] = {1, 12, 15, 26, 38};
    int array_2[] = {2, 13, 17, 30, 45};
 
    int n1 = sizeof(array_1)/sizeof(array_1[0]);
    int n2 = sizeof(array_2)/sizeof(array_2[0]);

    printf("Median is %d\n", calculateMedian(array_1, array_2, n1));
    

    return 0;
}

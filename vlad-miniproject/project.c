#include <stdlib.h>
#include <stdio.h>
#include "project.h"
int calculateMedian(int array_1[], int array_2[], int n)
{
    int i = 0;  
    int j = 0; 
    int count;
    int m1 = -1, m2 = -1;
 
    /* Since there are 2n elements, median will be average
     of elements at index n-1 and number of elements in the array obtained 			after
     merging array_1 and array_2 */
    for (count = 0; count <= n; count++)
    {
        
        if (i == n)
        {
            m1 = m2;
            m2 = array_2[0];
            break;
        }
 
        
        else if (j == n)
        {
            m1 = m2;
            m2 = array_1[0];
            break;
        }
 
        if (array_1[i] < array_2[j])
        {
            m1 = m2;  /* Store the prev median */
            m2 = array_1[i];
            i++;
        }
        else
        {
            m1 = m2;  /* Store the prev median */
            m2 = array_2[j];
            j++;
        }
    }
 
    return (m1 + m2)/2;
}

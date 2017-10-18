#include <stdlib.h>
#include <stdio.h>
#include "pascal_triangle.h"
int Triangle_construction(int rows, int coef)
{
int space, i, j;
int check=0;
if(rows>=0){
    check=1;

    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            printf("%4d", coef);
        }
        printf("\n");
    }

}
else{
    check=0;
}
return check;
}

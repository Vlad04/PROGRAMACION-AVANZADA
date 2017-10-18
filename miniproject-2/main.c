#include <stdlib.h>
#include <stdio.h>
#include "pascal_triangle.h"
#include <stdio.h>
int main()
{

    int rows, coef = 1;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    Triangle_construction(rows,coef);
    
    return 0;
}

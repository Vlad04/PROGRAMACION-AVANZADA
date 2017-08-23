#include <stdio.h>
#include <stdlib.h>
#include "two-sum.h"


int main()
{

	int arreglos[4];
	int target_sample;
	//printf("Hello there, please write the 4 numbers that we are going to use");
	//scanf("%d",&amp;arreglos);
	printf("Now please write the target\n");
	scanf("%d",&target_sample);

	int nums[]={2,7,11,15};
	int target=9;
	int len=4;
	int *result= get_Indexes(nums, len, target_sample);
//printf("%d %d",result[0],result[1]);
if(result != NULL && (nums[result[0]]+nums[result[1]]==target_sample))
{
	printf("it works\n");
}
else
{
	printf("SAD\n");
}
return 0;
}

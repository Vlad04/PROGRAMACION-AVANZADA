#include <stdlib.h>
#include "two-sum.h"

int *get_Indexes(int *nums, int len, int target)
{
	int i,j;
	int candidato;
	int complement;
	int *result=(int *)calloc(2,sizeof(int));
	for(i=0;i<len-1;i++)
	{
		if(nums[i] >= target)
		{
			continue;
		}
		candidato=nums[i];
		complement=target-candidato;	
		for(j=i+1;j<len;j++)
		{
			if(nums[j]==complement)
			{
				break;
			}
		}
		if(nums[i]+nums[j]==target)
		{
			result[0]=i;
			result[1]=j;

			return result;
		}
	}
	//printf("%d,%d",i,j);
	return NULL;
	
}
/*
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
*/

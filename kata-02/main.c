#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "word_constructor.h"


int main(int argc, char **argv)
{
	printf("Welcome, the letters availables are: o,d,g,o,b,o,e,j,f,e,a,l,e,t,n. \n\n");

        char array[100];
	char * message=array;
	char * scrabble="odgoboejfealetn";

	printf("Please write a sentence\n");
    	scanf("%[^\n]", message);
	

	int result= constructor(message,scrabble);
	//printf("Result is: %d\n",result);
	
	return 0;
}

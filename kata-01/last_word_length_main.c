#include <stdio.h>
#include "last_word_length.h"


int main(int argc, char **argv) {

    int length=0;
	//lee la oracion en un arreglo de caracteres de manera dinamica con scanf
    char array[100];
    char * prueba_sentence=array;
    printf("Please write a sentence\n");
    scanf("%[^\n]", prueba_sentence);

    while(prueba_sentence[length]!='\0')
    {
	length++;
    }
	
    int longitud = last_word_length(prueba_sentence, length);
    printf("The sentence is: \"%s\" the length of the last word is: %d\n", prueba_sentence, longitud);





    return 0;
}







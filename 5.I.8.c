/*Write a program that, given a string, determines the number of words in the string. You can assume
that the space character ' ' is the only possible separator between words.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int i, nr_of_words;
char s[100];

int main() {
	
    printf("The string is: ");
    gets( s );  
    nr_of_words = 1;
    for ( i = 1; i < strlen ( s ); i++ )
    	
    	if ( ( s[ i ] == ' ') && ( s[ i-1 ] != ' ' ) )
    			nr_of_words = nr_of_words + 1 ;
    			
    printf ( "The number of  words is \t %d ", nr_of_words);
	
	return 0;
}

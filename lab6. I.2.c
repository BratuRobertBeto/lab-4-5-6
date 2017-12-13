/*Implement C's standard strlen function in two ways:
a) int strlen_array( char array[] )
b) int strlen_pointer( char *strp )*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, dim_array, dim_array_2;
char s[100];



int strlen_array( char array[] )
{
    int i;
    
    i=0;
    while( array[i] != '\0' )
    {
        i++;
    }
    return i;
}

int strlen_pointer( char *strp )
{
    int i = 0;
    
    while( *strp != '\0' )
    {
        i++;
        strp++;
    }
    
    return i;
	
}






int main() {
	
	printf ("The array is:\n");
	gets( s);
	
	

	printf ("\n\nPunctul a) \n\n");


	dim_array = strlen_array( s );

	printf (" %d ", dim_array );


	printf ("\n\nPunctul b) \n\n");

	dim_array_2 = strlen_pointer( s );

	printf (" %d ", dim_array_2 );
	
	return 0;
}














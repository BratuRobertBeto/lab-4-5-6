/*Let a be a string of maximum 255 characters which contains only lower case letters of the English
alphabet. Write a program that finds the longest substring in which the letters are ordered alphabetically.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( ) {
	
	char s[256];
	int i, n;
	int nr, longest;
	
	printf (" The string is:\n\t");
	scanf (" &s", s);
	longest = 0;

	nr = 0;
	
	
		for (i=0; i < strlen (s); i ++ )
			if ( s[i] < s[ i+1 ] )
			{
					nr++;
					strcpy (s+1,s);
			}
				else{
					if ( nr > longest )
							longest = nr;
					nr=1;
					}

	
	printf (" \n\n The longest substring in which the letters are ordered alphabetically is: %d \t ", longest );
	
	return 0;
}

/*A palindrome is a word that reads the same forwards as it does backwards. For example, the words
noon and madam are palindromes. Write a function named isPalindrome which determines if a string,
supplied as the single character array argument to the function, is a palindrome or not, returning a Boolean.
Use the strlen function to determine the length of the argument string.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char s[15])
	{
		char s2[15];
		strcpy ( s2, s);

		strrev (s2);

		if ( strcmp (s, s2 ) ==0 )
					return 1;
				else
					return 0;
	}

int main() {

	char s[15];

	printf ("The string is: \n\t ");
	gets( s );

	if  ( isPalindrome(s) == 1)
		 		printf (" The word is palindrome.");
		 	else
		 		printf (" The word is not palindrome.");


	return 0;
}

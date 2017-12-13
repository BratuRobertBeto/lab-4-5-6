/*Write the function strend(s,t), which returns 1 if the string t occurs at the end of the string s, and zero
otherwise.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int strend ( char *s, char *t)
{
	int ok = 1, firstPosition = t - 1;
	
	while (*s != '\0') {
		s++;
	}
	
	while (*t != '\0') {
		t++;
	}
	
	s--; t--;
	
	while (t > firstPosition && ok != 0) {
		if (*t != *s) {
			ok = 0;
		}
		t--; s--;
	}
	
	if ( ok==1 )
			return 1;
		else
			return 0;
}





int main() {
	char s1[100], s2[100];
	
	printf ("The first string is: \n");
	gets ( s1 );
	
	printf ("The second string is: \n");
	gets ( s2 );
	
	if ( strend ( s1, s2 ) == 1 )
			printf (" The string s2 occurs at the end of the string s1");
		else
			printf (" The string s2 doesn't occurs at the end of the string s1");
	
	
	return 0;
}

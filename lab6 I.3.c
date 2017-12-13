/*3. Write a pointer version of the function strcat. strcat(s,t) copies the string t to the end of s.*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void strcat2(char *s, char *t);




int main()
{
    char s1[20], s2[20];
    
    
    printf("Enter the first string: \n");
    scanf("%s", s1);
    printf("Enter the second string: \n");
    scanf("%s", s2);
    
    strcat2 (s1,s2);
    
    printf("Strings concatenated\n");
    printf("%s",s1);
    
	return 0;
}
void strcat2 (char *s, char *t)
{   

    while(*s != '\0')
    {
    	s++;
    	
	}
    while(*t != '\0' )
    {
        *s = *t;
        
        s++;
        t++;
    }
}

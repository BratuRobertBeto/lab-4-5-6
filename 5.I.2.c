
#include <stdio.h>
#include <stdlib.h>


int x[100], n;
int i, ratie, ok;


int main() {
	
	printf ("The dimension of the sequence is:\t");
	scanf ("%d", &n);
	
	printf ("\n The sequence is:\n ");
	for ( i = 0; i < n; i ++)
		{
			printf ("\t");
			scanf ("%d", &x[i] );
		}
		
	ratie = x[1] - x[0];
	ok=1;
	
	for ( i = 2; i < n; i ++)
		{
			if ( x[i] - x[i-1] != ratie )
				{
					ok=0;
					break;
				}
		}
	
	if ( ok == 1 )
			printf ( "The ratio of the progresion is: %d", ratie );
		else
			printf ( "The sequence isn't in an arithmetical progression.");
	
	
	return 0;
}

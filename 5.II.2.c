/*Considering a sequence with n elements write a program that inserts between every two consecutive
elements their average value.*/

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i, n, dim_y;
	int el_1, el_2, average;
	int x[100], y[300];
	
	printf (" The dimension is:\t");
	scanf ("%d", &n);
	
	for ( i = 1; i <= n; i ++)
			{
				printf ( " x %d \t", i);
				scanf ( "%d", &x[i]);
			}
			
	dim_y=0;
	
	y[ ++dim_y ] = x[ 1 ];
	
	for (i = 2; i <= n; i ++ )
			{
				el_1 = x[ i-1 ];
				el_2 = x[ i ];
				average= ( el_1 + el_2 )/2;
				y[ ++dim_y ] = average;
				y[ ++dim_y ] = el_2;
				
			}
	
	
	printf (" The new sequence is: \n" );
	
	for ( i = 1; i <= dim_y; i ++ )
			
				printf ( "%d  ", y[i] );
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

 
 
int main() {
 int i, j, n;
 int a[10][10];
 
 int s_area_2=0, s_area_4=0;
 int p_area_1=1, p_area_3=1;
 
 printf (" The dimension of the matrix is: ");
 scanf ("%d", &n);
 

 for ( i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
     printf ( " \n a %d  %d  ", i, j);
     printf ( " = " ); 
     scanf ("%d", &a[i][j] );
    }
    
 
 printf (" The square matrix is: \n");
 
 for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
  
    printf ( "%d ", a[i][j] );
   
     printf ( "\n" );
   }
 
  
 for ( i = 0; i < n; i++)
      for ( j = 0 ; j < n; j++)
        {
           if((i+j)<n-1 && i<j)
           {
                p_area_1 = p_area_1 * a[ i ][ j ];
           }

             if((i+j)>n-1 && i>j)
             {
                p_area_3 = p_area_3 * a[ i ][ j ];
             }

             if((i+j)<n-1 && i>j)
             {
                s_area_2 = s_area_2 + a[ i ][ j ];
             } 

             if((i+j)>n-1 && i<j)
             {
                s_area_4 = s_area_4 + a[ i ][ j ];
             }
        }
         
 printf ("\n The product from the area 1 is: %d ", p_area_1 );
 
 printf ("\n The product from the area 3 is: %d ", p_area_3 );
 
 printf ("\n The sum from the area 2 is: %d ", s_area_2 );

 printf ("\n The sum from the area 4 is: %d ", s_area_4 );

 
 
 return 0;
}

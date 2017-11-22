#include <stdio.h>
#include <stdlib.h>

void interchange(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    }

int main()
{
    int x,y;
    printf("x este:");
    scanf("%d", &x);
    putchar('\n');

    printf("y este:");
    scanf("%d", &y);
    putchar('\n');

    interchange(&x,&y);
    printf("Cele doua variabile interschimbate sunt:\n");
    printf("x este: %d", x);
    putchar('\n');

    printf("y este: %d", y);
    return 0;
}


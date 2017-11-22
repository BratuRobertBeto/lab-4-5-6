#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b, int c)
{
    int s=0;
    s=a+b+c;
    return s;
}

int product(int a, int b, int c)
{
    int p=1;
    p=a*b*c;
    return p;
}

float average(int a, int b, int c)
{
    int s=0;
    float avg;
    s=a+b+c;
    avg=s/3;
    return avg;
}

int main()
{
    int a,b,c;
    printf("Numarul a este: ");
    scanf("%d", &a);
    putchar('\n');

    printf("Numarul b este:");
    scanf("%d", &b);
    putchar('\n');

    printf("Numarul c este: ");
    scanf("%d", &c);
    putchar('\n');

    int suma, produs, medie;
    suma=sum(a,b,c);
    printf("Suma este: %d", suma);
    putchar('\n');

    produs=product(a,b,c);
    printf("Produsul este: %d", produs);
    putchar('\n');

    medie=average(a,b,c);
    printf("Media celor 3 numere este: %d", medie);

    return 0;

}


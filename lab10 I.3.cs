#include<stdio.h>
#include<stdlib.h>
int LineCounter(FILE* file_to_count_from)
{
    char c[100];
    int nr = 0;
    if ((file_to_count_from = fopen("D:\\Robert C++\\lab10\\CountLines.txt ", "r")) == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else

        while (fscanf(file_to_count_from, "%s", c) != EOF)
            nr++;

    fclose(file_to_count_from);
    return nr;
}

int main()
{
    FILE* file_to_count_from;
    printf("The file has %d lines", LineCounter(file_to_count_from));
    return 0;
}

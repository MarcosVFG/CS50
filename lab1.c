#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int years = 0;

    do
    {
        printf("Start size: ");
        scanf ("%i" , &start);
    }
    while (start < 9);

    do
    {
        printf("End size: ");
        scanf ("%i" , &end);
    }
    while (end < start);

    
    while (start < end)
    {
        start = start + (start/3) - (start/4);
        years++;
    }
    
    

    printf("Years: %i" , years);
    
}
#include <stdio.h>

int main(void) 
{
    //Perguntar o troco
    int troco;
    do
    {
        printf("Qual o troco: ");
        scanf("%i" , &troco);
    }
    while(troco < 1);
    
    int total = 0;

    while (troco >= 25)
    {
        troco -= 25;
        total++;
    }
     while (troco >= 10)
    {
        troco -= 10;
        total++;
    }
     while (troco >= 5)
    {
        troco -= 5;
        total++;
    }
     while (troco >= 1)
    {
        troco -= 1;
        total++;
    }

    printf("Total de moedas: %i" , total);
} 
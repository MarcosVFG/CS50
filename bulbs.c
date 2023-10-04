#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    int bits[] = {1,2,4,8,16,32,64,128};
    char n[BITS_IN_BYTE];
    
    printf("Mensagem: ");
    fgets(n, sizeof(n), stdin);
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int calculo(n)
{
   if (n == 0)
   {
       printf("%d", n);         
   }
   else 
   {
       calculo (n/2);
       printf("%d", n % 2);
   }
}
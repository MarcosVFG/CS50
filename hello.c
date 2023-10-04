#include <stdio.h>

int main(void)
{ 
    float x;
    float y;

    printf("Digite o valor para X: ");
    scanf ("%f" , &x);
    
    printf("Digite o valor para Y: ");
    scanf ("%f" , &y);

    if ( x > y )
    {
        printf("%.0f é maior do que %.0f" , x , y);
    }

    else if (x < y) 
    {
        printf("X é menor do que Y");
    }

    else {
        printf("X é igual a Y");
    }
}
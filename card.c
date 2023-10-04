#include <stdio.h>
#include <stdbool.h>

    bool luhnCheck(long long int number)
    {
    int sum = 0;       
    int digit;      
    int count = 0;     
    bool doubleDigit = false; 

    while (number > 0) 
    {
        digit = number % 10; 
        number /= 10;    

        if (doubleDigit) 
        {
            digit *= 2;     
            if (digit > 9) 
            {
                digit -= 9; 
            }
        }

        sum += digit;     
        doubleDigit = !doubleDigit; 
        count++;       
    }

    return (sum % 10 == 0) && (count >= 13);
    }

int main(void) 
{
    long long int  cardNumber;
    printf("Credit card number: ");
    scanf("%lld" , &cardNumber);

     if (luhnCheck(cardNumber)) 
     {
        printf("Valid!\n");
     } else 
        {
            printf("Invalid!\n");
        }

}
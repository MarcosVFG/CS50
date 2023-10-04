#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) 
{
    int sum = 0;
    char texto[100];
    int t;
    char *endptr; 
    long int numero = strtol(argv[1], &endptr, 10);

    if(argc == 2 && numero)
    {
        printf("plaintext: ");
        fgets(texto, sizeof(texto), stdin);
        printf("ciphertext: ");

        for (int i = 0; i < strlen(texto) - 1; i++)
        { 
            char c = texto[i];
            int conversao = (int)c;
            if(conversao >= 65 && conversao <= 90)
            {
                int sum = conversao += numero;
                while (sum > 90)
                {
                    sum -= 26;
                }
                char novo = (char)sum; 
                printf("%c", novo);             
            }
            else if (conversao >= 97 && conversao <= 122) {
                int sum = conversao += numero;
                while (sum > 122)
                {
                    sum -= 26;
                }
                char novo = (char)sum; 
                printf("%c", novo);
            }
            else 
            {
            char novo = (char)conversao;
            printf("%c", novo); 
            }
        }

    }
    else
    {
        printf("Key");
    }
   
} 
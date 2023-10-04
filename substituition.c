#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void troca (char *str, char antigo, char novo);

int main(int argc, char *argv[]) 
{
    int chave = strlen(argv[1]);
    char texto[100];
    bool isNumber;
    char final;
    bool repetido;
    bool repetidodois;

    for (int i = 0; i < chave; i++)
    { 
        char c = argv[1][i];
        int conv = (int)c;
        if (conv >= 48 && conv <= 57) 
        {
            printf("Key");
            isNumber = true;
            return isNumber;
        }
        else
        {

        }
    }    

    for(int i = 0; i < chave - 1; i++)
    {
        for (int j = i + 1; j < chave; j++) 
        {
            if (argv[1][i] == argv[1][j]) 
            {
                repetido = true;
                break;
            }
        }
        if (repetido) 
        {
            break;
        }
    }

    if(argc == 2 && chave == 26 && !isNumber && !repetido) 
    {
        printf("plaintext: ");
        fgets(texto, sizeof(texto), stdin);
        printf("ciphertext: ");
        
        for(int i = 0; i < strlen(texto) - 1; i++) 
        {
            char c = texto[i];
            int conver = (int)c;
            if (conver >= 65 && conver <= 90)
            {
               char c = texto[i];
               char t = argv[1][i];
               final = toupper(t);
               troca (texto, texto[i], final);
            }
            else if (conver >= 97 && conver <= 122)
            {
               char c = texto[i];
               char t = argv[1][i];
               final = tolower(t);
               troca (texto, texto[i], final);
            } 
        }
        printf("%s", texto);
    }
    else 
    {
        printf("Key");
    }
}

void troca (char *str, char antigo, char novo) 
{
    int comprimento = strlen(str);

    for (int i = 0; i < comprimento; i++)
    {
        if (str[i] == antigo) 
        {
            str[i] = novo;
        }
    }
}
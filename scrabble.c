#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char listaOne[] = {'A' , 'E' , 'I' , 'L' , 'N' , 'O' , 'R' , 'S' , 'T', 'U'};
    char listaTwo[] = {'D' , 'G'};
    char listaThree[] = {'B' , 'C' , 'M' , 'P'};
    char listaFour[] = {'F' , 'H' , 'V' , 'W'};
    char listaFive[] = {'K'};
    char listaEight[] = {'J' , 'X'};
    char listaTen[] =  {'Q' , 'Z'}; 
    char playerOne[50];
    char playerTwo[50];
    int scoreOne = 0;
    int scoreTwo = 0;
    
    printf("Player 1: ");
    fgets(playerOne, sizeof(playerOne), stdin);

    printf("Player 2: ");
    fgets(playerTwo, sizeof(playerTwo), stdin);

    for (int i = 0; i < strlen(playerOne); i++)
    {
        char c = playerOne[i];

        if(c == '\n')
        {
            break;
        }

        int teste = (int)c;

        if(teste >= 97 && teste <= 122)
        {
            c = toupper(c);
        }

        for(int j = 0; j < 30; j++)
        {
            if(c == listaOne[j])
            {
                scoreOne += 1;
                break;
            }
            else if(c == listaTwo[j])
            {
                scoreOne += 2;
                break;
            }
            else if(c == listaThree[j])
            {
                scoreOne += 3;
                break;
            }
            else if(c == listaFour[j])
            {
                scoreOne += 4;
                break;
            }
            else if(c == listaFive[j])
            {
                scoreOne += 5;
                break;
            }
            else if(c == listaEight[j])
            {
                scoreOne += 8;
                break;
            }
            else if(c == listaTen[j])
            {
                scoreOne += 10;
                break;
            }
            else if (c != listaOne[j] && c != listaTwo[j] && c != listaThree[j] && c != listaFour[j] && c != listaFive[j] && c != listaEight[j] && c != listaTen[j]);
            {
                scoreOne += 0;
                break;
            }
        }
    }

     for (int i = 0; i < strlen(playerTwo); i++)
    {
        char c = playerTwo[i];

        if(c == '\n')
        {
            break;
        }

        int teste = (int)c;

        if(teste >= 97 && teste <= 122)
        {
            c = toupper(c);
        }

        for(int j = 0; j < 30; j++)
        {
            if(c == listaOne[j])
            {
                scoreTwo += 1;
                break;
            }
            else if(c == listaTwo[j])
            {
                scoreTwo += 2;
                break;
            }
            else if(c == listaThree[j])
            {
                scoreTwo += 3;
                break;
            }
            else if(c == listaFour[j])
            {
                scoreTwo += 4;
                break;
            }
            else if(c == listaFive[j])
            {
                scoreTwo += 5;
                break;
            }
            else if(c == listaEight[j])
            {
                scoreTwo += 8;
                break;
            }
            else if(c == listaTen[j])
            {
                scoreTwo += 10;
                break;
            }
            else if (c != listaOne[j] && c != listaTwo[j] && c != listaThree[j] && c != listaFour[j] && c != listaFive[j] && c != listaEight[j] && c != listaTen[j]);
            {
                scoreTwo += 0;
                break;
            }
        }
    }

    if(scoreOne > scoreTwo)
    {
        printf("Player 1 wins\n");
    }
    else if(scoreOne < scoreTwo)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie\n");
    }
 
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lib/cs50.h"

int main(int argc, string argv[])
{
    int key = 0;

    if (argc != 2)
    {
        printf("Como usar: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < (int) strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Como usar: ./caesar key\n");
            return 1;
        }
        key = (key * 10) + (argv[1][i] - '0');
    }

    if(key <= 0)
    {
        printf("Como usar: ./caesar key\n");
        return 1;
    }

    if (key > 26)
    {
        key = key % 26;
    }

    string plaintext = get_string("plaintext: ");
    int caracteres = strlen(plaintext);
    int cripto = 0;

    for (int i = 0; i < caracteres; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                cripto = plaintext[i] - 'A';
                cripto = cripto + key;
                cripto = cripto + 'A';

                if(cripto > 90)
                {
                    cripto = cripto - 26;
                }
                printf("%c", cripto);
            }

            else if (islower(plaintext[i]))
            {
                cripto = plaintext[i] - 'a';
                cripto = (cripto + key) % 26;

                printf("%c", cripto + 'a');
            }
        }

        else
        {
            cripto = plaintext[i];
            printf("%c", cripto);
        }
    }

    return 0;
}
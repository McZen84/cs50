#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    // check for 2 arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // check for alphabeticals
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (isalpha(argv[1][i]) != 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // get cypher key
    int key = atoi(argv[1]);
    {
        // get plaintext
        string text = get_string("Plaintext: ");

        // ciphertext = (plaintext + shift) % 26) shift)
        printf("Ciphertext: ");
        for (int i = 0, n = strlen(text); i < n; i++)

            if (islower(text[i]))
            {
                printf("%c", ((text[i] - 97 + key) % 26) + 97);
            }

            else
            {
                printf("%c", ((text[i] - 65 + key) % 26) + 65);
            }
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>
unsigned char *plain;
int key(char chr);
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere <key>\n");
        return 1;
    }
    int i;
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        if (argv[1][i] < 65 || argv[1][i] > 122)
        {
            printf("That key isn't valid\n");
            return 1;
        }
    }
    plain = get_string("plaintext: ");
    int j = 0;
    for (i = 0; plain[i] != '\0'; i++)
    {
        if (plain[i] >= 65 && plain[i] <= 122)
        {
            bool cap = plain[i] <= 90;
            plain[i] = (plain[i] + key(argv[1][j]));
            if (plain[i] > 122)
            {
                plain[i] = plain[i] % 122 + 96;
            }
            if (cap && plain[i] > 90)
            {
                plain[i] -= 26;
            }
            j++;
            if (argv[1][j] == '\0')
            {
                j = 0;
            }
        }
    }
    printf("ciphertext: %s\n", plain);
    // }
    // }
}

int key(char chr)
{
    if (chr >= 97)
    {
        return chr - 97;
    }
    return chr - 65;
}

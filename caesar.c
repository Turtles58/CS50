#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
unsigned char *plain;
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: ./caeser <key>\n");
        return 1;
    }
    int key = atof(argv[1]);
    key = key % 26;
    plain = get_string("plaintext: ");
    int i;
    for (i = 0; plain[i] != '\0'; i++)
    {
        if(plain[i] >= 65 && plain[i] <= 122){
            plain[i] = (plain[i] + key);
            if (plain[i] > 122)
            {
                plain[i] = plain[i] % 122 + 96;
            }
        }
    }
    printf("ciphertext: %s\n", plain);
    // }
    // }
}
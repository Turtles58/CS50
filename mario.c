#include <cs50.h>
#include <stdio.h>
int height = -1;
int main()
{
    while (height < 0 || height > 23)
    {
        printf("height: ");
        height = get_int();
    }
    int i;
    int j;
    int k;
    for (i = 0; i < height; i++)
    {
        for (j = i; j < height - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("#\n");
    }
    // for (i = 0; i < height; i++)
    // {
    //     for (k = 0; k < i; k++)
    //     {
    //         printf("#");
    //     }
    //     printf("#\n");
    // }
}
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
long long days = 0;
long long amount = 0;
long long calcPennies(long long days, long long amount)
{
    if (days == 1)
    {
        return amount;
    }
    return amount + calcPennies(days - 1, amount * 2);
}
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: ./pennies <numdays> <amount on 1st day>\n");
        return 1;
    }
    days = atoi(argv[1]);
    amount = atoi(argv[2]);
    // scanf("%i", &days);
    if (days < 28 || days > 31)
    {
        printf("The number of days should be between 28 and 31");
        // days = get_long_long();
        return 1;
    }
    // if(days < 28 || days > 31) return 0;
    while (amount < 1)
    {
        printf("The amount on the first day should be greater than or equal to 1.");
        // amount = get_long_long();
        return 1;
    }
    // scanf("%i", &amount);

    // if(days < 1) return 0;
    printf("$%.2f\n", (double)calcPennies(days, amount) / 100);
}

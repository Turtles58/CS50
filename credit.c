#include <cs50.h>
#include <stdio.h>
int sum = 0;
int temp;
long long dupe;
int main()
{
    long long num = get_long_long("Number: ");
    dupe = num;
    int i;
    for (i = 0; i < 8 && num >= 10; i++)
    {
        sum += num % 10;
        num /= 10;
        temp = 2 * (num % 10);
        num /= 10;
        sum += temp % 10;
        temp /= 10;
        sum += temp;
        // printf("%i\n", sum);
    }
    sum += num;
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (dupe > 100000000000000 && dupe < 1000000000000000)
    {
        printf("AMEX\n");
    }
    else if (dupe / 1000000000000000 == 4 || dupe / 1000000000000 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("MASTERCARD\n");
    }
}
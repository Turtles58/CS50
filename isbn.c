#include <stdio.h>
#include <cs50.h>

int main()
{
    long long num = get_long_long("Number: ");
    int check = num % 10;
    int sum = 0;
    num /= 10;
    int i;
    for (i = 9; i > 0; i--)
    {
        sum += num % 10 * i;
        num /= 10;
    }
    if (sum % 11 == check)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
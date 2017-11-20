#include <cs50.h>
#include <stdio.h>
int denoms[4] = {25, 10, 5, 1};
int minimum(double change);
int main()
{
    printf("How much change? ");
    double change = get_double();
    printf("%i\n", minimum(change));
}
int minimum(double change)
{
    int result = (int)(change * 100);//casting to int should remove the decimal
    printf("%i!%f!", result, change);
    int i = 0;
    int count = 0;
    while (i < 4)
    {
        if (result >= denoms[i])
        {
            result -= denoms[i];
            count++;
        }
        if (result < denoms[i])
        {
            i++;
        }
    }
    return count;
}
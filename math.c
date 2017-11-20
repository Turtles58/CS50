#include <cs50.h>
#include <stdio.h>
double x;
double y;
int main(void)
{
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);
    printf("+ %.1f\n- %.1f\n * %.1f\n / %.1f\n", x + y, x - y, x * y, x / y);
    // }
    // }
}
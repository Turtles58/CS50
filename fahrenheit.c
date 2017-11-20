#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
double temp;
double ans;
int main(int argc, char **argv)
{
    // printf("What temperature do you want to convert from? ");
    // temp = get_float();
    // if(scanf("%lf",&temp) !=1)
    //     printf("Non numeric input rejected\n");
    // else{
    // temp = get_long("What temperature do you want to convert from? ");
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <temp>\n");
        return 1;
    }
    temp = atof(argv[1]);
    ans = temp * 9 / 5 + 32;
    printf("%.1f\n", ans);
    // }
    // }
}
#include <stdio.h>
#include <cs50.h>
float result;
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        return 1;
    }
    float arg_one = atof(argv[1]);
    float arg_two = atof(argv[3]);
    // printf("%f", arg_one);
    switch (argv[2][0])
    {
        case '+':
            result = arg_one + arg_two;
            break;
        case '-':
            result = arg_one - arg_two;
            break;
        case 'x':
            result = arg_one * arg_two;
            break;
        case '/':
            result = arg_one / arg_two;
            break;
        case '%':
            result = arg_one - (arg_two * ((int) (arg_one / arg_two)));
            break;
        default:
            return 1;
    }
    printf("%.6f\n", result);
    return 0;

}
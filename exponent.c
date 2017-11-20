#include <stdio.h>
double exponent(double base, int power);
double b;
int p;
int main(){
    printf("What is the base?");
    scanf("%lf", &b);
    printf("What is the exponent?");
    scanf("%i", &p);
    printf("The result is %f\n", exponent(b, p));
}
double exponent(double base, int power){
    if(power == 0) return 1;
    if(power == 1) return base;
    if(power == -1) return 1/base;
    if(power > 1) return base * exponent(base, power-1);
    if(power < -1) return 1 / exponent(base, -1*power);
}

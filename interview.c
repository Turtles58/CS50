#include <cs50.h>
#include <stdio.h>
int age;
bool gender; //triggered
unsigned int grade;
char first_initial;
int main(void)
{
    printf("How many years you have?");
    age = get_int();
    printf("what gender????? \"m\" or \"f\"");
    char gendTemp;
    gendTemp = get_char();
    gender = (gendTemp == 'm' || gendTemp == 'M');
    printf("The first initial of the word that people use to address you?!?!?!??");
    first_initial = get_char();
    printf("How many grades you is?");
    grade = get_int();
    printf("You have %i years, you gender is %d, the first name of your initial is %c and you is %d grades.\n", age, gender, first_initial, grade);
}
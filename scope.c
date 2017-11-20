#include <cs50.h>
#include <stdio.h>

void cough(int n);
void say(char word[], int n);

int n = 3;
int main(void)
{
    n = 1;
    cough(n); //How many times will this print?
}

void say(char word[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}

void cough(int n)
{
    say("cough", n);
}
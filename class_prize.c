#include <stdio.h>
char students[5][7] = {"this", "is", "really", "stupid", "."};
int main()
{
    int i;
    for(i = 0; i < 5; i++){
        printf("%s\n", students[i]);
    }
    int whatever;
    printf("witch werde bee issing on you'rr favoriting/??//");
    scanf("%i", &whatever);
    printf("%s\n", students[whatever]);
}

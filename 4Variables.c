#include<stdio.h>
int main(){
    char ch;
    int i;
    float f;

    ch = 'A';
    i = 10;
    f = 13.25;

    float pie = 3.141;
    printf("%c\t%d\t%f\t%f\n", ch, i, f, pie);

    /* Reading and Writing character variable */
    char inputCharacter;
    inputCharacter = getchar();
    putchar(inputCharacter);
    return 0;
}
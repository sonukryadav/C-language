#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch); // & called address of
    printf("%d\t %c", ch, ch);

    // using getchar, putchar and scanf together
    char ch1;
    ch1 = getchar();
    putchar(ch1);
    scanf("\t%d", putchar(ch1));
    return 0;
}
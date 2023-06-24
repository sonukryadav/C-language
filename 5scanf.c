#include<stdio.h>
int main(){
    // using getchar, putchar and scanf together
    char ch1;
    ch1 = getchar();
    putchar(ch1);
    printf("\t%d", putchar(ch1));
    printf("\n");
    //input:  a
    //output: aa    97

    char name[20];
    int age;
    float percentage;
    printf("Enter your name, age and percentage : ");
    scanf("%s%d%f", name, &age, &percentage);
    printf("name : %s, age : %d, percentage : %f", name, age, percentage);
    return 0;
}
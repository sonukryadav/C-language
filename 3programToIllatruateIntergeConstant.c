#include<stdio.h>
#include<limits.h>
int main(){

    // Short----------------------------------
    printf("Short integer constant 65\n");
    // Short integer constant 65
    printf("Short integer constant %hd\n", 65);
    // Short integer constant 65
    printf("Short integer constant %hd\n", 32768);
    // Short integer constant -32768
    printf("Short integer constant %hu\n", 32768);
    // Short integer constant 32768
    printf("Short integer constant %hu\n\n", 65536);
    // Short integer constant 0


    // Integer---------------------------------
    printf("Integer constant 65\n");
    // Integer constant 65
    printf("Integer constant %d\n", 65);
    // Integer constant 65
    printf("Integer constant %d\n", 32768);
    // Integer constant 32768
    printf("Integer constant %d\n", 2147483648);
    // Integer constant -2147483648
    printf("Integer constant %u\n", 2147483648);
    // Integer constant 2147483648
    printf("Integer constant %u\n\n", 4294967296);
    // Integer constant 0


    //limits-----------------------------------
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    // SHRT_MIN = -32768
    printf("SHRT_MAX = %d\n", SHRT_MAX);
    // SHRT_MAX = 32767
    printf("USHRT_MAX = %u\n\n", USHRT_MAX);
    // USHRT_MAX = 65535


    printf("INT_MIN = %d\n", INT_MIN);
    // INT_MIN = -2147483648
    printf("INT_MAX = %d\n", INT_MAX);
    // INT_MAX = 2147483647
    printf("UINT_MAX = %u\n\n", UINT_MAX);
    // UINT_MAX = 4294967295


    printf("LONG_MIN = %ld\n", LONG_MIN);
    // LONG_MIN = -2147483648
    printf("LONG_MAX = %ld\n", LONG_MAX);
    // LONG_MAX = 2147483647
    printf("ULONG_MAX = %lu\n", ULONG_MAX);
    // ULONG_MAX = 4294967295

}
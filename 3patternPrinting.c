// Print the below pattern( without any DSA)
/*
******

*    *

*    *

*    *

******
*/

#include <stdio.h>
#define ROWS 6
#define COLUMNS 9

int main(){
    for (int i = 1; i <= 9; i++){
        if( i== 1 || i == 9){
            printf("******\n");
        }else if(i%2 == 0){
            printf("      \n");
        }else if(i%2 != 0){
            printf("*    *\n");
        }
    }
}
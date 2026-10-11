
// this is to revise on how to create a function
#include <stdio.h>

int sqr (int number){
    int result = number * number;
    printf("%d", result);

    return result;
}

int main (){
    
    sqr(4);
    printf("\n");

    return 0;
}
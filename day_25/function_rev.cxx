
// this is to revise on how to create a function
#include <stdio.h>

int sqr (int number){
    int result = number * number;
    printf("%d", result);

    return result;
}

int main (){
    
    int val;
    printf("Enter the number to find its' square : ");
    scanf("%d", &val);

    sqr(val);
    printf("\n");

    return 0;
}
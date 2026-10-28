#include <stdio.h>
#include <math.h>

void sumn(int* num1,int* num2);

int main(){
//accetps 1st number
    int a;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &a);

//accepts 2nd number
    int b;
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &b);

//calls the function for summation
    sumn(&a ,&b);

    return 0;

}

void sumn(int* num1,int* num2){
    int sum = *num1 + *num2;
    printf("A + B = %d\n", sum);
}
#include <stdio.h>
#include <math.h>

int* addNumber(int* num1, int* num2, int* sum){

*sum = *num1 + *num2;

    return sum;
}

int main(){

    int a = 25;
    int b = 30;
    int c;

    int* result = addNumber(&a ,&b, &c);
    
    printf("THE RESULT IS : %d", *result);

    return 0;

}
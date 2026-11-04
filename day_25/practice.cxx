// multiplication of two number
#include <stdio.h>

int* mul( int* num1, int* num2, int* product){
 *product = *num1 * *num2;
 return product;
}

int main(){
 int a = 24;
 int b = 32;
 int c;

int* result = mul(&a, &b, &c);
printf(" the result is %d", *result);

   return 0; 
}
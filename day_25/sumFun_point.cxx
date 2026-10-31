#include <stdio.h>
#include <math.h>


int* sumFunc (int* num1, int* num2, int* sums){
   
   *sums = *num1 + *num2;

   return sums;
}



int main(){

int a = 10;
int b = 23;
int c;

int* result = sumFunc(&a,&b, &c);
printf("the rsult is %d", *result);
    return 0;
}




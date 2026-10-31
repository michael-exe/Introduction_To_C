#include <stdio.h>


int* findSqr(int* number){// this accepts the pointer as its' parameter

int sqr = *number * *number;// the sqr of he value is found using the value which the pointer points to


 *number = sqr;//we are intializing the value of number to become the value of the square
   return number;
   // recall that int* number1 = &number2; where number2 is the address which the pointer number1 points to
//jump line 10
}

int main(){
            int number = 21;

int* result = findSqr(&number);
// hence why we have int*result = number; where we are printing the 
           
printf("Result is \n%d\n", *result);
            // int* number = &number;

    return 0;
}
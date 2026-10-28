#include <stdio.h>
void findSqr(int* number){// this accepts the pointer as its' parameter

int sqr = *number * *number;// the sqr of he value is found using the value which the pointer points to


 *number = sqr;//we are intializing the value of number to become the value of the square
    
}

int main(){
            int number = 21;

            findSqr(&number);

            printf("\n%d\n", number);

            // int* number = &number;

    return 0;
}
#include <stdio.h>
void findSqr(int* number){

int sqr = *number * *number;


 *number = sqr;

}
int main(){
int number = 21;

findSqr(&number);

 printf("\n%d\n", number);



    return 0;
}
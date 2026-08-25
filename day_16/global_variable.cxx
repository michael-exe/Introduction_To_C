// Gloval variable scope
/*
These are varibles that are decleard outside a function
*/
//Addition Function
#include <stdio.h>
int add;//add was created int this line
void addNumber(int number1, int number2){
add = number1 + number2;//int was removed from this line
printf("The adddtion of %d and %d is     :\n    %d", number1, number2, add );
}
int main()
{
    addNumber(1,6);
    printf(" Result is %d", add);
    // The "add" is accessible from both function (addNumber , and main) 00hence its is a globale variable
    
    return 0;
}
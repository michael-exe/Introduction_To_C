/*
A function prototype isna declaration of a function. It provides information about the function name ,parameters and return types, however it does not include the body.
*/
#include <stdio.h>

int addNumber(int number1, int number2);

int main()
{
   int result = addNumber(1,6);
    printf("Result is %d", result);
    
    return 0;
}

//as you can see the function is after the main function
int addNumber(int number1, int number2)
{
int add = number1 + number2;
return add;
printf("After return");
}
//as you can see it still runs. If we are definig a function before funcyion call a function prototype is not needed.

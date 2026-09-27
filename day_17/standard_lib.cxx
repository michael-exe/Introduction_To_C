//Standard Library Functions
 /* A standard library function is a predefine fubctions that is already inside a file. we can use them in our program.
 e.g
 the definition of printf,scanf is defined in stdio.h library, that is why we add the header file to be able to acces the functi9ns in them.
 C library Files
 1. math.h file :help to perform mathematical operations easily. e.g. sqrt() is used to find the square root of a number
 
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int num = 36;
	printf("    Square root is %lf", sqrt(num));//sqrt return the output in double so the lf format soecifier is used
	
	int dig = 27;
	printf("\n    Cube root is %lf", cbrt(dig));//cube root
	
	int a = 5;
	int b = 2;
double result = pow (a, b);
printf("\n    Th power is %lf ", result);//a^b
	return 0;
}
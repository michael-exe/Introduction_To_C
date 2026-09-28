#include <stdio.h>
int main(int argc, char *argv[])
{
    
int a = 5;
int b = 9;	
int sum = a + b;
printf("The sum of the numbers is %d", sum);
// similarly when we use char


char c = '5';
int sum1 = c + b;
printf("\nthis is also the sum %d", sum1);
//but this time around the integer equivalent of the charater is used by the compiler . the compile c9nverts the character value ti aske value


double x = 5.67;
int sum2 = x + b;
printf("\n This is the sum in this case %d ", sum2);/* in this case the result seems like the double is converted to int value of 5 then added to the imt value but its the other way around after which the double result is converted to integer value*/
 
 
 //to verify
 
 double y = 5.67;
 double sume = y + b;
 printf("\n %lf", sume);
 
 
//DATA TYPE CONVERSION IS DONE IN HEIRACHY
/*Data type heirachy

long double
double
float
long
int
short
char

The types below are converted to those above. Except when the assignment operator is used; the data type on the right is concerted to that on the left
NB ALL THESE ABOVE ARE IMPLICIT CONVERSIONS because they are done automatically by the compiler.

*/
return 0;
}
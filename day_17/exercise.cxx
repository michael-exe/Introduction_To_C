// creating a program that computes the result of a nimber raised to the power of the square root number
#include <stdio.h>
#include <math.h>
int main() 
{
	int a;
	printf("Enter a number  :   ");
	scanf("%d", &a);
	
    double root = sqrt(a);
    double result = pow(a, root);
	printf("The result is     :    %lf", result);
	
	return 0;
}
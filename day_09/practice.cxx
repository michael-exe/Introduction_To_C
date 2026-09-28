/*
create a program to check whether a number is positive, negative, or 0?
To create this program, create a variable named number and assign a double value to it based on the user input. Then, using an if statement, check if the number variable is positive, negative, or 0.
If the number is positive, print: "The number is positive"
If the number is negative, print: "The number is negative"
If the number is 0, print: "The number is 0"
*/

#include <stdio.h>
int main()
{
	double number;
	printf("        Enter a number : ");
	scanf("%lf", &number);
	
	if( number > 0){
	printf("        This number is a positive number");
	}
	else if (number < 0){
	    printf("        Thus number is a negative number");
	}
	else if (number == 0){
	    printf("        This is Zero");
	}
	else 
	    printf("        This is not a number");
	
	return 0;
}
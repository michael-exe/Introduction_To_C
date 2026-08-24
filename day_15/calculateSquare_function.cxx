/*
A parametric function is a function that accepts input from the user and uses it to perform an action.
E.g.
A function that calculate the square of an inputed number
*/

#include <stdio.h>

void calculateSquare(int number){
    // A function can accept multiple parameters aka arguments
    int square = number * number;
    printf("Square of %d is %d", number, square);
    
}

int main()
{
	calculateSquare(4);
	/* The function accepts a parameter whichbis in form of a number and the function call uses a ninber as the value
	*/
	calculateSquare(7);
	
	
	return 0;
}
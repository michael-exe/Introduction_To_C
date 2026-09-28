#include <stdio.h>
int main()
{
	/* program that accepts input from a user, but if it us a negative number the loop is broken
	if user input a +ve value, it will be printed. However if the user input -ve value the loop would be terminated 
	
	*/
	¹
	while ( 1 ){ // Since 1 is always true the block of code would always be executed
	    int a; // initializes a variable
	    printf("    Enter a number    :    ");// instruction message
	    scanf("%d", &a);//accept the user data input
	    if(a < 1){
	        break;	//if the condition is me then it exits the code if not, it prints the value of the +ve number   
	    }
	    printf("    %d\n", a);// this is printed if the number is positive if not it does the if statement
	}
	
	return 0;
}
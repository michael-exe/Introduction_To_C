/* For loop 
It is also used to repeate a certain block of codes for a specific number of times.
syntax
        for (initializationExpression; testExpression; updateExpression) {
            "code inside the for loop''
            }
            
            
        NB    :    The initializationExpression, declars amd initializes a variable and is executed only onces.
        The testExpression is a boolean expression that checks if an expression is true or false. If the testExression is true then the block of code in the "for" would be executed
*/
#include <stdio.h>
int main()
{
	for (int i = 0; i < 10; i ++) {    // i++ increases the vlaue of i after each repetition. if it were ++i it would be different.
	//e.g. tp print numbers from 0 -> 9
	
	printf("    %d \n", i);
	/*the body can be used to print something a number of times as well, e.g.  
	printf("Emergency");
	the number of time would be specified usimg the test condition
	*/
	
	
	}
	/*
	 for the codes, it stores 0 as it intial value, checks if its less than 10 then printf it afterward increases the value of i by 1 and stores it them prints it. Then it increases i by 1 to make 3 and it goes on until the test condition returns a false value
	*/
	
	
	
	
	
	return 0;
}
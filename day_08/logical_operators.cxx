// logical operators are used with booloen expression to perform logical operations
	/*
	|| OR 
	&& AND
	! NOT
	*/
	
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
	//AND &&
	int age = 18;
	double height = 6.3;
	
	bool pass = (age >= 18) && (height > 6.0 );
	printf("        ->  %d  <-  Pass", pass);
	// operator returns true if both conditions are met. In this case it will return true because the inout afe isn18bamd the height is above 6.0. If any of thoe values change to anyother value less than that set as the condion it would return a vslue of 0
	
	
	//OR  ||
		int agee = 18;
	double heightt = 5.90;
	
	bool pas= (age >= 18) || (height > 6.0 );
	printf(" \n\n       ->  %d  <-  Pass", pas);
	// this only needs at least one of the conditionto be met to return a true value of 1
	
	
	//NOT !
// Unlike the other logical operators ,the not uses on oy one boolean expression
	int ageINyrs = 18;
	
	
	bool usePass = ! (ageINyrs >= 18);
	printf(" \n\n       ->  %d  <-  Pass", usePass);
	// not just returns the opposite of the result of the conditon.
	return 0; 
}
#include <stdio.h>
int main(int argc, char *argv[])
{
		int age;
	printf("        ENTER YOUR AGE:    ");
	scanf("%d", &age);
	
	//the if...else clause allows us to make decision fro two options, but else if allows us to make decision from more than two different options
	
		if (age > 65 || age <= 0){
	    printf("        You no fit vote");
	         	}
	  else if (age >= 18) {
	   printf("        You are eligible to vote");
	             }
        else  {
	   printf("        You no fit vote");
	             }
	  
	//in using else if always use condiotons that are unlikely to be met befroe the omes who will most likely be met.
	
	
	//the first condition would be checked, if met it would skipp others and end code if notnit will check the next else if condition...  henxe else if statement can be used
	return 0;
}
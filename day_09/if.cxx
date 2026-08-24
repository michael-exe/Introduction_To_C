// The if statement is used to make decison making programs
/*
syntax
if (test_condition){
  body of if statement
  }

the test condition is a boolean exoression. of its true the body of the if statement would be executed
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	//this is a viters elegibility checker
	int age;
	printf("        Enter your age:    ");
	scanf("%d", &age);
	
	if (age >= 18){
	    printf("        You are eligible to vote");
}
     if (age < 18){
        printf("        Sorry you are not eligible to vote");
}


//if the body of an if command has only one statement then the curly bracket {}  can be omited
return 0;

}
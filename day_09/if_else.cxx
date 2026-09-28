#include <stdio.h>
int main(int argc, char *argv[])
{
	int age;
	printf("        ENTER YOUR AGE:    ");
	scanf("%d", &age);
	
	if (age >= 18){
	    printf("        You are eligible to vote");
	 
	}
	
	   else{
	    printf("        You no fit vote");
	   }
	
	return 0;
}
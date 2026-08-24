//  Tenaey operators can be used to replace if...else statement in seom cases to make the code look cleaner
/*
syntax

(test_condition) ? expression_one : expression_two;

if the test condition is true then the first exoression would be executed, if  not (i.e. if false) the second expression would be excuted
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int age;
	printf("        Enter your age :        ");
	scanf("%d", &age);
	(age >= 18) ?  printf("\nYou can vote") : printf( "\nYou cannot vote");
}
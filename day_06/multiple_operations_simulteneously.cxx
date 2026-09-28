#include <stdio.h>
int main(int argc, char *argv[])
{
	//to use multiple operators at omce
	
	int x = 4/2*10+3-3;
	printf("%d", x);
	// here the division between 4 and 2 takes place then the result is multilied by 10 after which 3 is added to the result them 3 is subtracted from it again to give 20
	//usually the compiler uses a principle called precidence amd associativity. Operators with high precedence are executed first while ones with low precedence are executed last.
	// the use of parenthesis makes it easier to understand code with multiple operators
	
	
		
	int y = ((4/2)*10)+(3-3);
	printf("\n\n%d", x);
	return 0;
}
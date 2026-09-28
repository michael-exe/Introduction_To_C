//Do while loops
#include <stdio.h>
int main()
{
	int count = 6;
	do {
	    printf("        %d\n", count);
	    count = count + 1;
	}while(count < 5);
	/*here the program is executed fiesr then a conditon is check to determine if it should be repeated. That is why the program can still be executed once if the conditon is even false. u like for that for anything to be executed the conditon must first be met
	You can veryfy be increasing the preinitiated count ,which does 
	
	*/
	return 0;
}
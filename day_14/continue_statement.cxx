// Unlike break, which stops the iteration, the continue only skips the current iteration then start the loop agaim from the next iteration
#include <stdio.h>
int main()
{
	
	for ( int i = 1; i <= 5; i++){
	    
	  if (i == 3)  {
	    continue;
	}
	printf("Rhema    %d\n", i);// the thrid step is skipped therefor 3 wont be printed
	}
	return 0;
}
// Recursive Function
/* In c recursion is a process in programming that allows us to creates a function that calls itself
*/

#include <stdio.h>

void recurse()
{ 
    recurse();
}

int main()
{
	recurse();
	
	return 0;
}
/* In the main function the recurse functuon is called. The compler moves into the functions and calls the recurse function again  reulting in an infinite loop. To aboud it repeating infinitely we can use thw if...else sratment to set a limit to the recursion.

    syntax:
    
    void recurse()
{ 
    if(conditon){
        ........
        
    }
    else{
        recurse()
        }
}

int main()
{
	recurse();
	
	return 0;
}

Here the fubction would only repeat itself if the comdition is not met. when its met the compiler moves out of the function.
eg. you can use it to seek a specific data using a sample as the conditon if it meet the condiotn thatean it has found that data

*/
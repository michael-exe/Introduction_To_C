//finite recursive calls
/*
They a recursive calls that gets terminated when the condition for the rexursion has been met
syntax

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


It can be used for verification keys where the key enterd by the user is verified until he or she enters a valid key.
*/
#include <stdio.h>

int sum(int n);

int main()
{
	int number , result;
	printf("Enter a posutuve integer    :    ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("Sum = %d", result);
	
	return 0;
}

int sum(int n){//my question is so the n and the number would be recognised as the same thing ?
    if(n != 0){
        //sum functuon calls itself
        return n + sum(n - 1);
    }
    else {
    return n;
    }
}
/*OR 
t sum(int n){
    if(n == 0){
        //sum functuon calls itself
        return 0;
    }
    else {
    return n + sum(n - 1);
    }
}


*/
/*     . . .    Variabke Scope    . . .
A scope is a particular reason in a program, and a variable scope determines which varoable can be accessed from which region of a region
 There are two types of scopes
 1. locap scopes
 2. Global scopes
*/

// Local scopes
int main();
//Addition Function
#include <stdio.h>
void addNumber(int number1, int number2){
int add = number1 + number2;//(original position)  printf("The rrsult is %d", add )
return add;
}
int main()
{
    int sum = addNumber(1,6);//addNumbers(1,6) was replaced
    printf("The rrsult is %d", sum);//(demo position)
 /*
  As you can see the compiler doesnt print out the add vakue because it is out of its scope already. There fore the add variable is a local variable and can only be called to when in the function. But the if any variable 8s called outside the varible it wont work.
  
  
  
  In the case above the compiler is basically treating the code as if its just coming across the varible result for the first time. When the function ends al the variable are temporarily destryed as if they dont exist*/
  
  
  
  
  // With a return statement we can acees a vraiable by storing the function call in another variable
    return 0;
}
/*
A function is a group of related statement that perform a specific task overall. they help divid a large code int smaller chunks so that it is easier to understand

syntax :
                    returnType functionName(){
                         
                         *        *        *
                         *        *        *
                        }

the reurntype is the datatype of the vlaue that would be return be the function
NB :  ->    When no value is to be returned by the function the return tyoe should be set to "void"
   ->         To call a function we use the function name w8th a parenthesis that hold the parameters, but in this case no prameter is needed
    ->        It is a good practice to use discriptive names to give your finctions name
*/

#include <stdio.h>

void greet() {
    printf("Good morning\n");
    
}

int main()
{
	greet ();
	greet();
	greet();
	
	return 0;
}
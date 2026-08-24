#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{

	//Thet are logical operators that uses two rules. Once the two rule are statisfied the compiler would return a true(1) but if not it returns a false(0). It must satisfy at least one of the twi
	 
	 
	 
	 // >= the operand on the left must be greater than or equals to that on the right to give a true output,vice versa.
	 printf("This is for greater than or equals to\n\n");
	 bool value1 = (9 >= 6);
	 printf("    ->  %d  <- is greatee than but no equal to. al least one rule was met", value1);
	 
	 bool value2 = (6 >= 6);
	 printf("\n\n    ->  %d  <- The operand on the left is equal to but not greater than that on the right. it satisfies one rule", value2);
	 
	 	 bool value3 = (6.62 >= 9.1);
	 printf("\n\n    ->  %d  <- the left operand is neither greater nor equals to that on the right ", value3);
	
	
	printf("\n\nThis is for lessthan or equals to");
	
	
	
		 // <= the operand on the left must be less than or equals to that on the right to give a true output,vice versa, otherwis it gives a false output
	 
	 bool value4 = (6 <= 9);
	 printf("\n\n    ->  %d  <- the operand on the left is less than but not equals to that on the left is shoukd giv3 a true output", value4);
	 
	 bool value5 = (6 <= 6);
	 printf("\n\n    ->  %d  <- The operand on the left is equal to but not less than that on the right. it satisfies one rule", value5);
	
	bool value6 = (9.54 <= 6.78);
	 printf("\n\n    ->  %d  <- the left operand is neither less than nor equals to that on the right ", value6);
	 
	 // All these operations above can be carried out between value to value, variable to variable and variable to value
	 
	 //e.g.
	 
	 
	 int a = 5;
	 double b = 7.88;
	 
	 
	 bool v1 = (a < b);
	 printf("\n\n\n           %d      for variable to variable", v1);
	 
	 bool v2 = (a < 8.7);
	 	 printf("\n\n           %d      for variable to value", v1);
	 
	 
	return 0;
}
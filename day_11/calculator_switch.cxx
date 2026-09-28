/*
A simple calculator using switch statments


*/
#include <stdio.h>
int main()
{
	char operator ;
	printf("    Choose an operator    {    '+',    '-',    *' ,    '/' }     :    ");
	scanf("%c", &operator);
	
	double num1, num2;
	
	printf("    Enter first operand :");
	scanf("%lf", &num1);
	
	printf("    Enter second operand :");
	scanf("%lf", &num2);
	 
	 double result;
	
	
	switch (operator){
	    
	    case '+':
	    result = num1 + num2;	    
	    printf("      \nYour answer is    :%lf  ", result);
	    break;
	    
	    case '-':
	    result = num1 - num2;	    
	    printf("      \nYour answer is    :%lf  ",  result);
	    break;
	   
	    case '*':
	    result = num1 * num2;	    
	    printf("      \nYour answer is    :%lf  ",   result);
	    break;
	
	    case '/':
	    result = num1 / num2;	    
	    printf("      \nYour answer is    :%lf  ",   result);
	    break;
	    
	    default :
	    printf("    Invalid operator or number");
	    
	    }
	
	return 0;
	
}
/*
Data Types
int            4 bytes i.e. 2^32  | %d for printing
double     8 bytes i.e. 2^64  | %lf for printing
float        4bytes                 | %f for printing
char         1 byte                  | %c for printing    
*/


#include <stdio.h>
int main(int argc, char *argv[])
{
	
/*integer*/	
	int age = 10;
	
printf("Age is %d years old", age);


/*double*/
	double number = 12.45;
	printf("\nThe number is %lf", number);
	
	/*
	Double always has 6digits after the decimal points
	To avoid redundant values of zero the number of decimaala olaces to print can be specified by putting a "." then the number of decimal places that should be printed
	*/
	
	double new_number = number;
	printf("\n\n The rounded up number is %.2lf", new_number);


/*float*/

    float number1 = 4.5;
    printf("\n%f", number1);
        /*note if you do not put a f behind the value the compiler wouod think its a double value*/
     
    float number2 = 10.9f;
    printf("\n%.1f", number2);
    
    
/*exponential numbers*/
double acc_bal = 5.5e6;/*5.5×10^6*/
    printf("\n%lf", acc_bal);
    /*double is best suitable because it can accomodate a wide range 9f decimal number*/
    
    
/*character*/   
    
   char name= 'T';
    printf("\n\n%c", name);
/*    to get thr integer equivalent %d 8s used instead of %c*/
  printf("     its integer equivalent is '%d'", name);
    
	return 0;
}
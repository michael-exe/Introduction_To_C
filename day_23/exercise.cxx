#include <stdio.h>
int main()
{


printf("Enter Your Salary Amount : ");
double salary;// creating the salary variable
scanf("%lf", &salary);// accepting the value for the salary
// I initialy put the .3 i mentioned here but it did not compile because i can only 
// control the decimal places as it is printed not at the input stage
double* salPtr;// creating a pointer for the salary variable

salPtr = &salary; // assigning the address of the salary variable to the salary pointer

printf("%.3lf", *salPtr);// the .3 is to specify how many decimal places to be printed


    return 0;
}
// This is a progrsm that prints the table backwards to zero from ten
#include <stdio.h>
int main()
{
	

	int a; //creating the variable that would store the number's table


	printf("Enter the table number    :    ");
	scanf("%d", &a);// to accept the users input
     
     int count = 10;//initializing the count as 10 since its starting from tenth value
  
    while (count >= 1) { //so far the count is equal to or greater than 1 the prigram will continue carry out the statement im the while loop block. This serves as a low boundary
           int result = a * count;// to multiply the mumber by the count e.g 1*1,1*2,1*3,1*4,1*5 etc.
        printf("     %d  *  %d   =   %d\n", a, count, result);//for each result the product is printed
        count = count - 1; //the count is decreased, so it cam print the next lower stage
    }
	return 0;
}
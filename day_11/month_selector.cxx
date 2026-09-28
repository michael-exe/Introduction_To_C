/*
Programing task
    Use switch statement to create a program that will find the month based on the number input of that month from 1 to 12.
    And print the corresponding month based om input value.
eg. if number is 1 print January
    if 2 print february, etc.

*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int month;
	printf("Enter the number  :     ");
	scanf("%d", &month);
	
	switch (month){
	    case 1:
	    printf("Month : January");
	    break;
	    
	    	    case 2:
	    printf("Month :    February");
	    break;
	    
	    	    case 3:
	    printf("Month :    March");
	    break;
	    
	    	    case 4:
	    printf("Month :    April");
	    break;
	    
	    	    case 5:
	    printf("Month :    May");
	    break;
	    
	    	    case 6:
	    printf("Month : June");
	    break;
	    
	    	    case 7:
	    printf("Month :    July");
	    break;
	    
	    	    case 8:
	    printf("Month : August");
	    break;
	    
	    	    case 9:
	    printf("Month :    September");
	    break;
	    
	    	    case 10:
	    printf("Month :    October");
	    break;
	    
	    	    case 11:
	    printf("Month :    November");
	    break;
	   
	    	    case 12:
	    printf("Month :    December");
	    break;
	   
	    default:
	    printf("    !!  Invalid Number  !!");
	}
	
	/*In a year there a multiple choices one can pick so we can say each month is a case which can be selected be the user to query. At times the user can enter a wrong input(letters, any number that is not a case), so in such cases, we can say that the default response (since it is not part of the cases the compilier)should print an error message*/
	return 0;
}
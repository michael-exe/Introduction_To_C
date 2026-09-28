
//Creating the multiplication table using while loop
#include <stdio.h>
int main()
{
	

	int a; //creating the variable that would store the number's table


	printf("Enter the table number    :    ");
	scanf("%d", &a);// to accept the users input
     
     int count = 1 ;//initializing the count as 1 
  
  int result;
    while (count <= 12 ) { //so far the count is equal to or less than 12 the prigram will continue carry out the statement im the while loop block
         result = a * count;// to multiply the mumber by the count e.g 1*1,1*2,1*3,1*4,1*5 etc.
        printf("     %d  *  %d   =   %d\n", a, count, result);//for each result the product is printed
        count = count + 1; //the counted is increased to move to nlthe next level
    }
	return 0;
}
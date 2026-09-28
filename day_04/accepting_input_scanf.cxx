/*learning to take 8nput from users, then storing them im a variable using scanf*/

#include <stdio.h>
int main(int argc, char *argv[])
{
		/*to take integer values*/
		int age;
		printf("Enter your age :");
	scanf("%d", &age);
	printf("Age = %d", age);
	
	
	/*to take on multiple vales*/  
	      
	    /*initializing the variables*/  
	      double height;
	      char sex;
	 
	   /*accepting height value*/  
            	printf("\n\nEnter your height : ");
            	scanf("%lf", &height);
	 
	  /*accepting sex value*/  
            	printf("\nEnter your sex :");
            	scanf(" %c", &sex);

   	/*printing or dispalying  the values*/
   	
   		printf("\nUSER BIODATA");
	            printf("\nYour height is = %lf", height);
            	printf("\nYou are a %c", sex);
            	printf("\nYour age = %d", age);
	
	
	return 0;
}
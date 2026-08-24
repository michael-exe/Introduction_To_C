#include <stdio.h>
int main()
{
	int count = 1;//initializing our count to be 1
	while (count < 5)    {// as long as the count is less than 5
	    printf("My C Program ");// print My C Program (\n mean new line)
	    
	   /* 
	    printf("%d \n", count);
	        This is not part of the code but it just shows us the count as it increases
	    
	    */
	    
	    
	    count = count ++;//after printing, increase the coint by 1 amd go back to the condition of the while
	}
	//the program continues as long as the count is less than 5. thereforey c program would be printed 4 times
	return 0;
}
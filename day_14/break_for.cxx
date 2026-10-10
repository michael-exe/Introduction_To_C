/*       Break and continue statements are used to alter the normal flow of loops in c programming

    Break : It terminates the loop immedaitely it is encountered. It is used alongside decision making statements
    */
#include <stdio.h>
int main() {
	for (int i = 1; i <= 5; i++) {
	    
	    printf("        %d \n", i);
	    break;
	    
	    // here the break statement breaks the loop after the iteration of the for loop. After breaking the compiler extis the for loop statement
	    
	    printf("After the break");// as you can see this line is not executed
	}
	
	printf("\n\nExample 2\n\n");
	//examle 2 to stop the program when it gets to the third number
	
	
		for (int n = 1; n <= 5; n++) {
		   if (n == 3){
		       break;
		   }
	    printf("    %d\n", n);
	    
		}
		/*    Explanation
		since n ar 1 < 5 ,and since it is != 3 it is printed
		then 1 it added to the initial valie of n which is
		2 <5 and != 3 as well then it is printed,
		then when the value of n is updated to 3 
		it satisfies the if conditon therefore it executes the if 
		block that is directing the compilter to break the code 
		amd exit the for loop
		*/
		
		
		
	return 0;
}
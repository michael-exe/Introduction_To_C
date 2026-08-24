#include <stdio.h>
int main(int argc, char *argv[])
{
	//addition
    	int x = 5;
	    int result = x + 10;
    	printf("The reault is %d", result);
	
        	double a = 3.7;
	        double c = a + 6.34;
	        printf("\n%.2lf", c);
	        
	            double m = 3.45;
	            int n = 6;
	            double result_b = m + n;
	            printf("\nThe final result %.3lf", result_b);
	
	//addition, subtraction amd muktiplication al bwork similarly
	//or 
/*	int a = 6;
	printf("\na is = %d", a+4);*/
	
	
	int y = 6;
	int answer = y/3;
	printf(" \n\nyour answer is %d", answer);
	
	
		int h = 6;
	int answeer = h/4;
	printf(" \n\nyour answer is %d", answeer);
	//the compiler would only output the quotient value which is 1 in this case. In python it is called floor value. To get the exact value we use floating 
	
	double k = 6.00;
	double anser = k/4.22;
	printf(" \n\nyour answer is %.3lf", anser);
	
	
	//to find the remainder of a division the mogulus operator is used. The modulus can onky be used of interger and not floating point
	
	int d = 7;
	int s = d % 3;
	printf("\n\n your anser is %d", s);
	// it should output '1' as a remainder
	
	return 0;
}
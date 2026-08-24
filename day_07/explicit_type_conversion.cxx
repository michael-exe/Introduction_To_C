#include <stdio.h>
int main(int argc, char *argv[])
{
	double a = 5.67;
	int b = 9;
	 double result = a + b;
	 printf("         %lf", result);
	 
	 // implicir type conversuon is usually done with  an assignment operator but here the tyoe you want it to be converted to iss exolicitly staelted using parenthesis
	 
	 
//double into int
	
	double x = 5.67;
	int y = 9;
	 double sum = (int)a + y;
	 printf("         %lf", sum);
	 
	 
	 
	 double m = 5.67;
	int n = 9;
	int sum1 = (int)m + n;
	 printf("         %d", sum1);
	 
	 
//int to double

    int g = 7;
    double h = 4.56;
    double k = (double)g + h ;
    printf("\n\n     This is for int to double conversion\n %lf", k);
    
    int u = 9;
    int  r = 2;
    double i = (double)u / r ;
    printf ("\n\n        %lf", i);
    
  
	 
	return 0;
}
#include <stdio.h>

int fac (int n){
  if (n > 0)
      {
          return n * fac(n - 1);
      }
    else 
    {
        return 1;
    }
}
int main()
{
	int number ;
	printf("        Enter A Number To Find Its Factorial    :    ");
	scanf("            %d", & number);
	
	if (number >= 0)
	{
	int result = fac(number);
	
	printf("Answer    :  %d   ", result);
	}
	else 
	{
	    printf("        ERROR\n        ERROR\n        ERROR\n    Invalid Input !!");
	}
	return 0;
}
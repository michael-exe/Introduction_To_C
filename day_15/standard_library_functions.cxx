
/*while these are user defined functions there are standard library functions that are already built in and we can diracrly use them e.g. 
1).    The printf function: It is included in the std.io libraryfile, which is why we need to include the file using #include
2).    The sqrt(): It is used to compute the square root of a number an can be found in the 
  */
#include <stdio.h>
#include <math.h>
int main()
{
float result = sqrt(25);//sqrt return the value of the sqare root in flaotin point so we use float datatype
	printf("Square root is %f", result);
	
	
	return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
	//boolean is a data type that can only store two values, true or false
	// bool key word is used to create booloean type variables
	//to use boolean type variable the stdbool.h header file must be imported first
	
	bool value1 = true;
	bool value2 = false;
	//to print bool values %d is used because boolean values are represented by integer values, 0(false) & 1(true)


//do not use capital letters
	printf("        %d ", value1);
	printf("\n        %d", value2);
	
	return 0;
}
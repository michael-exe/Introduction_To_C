//Return Types
#include <stdio.h>
int addNumber(int number1, int number2){
int add = number1 + number2;
return add;//the return statem isbthe last statement of a function. Anything after that wont be executed,but the compiler would move outside the function
}
int main()
{
	int result  = addNumber(4,5);//The return value replaces the function call
	printf("Result = %d", result);
	// basically void is used when you want the function to return a vlue back into the code unlike when you use void and the program just stires the value amd only prints it on request

/*The data type of the return value and the data type of the variable where the return value is stored should be the same i.e.
the data tyoe of add should be the same with that of result
*/

		return 0;
}
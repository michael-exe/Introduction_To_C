
//c type header file(used to perform operations om characters)
#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	char alpha = 'e';
char upper = toupper(alpha);//upper case manipulation
printf("        this is it %c\n", upper);

char lower = tolower(upper);//lower case manipulation
printf("        %c", lower);
	
	
	return 0;
}
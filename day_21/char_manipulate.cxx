//Access Characters of a String
#include <stdio.h>
int main()
{
// Since a string is an array of characters, we can access the characters using their respective index numbers
char str[] = "Taylor Michael";
// to format or change the characters in a string we can use :
// stringName[index]

str[0] = 'S';// note that initializiing a string uses doule quotes (""), 
//while a character uses single quote ('')

printf("%s\n", str);

    return 0;
}
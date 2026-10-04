//Access Characters of a String
#include <stdio.h>
int main()
{
// Since a string is an array of characters, we can access the characters using their respective index numbers
char str[] = "Taylor Michael";
// to acces the characters we can use :
// stringName[index]


printf("%c\n", str[1]);//to print a
printf("%c\n", str[6]);//to print space
printf("%c\n", str[3]);//to print l
// note that the space is regarded as a character in this array 

    return 0;
}
#include <stdio.h>

int main()
{

    //printf("Hello world\n");

 char str[] = "Hello World";// this looks like an array becuase a string is an array of characters
     printf("%s\n", str);// note that the format specifier for string is %s


/* This placeis printing twice, which is not meant to be to so
 char wrd[] = { 'h','e','l','l','o',' ','w','o','r','l','d'};// it is also the same as str array
    printf("%s\n", wrd);
*/

    // every c string is terminated by a null character \0. This character helps the compiler to identify the end of the strings, note that it is not typed in but added by the compiler


     char sex = 'M';
     printf("%c", sex);//remember that the format specifier for character is %c


    return 0;
}
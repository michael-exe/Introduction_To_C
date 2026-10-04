// C has a lubrary that makes working with strings easier
//here i'll be using four most important function is the library
#include <stdio.h>
#include <string.h>// so we can use the functions in that library the library has to be imported
int main()
{

    char name[]= "Taylor Michael";
    printf("My name is %s", name);


// string length function note it s just like sizeof
printf("\nLength of String is : %zu\n", strlen(name));
printf("size of the array :%zu\n", sizeof(name));// the size 15 because of the \o that is added to it by the compiler


//String copy function
// it is used to copy ome string into another

char food[] = "pizza";
char bestFood[strlen(food)];

strcpy(bestFood, food);//it takes two values : the destination then the target
 printf("%s\n", bestFood);



 //string concatination i.e. to add two strings together

 char text1[] = "Hello ";
 char text2[] = "World";

 strcat(text1,text2);
// this adds the second string to the first string
 printf("%s\n", text1);



 // string comparison function
// the fuction returns 0 if the strings are equal and a random nonzero value if the strigns ar not equal
 char text3[] = "abcd";
 char text4[] = "abcd";
// you can change their content to see how it works
 int result = strcmp(text3,text4);
printf("\n The result is %d", result);
// apart from this four there still a lot that you can do with strings in c but these are the most important and most used functions
    return 0;
}
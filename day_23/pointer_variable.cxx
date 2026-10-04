#include <stdio.h>
int main()
{
// Pointer variables are also variables but they do not store the values but addresses of that variable

int age = 25 ;//this is a normal variable

printf("%p", &age);

int* ptr = &age ;// the '*' is used to tag it as a pointer variable

printf("\n%p", ptr);


// this progam should prit the same memory address for the two variable






    return 0;

}
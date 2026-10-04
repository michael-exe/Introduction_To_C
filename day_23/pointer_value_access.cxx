#include <stdio.h>

int main()
{

int age = 25 ;//this is a normal variable

int* ptr = &age ;// the '*' is used to tag it as a pointer variable

printf("Address is : %p\n", ptr);
printf("Value is :  %d\n", *ptr);// note that %d to specify tis format 
//and * to indicate that its for that pointer 

// ptr is the memory address while *ptr is te value

/* To change the value in variable using it's pointer

Remember that we can acces the value of a variable using the point assingd to gthat varible.
similarly we can change the value using it pointer variable

*/
 *ptr = 35; // since *ptr = &age  , when age is = 25
 printf("The new value = %d\n", *ptr);

 printf(" to check if age has change to %d\n", age);


 /*COMMON MISTAKES WITH POINTERS
int *ptr;

int* ptr;
 The two lines above are two ways to create pointers but the first one generates confusion 
 whenworking with it

 int *ptr = &age; This just stores the value of age into ptr and not the address of age
 int* ptr = &age; This assigns the variable and its address to the pointer,
  therefore making better for creating variable pointer


  assuming:
  int number



*/

    return 0;
}
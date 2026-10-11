/*A function that accpets a pointer as an argument and
change the value pointed by the pointer

int* num = &number;
*/


#include <stdio.h>
void findValue(int* num)
    {
    *num = 39;// this assigns 39 as a value to num memory


    }




int main()
{


int number = 21;// initialize a function number
findValue(&number);// remember the a pointer points to a memory address
/* therefor we are saying that int* num = &number; 
and ince we already assigned 39 to that place in the function, then
upon calling the function it would then store the new value in the numbers address
thereby changin the value inside
*/
printf("new number is %d \n ", number);
    return 0;
}
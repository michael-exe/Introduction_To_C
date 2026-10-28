/*A function that accpets a pointer as an argument and
change the value pointed by the pointer

NOTE TO UNDERSTAND THIS CODE START FROM INT MAIN FUNCTION AND FOLLOW THE COMPILATION PIPELINE
*/
#include <stdio.h>
void changeValue(int* num)
    {
    *num = 39;//The value of the num is changed to 39
    //Since the pointer num now points to memory address &number their values becomes the same hence replacing 21 with 39
    }


int main()//Here the code starts from the int main where we have a number. How aim is to change the vau of the variable
//using a function that works with pointers. 
{

int number = 21;
changeValue(&number);//The function call aocurs to change the value of the variable number
//Remember that the parameters are defined. Here the value in the memory location &number is passed into the pointer num


printf("new number is %d \n ", number);//the value of number is then printed
    return 0;
}

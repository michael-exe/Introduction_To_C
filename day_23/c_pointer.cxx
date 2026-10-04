// Pointers are very useful in c progrmming, 
// because they allow us to work directly with the computer's memory


#include <stdio.h>
int main()
{
//in c when every variable is decleared a vaeaible a space will be allocated to that variable in the memory 
// c allows us to acces the memory address to that variable. 
// The '&' symbol is used with the varible name to access the address 
int age =25;
printf("%p", &age);// the format specifier '%p' is used to access the address

//  0x7ffe72f00924 is the address of that variable on my computer. "IT WOULD BE DIFFERENT ON YOURS"
//  0x7ffe72f00924 is the address of that variable on my computer. "IT WOULD BE DIFFERENT ON YOURS"

//if you remember we used '&' when assigning an input to a particular memory location, this is because scanf() needs to know the address of the variable to store the input value in that variable.


scanf("%d", &age);

    return 0;
}
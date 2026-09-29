// Out of bound error occurs when the number of iterations is more than the size of the array
//in such cases the compiler automatically fills it wiht random numbers eg '0' in this case

#include <stdio.h>

int main ()
{
       int age[5];// intializing the size of the array
        
        for ( int i = 0; i < 5; ++i)//setting up a loop to accept the data continuosly
            {
                 printf("Enter your age:        ");
                    scanf("%d", &age[i]);
            }
       
       for (int i = 0; i < 6; ++i)//printing the ages stored in order of serial number 0-4 ie 5 inputs
         {
                 printf("your age is %d\n", age[i]);
           }
    
    
    
    return 0;
}
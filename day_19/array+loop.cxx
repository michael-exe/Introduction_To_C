//This program is to accept age in order of their serial nmber of users and print them out
#include <stdio.h>

int main()
{
        int age[5];// intializing the size of the array
        
        for ( int i = 0; i < 5; ++i)//setting up a loop to accept the data continuosly
            {
                 printf("Enter your age:        ");
                    scanf("%d", &age[i]);
            }
       
       for (int i = 0; i < 5; ++i)//printing the ages stored in order of serial number 0-4 ie 5 inputs
         {
                 printf("your age is %d\n", age[i]);
           }
  /*
  you can add this code to check
        printf("%d\n",age[0]);
        printf("%d\n",age[1]);
        printf("%d\n",age[2]);
        printf("%d\n",age[3]);
        printf("%d\n",age[4]);
            */
   return 0; 
}
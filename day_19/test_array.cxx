#include <stdio.h>

int main()
{
        int age [5] = {21, 40, 20, 19, 60};// to initialize each age
        int sn;// creationof a traking serial number
        printf("Enter Your Serial Number  :    ");
        scanf("%d", &sn);//users serial number to tally with his or her age
        
        
        if (sn <=4){
        int userAge = age[sn];
        printf("Your age is %d \n\n", userAge);
        }
        else{
            printf("ERROR ERROR ERROR \n\n");
        }
        
        /*
        printing specific values using their assigned place value numbers a.k.a. their index number
        printf("This is a test\n");
        printf("%d\n", age[0]);
        printf("%d\n", age[1]);
        printf("%d\n", age[2]);
        printf("%d\n", age[3]);
        printf("%d\n", age[4]);
        
        */
        
   return 0; 
}
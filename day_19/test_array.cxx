#include <stdio.h>

int main()
{
        int age [5] = {21, 40, 20, 19, 60};
        int sn;
        printf("Enter Your Serial Number  :    ");
        scanf("%d", &sn);
        
        
        if (sn <=4){
        int userAge = age[sn];
        printf("Your age is %d \n\n", userAge);
        }
        else{
            printf("ERROR ERROR ERROR \n\n");
        }
        
        
        //printing specifice vakues using their assigned place vakue numbers aka index number
        printf("This is a test\n");
        printf("%d\n", age[0]);
        printf("%d\n", age[1]);
        printf("%d\n", age[2]);
        printf("%d\n", age[3]);
        printf("%d\n", age[4]);
        
   return 0; 
}
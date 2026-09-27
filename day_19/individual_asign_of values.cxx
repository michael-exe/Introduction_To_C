#include <stdio.h>

int main()
{
        int age[5];
        
        age[0] = 21;
        age[2] = 20;
        age[1] = 40;
        age[3] = 19;
        age[60] = 60;
        
        /*The user can also be asked to asign
        
            printf("PLEASE ENTER 5 INPUT VALUES    :    ");
                scanf("%d", &age[0]);
                 scanf("%d", &age[1]);
                 scanf("%d", &age[2]);
                 scanf("%d", &age[3]);
                 scanf("%d", &age[4]);
        */
       
        
        printf("This is a test\n");
        printf("%d\n", age[0]);
        printf("%d\n", age[1]);
        printf("%d\n", age[2]);
        printf("%d\n", age[3]);
        printf("%d\n", age[4]);
        
   return 0; 
}
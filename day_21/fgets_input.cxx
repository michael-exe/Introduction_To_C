#include <stdio.h>
int main()
{
      printf("Enter Your Mother Name:");
      char mum[20];
      fgets(mum,sizeof(mum),stdin);// or specify the size directly as 'fgets(mum, 20, stdin);' 

      printf("Your mother's name is : %s", mum);



     return 0;
}
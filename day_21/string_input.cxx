#include <stdio.h>

int main()
{


    printf("ENTER YOUR NAME :");
    char name[20];// 20 is the size of the array
    scanf("%s", name);// We do not need a & symbol because the compiler already knows thart it's an array. i still have to search for this

    printf("%s\n", name);
/*
Note the compiler would only accept characters before it encounters a blank spacce
e.g.if  Taylor Michael is the input
 the compiler would only store Taylor as an input and leave out Michael


 A special function (fgets) is used to accept the entire string of input

--->    fgets syntax

    fgets(name, sizeof(name), stdin);
     parameters description
     --->1st = name of the string
     ----> 2nd = the size of the string
     ----> 3rd means its a standard input function



you can run the code in another skecth

    printf("Enter Your Mother Name:");
      char mum[20];
      fgets(mum,20,stdin);

      printf("%s", mum);


*/



    return 0;
}
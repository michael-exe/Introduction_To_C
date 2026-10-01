#include <stdio.h>

int main()
{
    // this portion uses for loop to intialize values to the array
    int arr[2][3];
    for (int i = 0; i < 2; ++i) 
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("Enter Numbers: ");
            scanf("%d", &arr[i][j]);
        }

    }

/*
how the above works:
Initialy i = 0 and it < 2 so it executes the second for loop
at the second for loop it accepts three values of j, 
the i is increased by 1 and becomes 1 and is less than 2 and the second for loop is re-executed
storing another set of js

           j     j     j
    ____|_____|_____|_____
    i   |  *  |  *  |  *
    ____|_____|_____|_____
    i   |  *  |  *  |  *

*/
  



// this loop prints the values in the 'arr' array
    for (int i = 0; i < 2; ++i) 
    {
      printf("\n");
        for (int j = 0; j < 3; ++j)
        {
           printf("%d\n", arr[i][j]);
        }
      printf("\n");//to demacate each values in each
    }

    return 0;
}
#include <stdio.h>
int main ()
{
    int numbers[5] = {1, 3, 5, 7, 9};// initialisation of array
    //to access the the array using the pointer
    // since 'numbers' a specifies the address then *number gives the pointer
    // similarly if (number + i) gies the address of i element in numbers then *(number + i) would give the pointer to i element in the array number
    
        for (int i = 0; i < 5; ++i)
            {
                printf("%d = %p\n", *(numbers + i), (numbers + i));
                //here we can see that *(number +i) gives the value of i, while (number + i) gives memory address. 
                //nb theres no need for a & because it is an array of integers
            }

//note that *.. points to he value, &.. specifies the address, (...) the address for 

// To change array element using pointers
// to change he value, all that needs to be done is to assign a new value to the element's variable

*(numbers) = 2;
*(numbers + 1) = 4;
*(numbers + 2) = 6;
*(numbers + 3) = 8;
*(numbers + 4) = 10;
            printf("\n");// to gice a new line demacation
                for (int i = 0; i < 5; ++i)
                {
                    printf(" %d = %p\n", *(numbers + i), (numbers + i));
                   // to print the new values of the array numbers 
                }

// note that in e=the output the new vlues would be assigned to the same memory locations of previous vslues

    return 0;
}
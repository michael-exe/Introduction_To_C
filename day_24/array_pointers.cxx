#include <stdio.h>
int main()
{

    
 int numbers[5] = {1, 3, 5, 7, 9};// initialisation of array

    for (int i = 0; i < 5; ++i)
        {
            printf("%d = %p\n", numbers[i], &numbers[i]);
            // the line above will print the element and the memory addresss of each element
            /*
                e.g.
                1 = 0x7ffda5ebef40
                3 = 0x7ffda5ebef44
                5 = 0x7ffda5ebef48
                7 = 0x7ffda5ebef4c
                9 = 0x7ffda5ebef50 
                note that the difference between the addresses is 4, this s because of the sizeof the data type 
                which in this case is 4bytes           
            */
            
        }
        printf("\n Adddress of the array 'numbers' = %p", &numbers);
// note that the address of the first element of the array is also the address of the array



printf("\nUsing arrayName  + indexNumber (of element)");
//number + i givs the i element
printf("\n Array address of 1 %p", numbers);
// i can use teh array name as a pointer 
//because in most context array names are by default convered to pointers
//so their names can be used as pointers
printf("\n Array address of 3 %p", numbers + 1);
printf("\n Array address of 5 %p", numbers + 2);
printf("\n Array address of 7 %p", numbers + 3);



//      OR 


for (int i = 0; i < 5; ++i)
        {
            printf("\n%d = %p\n", numbers[i],  numbers + i);
            // the line above will print the element and the memory addresss of each element
            /*
                e.g.
                1 = 0x7ffda5ebef40
                3 = 0x7ffda5ebef44
                5 = 0x7ffda5ebef48
                7 = 0x7ffda5ebef4c
                9 = 0x7ffda5ebef50 
                note that the difference between the addresses is 4, this s because of the sizeof the data type 
                which in this case is 4bytes           
            */
            
        }
      
        





    
    return 0;
}
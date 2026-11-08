/*dynamic memory allocation allows us to allocate memory at runtime. 
It is used when we do not know the size of the data at compile time. 
The memory is allocated from the heap, and it is the programmer's respomsibility to free the memory when it is no longer needed. In C/C++, we can use the malloc() function to allocate memory dynamically. 
The malloc() function takes a single argument, when the size of the memory block to be allocated in bytes, and returns a pointer to the first byte of the unalocated memory block
*/

/* THe malloc is short for memory allocation and is used to allocate a memeory block of a specified size in bytes. It returns a pointer to the first byte of the allocated memory block. If the allocation fails, it returns a NULL pointer.
E.G. if we need to allocate memory to store n double type values, we can use the malloc() function and the syntax is as follows:
 pointer_variable = (double*) malloc(n * sizeof(double));
 */
#include <stdio.h>
#include <iostream>
#include <string.h>


int main(){

        int n = 4;// the number of elements to be allocated

        int* ptr;

        ptr = (int*) malloc(n * sizeof(int));
        // the ptr stores the addres of the first byte of the allocated memory block. Then we can use the ptr variable to acces the remaining elemnts of the allocated memory byte

        // after the dynamic allocation of memory we use the free() fnction to free the memory so there wouldnt be a leakage in the memory

        //basically the syntax is to putthe pointer as the free() argument

        if (ptr == NULL){
            printf("Memory cannot be allocated");
            return 0;
        }

        free(ptr);

        printf("ENTER THE INPUT VALUS: \n");

        for (int i = 0; i < n; ++i){

            scanf("%d", &ptr[i]);
        };


        printf("the values are : \n");
        for (int i = 0; i < n; i++){// here you can either do i++ or ++i

            printf("%d\n", *(ptr +i));
        };




    return 0;
}

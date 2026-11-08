#include <stdio.h>
#include <string.h>
#include <iostream>

int main(){
// we use this wahen the original space allocated has been exhausted and the programmer wants to allocate more memory blck space
/*if the initial allocation was :

ptr = (int*) malloc(n * sizeof(int));

then the reallocation would be:

ptr = realloc(ptr, (n+more space to be added)*sizeof(int));



*/

printf("this is for re allocation of memory");




    return 0;
}
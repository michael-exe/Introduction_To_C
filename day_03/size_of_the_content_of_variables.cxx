#include <stdio.h>
int main(int argc, char *argv[])
{
    /*To find the byte size of a variable
    syntax
    
    printf("datatype size = %zu" , sizeof(variable name))
    
    */
    
    
    int age = 9;
        printf("%d", age);
    
    printf("int size = %zu", sizeof(age));
    
    
    
  char letter = 'M';
  printf("\n\nchar size = %zu", sizeof(letter));
  
return 0;	
}
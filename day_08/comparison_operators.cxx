#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
    
    //comparison operators
    /*
    > greater than
    < less than
    == equal to
    != not equal to""
    */
    
    
    
    // > checks if a value is greater then another value
    
    bool value1 = (12 > 9);
    printf (" ->  %d  <- shows that 12 is indeed > 9      and stores it in value1", value1);
    
    bool value2 = (5 > 9);
    printf ("\n\n ->  %d  <- shows that 5 is indeed < 9 and stores it in value2", value2);
    
    
    
    // < checks if a value is less than another value
    
    bool value3 = (5 < 8);
    printf("\n\n ->  %d  <- shows that 5 < 8", value3);
    bool value4 = (5<4);
    printf("\n\n ->  %d  <- shows that 5 is not < 4",             value4);
    
    
    
    // == checks if two values are equal. NB it is diffrrnt from the assignment opperator that is used to assign values to variables etc
    
    bool value5 = (5 == 5);
    printf("\n\n ->  %d  <- shows that the two values on the right amd left are equal", value5);
    
    bool value6 = (6 == 5);
    printf("\n\n ->  %d  <- shows that the two values on the right and left are not equal",value6);
    
    
    
    // != is the not equal to operator
     bool value7 = (6 != 5);
    printf("\n\n ->  %d  <- shows that the two values on the right and left are not equal    7777",value7);
    
    
    
    
return 0;	 
}
/*
Loops arr sued to repeat a block of codes under certian condition a certain number of times, eg. supose we want to printf a mesage a number of times, instead of printing it one after the other, we  can use the while loop syntax once to printf that message as many time as we want

syntax
while (condition) {
    // statement inside the whils to be repeated
    }

NB : 
        The condition is a boolean expression that returns true or false. When the condition is true the statement in the while loop would be executed then the condition is evaluated again and if true it execited the statement again.
        The while.loop would continue to do that until the test condition returns false. Then the loop is terminated
*/ 
#include <stdio.h>
int main(){
    while (1 < 5){
        
        printf("While loop in C \n");
        // This is am infinite while loop because 1 will always be less than 5
    }
    
    
    return 0;
    }
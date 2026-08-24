
/* Switch is used for decison making  is used when there are multuple options to and only one option is to be chosen. The body of the option chosen would be executed. 

if the value of the variable or the expression is c9mpared with each case. If the result of the variable is value1 then the body of case value 1 wouod be excuted. similarly if the result is 2 then the body of value2 wouod be executed. However if the value does not match any case then the body of the default case would be executed

->syntax
switch(varuable/expression){
    case value1 :
    // body of case 1
    break;
    
    case value2 :
    // body of case 2
    break;
    
    case value3 :
    // body of case 3
    break ;
    
    default :
        //body of default
    }
*/
#include <stdio.h>
int main(int argc, char *argv[])

{

    int number;
        printf("    Enter number from 1 to 7 :    ");
        scanf("        %d", &number);
        // This program prints which day of the week it is provided the user tyoes in the day number
        switch(number){
            case 1:
            printf("Sunday");
            break;
            
            case 2:
            printf("Monday");
            break;
            
            case 3:
            printf("Tuesday");
            break;
            
            case 4:
            printf("Wednesday");
            break;
            
            case 5:
            printf("Thursday");
            break;
            
            case 6:
            printf("Friday");
            break;
            
            case 7:
            printf("Saturday");
            break;
          
          default:
          printf("Invalid number");
       }

	
	
	/* NB
	-    The default case can be removed if we are sure that the input value will match one of the cases
	-    The breqke statement terminates the switch program once the mathlching case has be excuted
	*/
	return 0;
}
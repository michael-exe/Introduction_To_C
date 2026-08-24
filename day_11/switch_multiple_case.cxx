#include <stdio.h>
int main(int argc, char *argv[])

{
/*We can check multiple cases simultaneously by ommitting the break statement

Assuming our week starts on monday and we want to write a progrsm that tels us what caetegory a day is either weekday or weekend




*/
    int number;
        printf("    Enter number from 1 to 7 :    ");
        scanf("        %d", &number);
        
        switch(number){
            case 1:                 
            case 2:         
            case 3:
            case 4:                      
            case 5:
            printf("Weekday");
            break;
            
            case 6:        
            case 7:
            printf("Weekend");
            break;
          
          default:
          printf("Invalid day number");
       }

	
	return 0;
}

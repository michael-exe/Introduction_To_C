/*
1. accepts scores for each subjects using arrays
2.computes the average maybe using math lib or just normal operator
3.prints out the average score for teh student
*/
#include <stdio.h>



int main ()
{
  int score[5];
   for( int i = 0; i < 5; ++i)
    {
        printf("Enter your subject score : ");
        scanf("%d", &score[i]);
    } 
        
    int sum = score[0] + score[1] + score[2] + score[3] + score[4];
    double avg = sum / 5;//to compute the average
    printf("Your averge is : %.4lf", avg);// .4 is to print the result njust four decimal places

// why is my result for 2,5,8,7,9 6.0000 and not 6.2000


    return 0;
}
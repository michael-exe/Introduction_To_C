// A multiolication table using do-while loop
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the table number    :    ");
	scanf("%d", &a);
	int result;
	int count = 1;

	do{
	    result = a * count;
	    printf(" %d × %d = %d \n", a, count, result);
	    count = count + 1;
	    
	}while(count <= 12);
	
	return 0;
	
}
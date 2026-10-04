// A program that takes full name as inut and prinnts it. Then changes the first lette of the name to X 
#include <stdio.h>
int main()
{

printf("Enter Your Name :");
char name[20];
fgets( name, sizeof(name), stdin);
printf("%s\n", name);

name[0] = 'X';
printf("%s\n", name);



    return 0; n

}
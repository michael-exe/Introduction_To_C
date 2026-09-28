    #include <stdio.h>
int main(int argc, char *argv[])
{

	int age;
	int sex;
	
	printf("Enter Your Details(age,sex) => ");
	scanf("%d %c", &age, &sex );
	
	printf("Your age is %d", age);
	printf("\nYour sex is %c", sex);
	return 0;
}
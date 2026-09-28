/*
A nested if is simply an if statement inside another if statement. It is used when you want to make a second decision only after the first condition is true.
*/

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote.\n");

        if (age >= 60) {
            printf("You are also a senior citizen.\n");
        }
    } else {
        printf("You cannot vote.\n");
    }

    return 0;
}
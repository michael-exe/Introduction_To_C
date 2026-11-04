//struct
// A structure struct is used to group data of different type into a single array
//each member of the structure is called a member
#include <stdio.h>
#include <string.h>
struct Student{
  char name[10];// st
  double cgpa;
  int age; 
};
   


int main(){


  //post declaration 
  struct Student s1;
  //to be able to access strings in structures, the strcpy() is used instead of s1.name = "Taylor";
  strcpy(s1.name,"Taylor");
  s1.cgpa = 4.99;
  s1.age = 27;  



// During delaration time
struct Student s2 = {"Solomon", 4.95, 34};


//printing te contents
printf("%s , %.3lf , %d", s1.name,s1.cgpa,s1.age);


printf("%s , %.2lf , %d", s2.name,s2.cgpa,s2.age);
    return 0;
}
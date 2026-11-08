//enums are types with specific values
#include <stdio.h>
#include <string.h>

//"enum" is used as a keyword. I t contains four fixe values called enum constants
enum size {
    Small,
    Medium,
    Large,
    ExtraLarge
/*Small = 38,
    Medium = 40,
    Large = 43, 
    ExtraLarge = 44,
*/
};
int main(){

enum size ShoeSize1;// the ShoeSize is a variable that can store any of the values in the enums sizes
 ShoeSize1 = Small;

enum size ShoeSize2;
 ShoeSize2 = Medium;

enum size ShoeSize3;
 ShoeSize3 = Large;

 enum size ShoeSize4;
 ShoeSize4 = ExtraLarge;


 // all the constant are internally represented as fixed integral values known as integral comstant
 /* 
 Small - 07
 Medium - 1
 Large - 2
 ExtraLarge - 3

 all these 1,2,3,4 are all by defaul , but the y can be change and would use that new vakue throughout the program
 
 */


 printf("%d\n",ShoeSize1);
 printf("%d\n",ShoeSize2);
 printf("%d\n",ShoeSize3);
 printf("%d\n",ShoeSize4);
 



 //to acces andhange the values of the integrals, their values must be specified from the declaration
  //check line 11 to see this 
 
 
 
 
 
 
 return 0;

}
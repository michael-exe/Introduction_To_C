/*declaration of multidimensional array

syntax:
   dataType arrayName[number of sub arrays][number of elements in each sub array];
   e.g. int age[2][3];   therefore this array can store 6 elements in total
*/
 
#include <stdio.h>

int main()
{
// initializing a two dimensional array
int arr[2][3] ={ {1,3,5} , {2,4,6} };
//the array above can be thought of as a table with two rows(arrays) and three columns(its elements)

/*to access theelements in the multidimensionl array
The first specifies the array, the second specifies which element of the array to be accessed*/

printf("%d\n", arr[0][0]);// in this case we are accessing the first element of the first array in the array 'arr' which is 1 in this case
printf("%d\n",arr[1][2]);// third element of the second array  


/*To change element of multidimensional array using array indexes

    arr[0][2] = 7;
    arr[1][1] = 8;

    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][1]);

*/


    return 0;
}